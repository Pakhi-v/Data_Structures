class solution{
    public:

    int firstKelement(int arr[], int n , int k){
        map<int,int> mp;
        for(int i = 0 ;i < n ;i++){
            first[arr[i]]++;
        
        if(first[arr[i]] == k){
            return arr[i];
        }
    }
    return -1;
    }

};