#include <iostream>
#include <algorithm>

int productSmallestPair (int *array, int n, int sum)
{
  int answer, temp, i, j, check;
  if (n < 2)
    {
      answer = -1;
    }
  else
    {
      for (i = 0; i < n; i++)
	{			// sorting of array
	  for (j = i + 1; j < n; j++)
	    {
	      if (array[i] > array[j])
		{
		  temp = array[i];
		  array[i] = array[j];
		  array[j] = temp;
		}
	    }
	}
      check = array[0] + array[1];
      if (check <= sum)
	{
	  answer = array[0] * array[1];
	}
      else
	{
	  answer = 0;
	}
    }
  return answer;
}

int main ()
{
  int n, sum, result, i;
  std::cin >> sum;
  std::cin >> n;
  int *array = new int[n];
  for (i = 0; i < n; i++)
    {
      std::cin >> array[i];
    }
  result = productSmallestPair (array, n, sum);
  std::cout << result;
  delete[]array;
  return 0;
}