class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        vector<int> rowcount(n,0);   //how many 1's in a row
        vector<int> colcount(m,0);   //how many 1's in a column

        for(int row=0;row<n;row++){
           for(int col=0;col<m;col++){

            if(mat[row][col] == 1){
                rowcount[row]++;
                colcount[col]++;
            }
           }
        }
        
        int result=0;
         for(int row=0;row<n;row++){
           for(int col=0;col<m;col++){

            if(mat[row][col] == 0) continue;

            if(rowcount[row]==1 && colcount[col]==1){
                result++;
            }
         }
    }

    return result;
    }
};
