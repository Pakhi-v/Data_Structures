class Solution {
  public:
    
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        sort(a,a+n);
        sort(b,b+n);

        int i = 0;
        int j = 0;
        int count = 0;
        while(i<n && j<m){
            if(a[i] < b[j]){
                i++;
            }
            else if(a[i] > b[j]){
                j++;
            }
            else if((i>0 && a[i] == a[i-1]) || (j>0 && b[j] == b[j-1])){
                i++;
                j++;
            }
            else{
                i++;
                j++;
                count++;
            }
        }
        return count;
    }
};