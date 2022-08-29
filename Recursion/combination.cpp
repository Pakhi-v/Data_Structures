#include <bits/stdc++.h>
using namespace std;
int nCr(int N, int r)
{
    int res = 0;
    if (r == 0) {
        return 1;
    }
    else {
        res = nCr(N, r - 1)
              * (N - r + 1) / r;
    }
    return res;
}
int main()
{
    int N = 5, r = 3;
    cout << nCr(N, r);
    return 0;
}