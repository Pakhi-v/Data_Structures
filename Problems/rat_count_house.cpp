#include<bits/stdc++.h>
using namespace std;
int calculate (int r, int unit, int arr[], int n)
{
  if (n == 0)
    return -1;
  int totalFoodRequired = r * unit;
  int sum = 0;
  int i = 0;
  for (i = 0; i < n; ++i)
    {
      sum += arr[i];
      if (sum >= totalFoodRequired)
	{
	  break;
	}
    }
  if (totalFoodRequired > sum)
    return 0;
  return i + 1;
}
int main ()
{
  int r;
  cin >> r;
  int unit;
  cin >> unit;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }
  cout << calculate (r, unit, arr, n);
  return 0;
}