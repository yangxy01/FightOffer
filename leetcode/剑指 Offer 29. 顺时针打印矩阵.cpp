int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m=matrix.size();
        if(m==0) return res;
        int n=matrix[0].size();
        int x=0,y=0,count=1,k=0;
        res.push_back(matrix[0][0]);
        matrix[0][0]=INT_MAX;
        while(count<m*n)
        {
            int a=x+dx[k];
            int b=y+dy[k];
            if(a>=0&&a<m&&b>=0&&b<n&&matrix[a][b]!=INT_MAX)
            {
                x=a;
                y=b;
                res.push_back(matrix[x][y]);
                count++;
                matrix[x][y]=INT_MAX;
            }
            else
            {
                k++;
                if(k==4) k=0;
            }
        }
        return res;
    }
};
