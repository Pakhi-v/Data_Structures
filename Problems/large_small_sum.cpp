#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int LargeSmallSum (vector < int >&arr)
{
  int length = arr.size ();

  if (length <= 3)
    {
      return 0;
    }

  vector < int >evenPos;
  vector < int >oddPos;

  for (int i = 0; i < length; i++)
    {
      if (i % 2 == 0)
	{
	  evenPos.push_back (arr[i]);
	}
      else
	{
	  oddPos.push_back (arr[i]);
	}
    }

  // Sort the even position array in descending order
  sort (evenPos.rbegin (), evenPos.rend ());

  // Sort the odd position array in ascending order
  sort (oddPos.begin (), oddPos.end ());

  return evenPos[1] + oddPos[1];
}

int main ()
{
  vector < int >arr = { 3, 2, 1, 7, 5, 4 };

  int result = LargeSmallSum (arr);
  cout << result << endl;

  return 0;
}