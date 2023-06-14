//comparsion function
bool mcmp(pair<int,int> a, pair<int,int> b){
    double r1 = (double)a.first/a.second;
    double r2 = (double)b.first/b.second;

    return r1>r2;

}
//main function
double fkanps(int W, pair<int,int> arr[], int n){
    sort(arr,arr+n,mycmp);
    double res = 0.0;
    for(int i=0;i<n;i++){
        if(arr[i].second <= W){
            res + = arr[i].first;
            W = W - arr[i].second;
        }
        else{
            res + = arr[i].first * ((double) W / arr[i].second);
            break;
        }
    }
    return res;
}