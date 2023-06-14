//Job sequencing Problem

//comaprsion function
bool mycmp(Job a, Job b){
    return(a.profit > b.profit);
}

//main function
void JS(Job arr[], int n){
    sort(arr,arr+n,mycmp);

    int result[n];
    bool slot[n];

    //initalize all slots to be free
    for(int i=0;i<n;i++)
    slot[i] = false;

    //iterate through all given jobs
    for(int i=0;i<n;i++){
        // Find a free slot for this job (Note that we start
        // from the last possible slot)
        for(int j= min(n, arr[i].dead) - 1; j>=0;j--){
            if(slot[j] == false){
                result[j] = i;
                slot[j] = true;
                break
            }
        } 
    }

    //print result
    for(int i=0;i<n;i++)
    if(slot[i])
    cout<<arr[result[i]].id<<" ";
}