#include <iostream>

using namespace std;

int differenceofSum (int n, int m)
{
  int i, sum1 = 0, sum2 = 0;
  for (i = 1; i <= m; i++) { 
    if (i % n == 0) { 
        sum1 = sum1 + i; 
        } 
        else { 
            sum2 = sum2 + i; 
            } 
            } 
            if (sum2 > sum1)
    return sum2 - sum1;
  else
    return sum1 - sum2;
}

int main ()
{
  int n, m;
  int result;
  cin >> n;
  cin >> m;
  result = differenceofSum (n, m);
  cout << result;
  return 0;
}