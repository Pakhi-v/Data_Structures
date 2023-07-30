//Given a natural number n, print all distinct divisors of it.

void printdivisors(int n){
    vector<int> v;
    for(int i=0;i<=sqrt(n);i++){
        if(n%i == 0){
            if(n / i == i)
            cout<<i;
            else{
                coutt<<i;
                v.push_back(n/i); //push second divisor
            }
        }
    }
    for(int i = v.size()-1;i>=0;i--)
    cout<<v[i]; //vector will be printed in reverse
}