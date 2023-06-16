int getlargest(int arr[],int n){
    int res = 0;
    for(int i=1;i<n;i++)
    if(arr[i] > arr[res])
    res = i;
    return res;
}

//else using std 
int getlargest(int arr[],int n){
    return *max_largest(arr,arr+n);
}