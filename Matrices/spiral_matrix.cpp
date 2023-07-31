vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m){
    int total = m*n;
    vector<int> ans;
    int top=0,left=0,right=m-1,bottom=n-1;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right --;
        if(top<=bottom){
            for(int i =right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom --;
        }
        if(left<=right){
            for(int i =bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

    }
    return ans;
}