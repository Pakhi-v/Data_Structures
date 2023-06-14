//Activity Selection problem

//comparsion function
bool mycmp(pair<int,int> a, pair<int,int> b){
    return(a.second < b.second);
}
//main function
int maxAct(pair<int,int>, int arr[], int n){
    sort(arr,arr+n,mycmp);
    int prev = 0;
    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[curr].first >= arr[prev].second){
            res++;
            prev=curr;
        }
    }
    return res;
}