int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
class Solution {
    bool satify(int x, int y, int k)
    {
        int res=0;
        while(x)
        {
            res+=x%10;
            x/=10;
        }
        while(y)
        {
            res+=y%10;
            y/=10;
        }
        return res<=k;
    }
    void dfs(vector<vector<int>>& v, int x, int y, int k, int m, int n)
    {
        res++;
        if(x==m-1&&y==n-1) return;
        for(int i=0;i<4;i++)
        {
            int a=x+dx[i];
            int b=y+dy[i];
            if(a>=0&&a<m && b>=0&&b<n && v[a][b]==1 && satify(a,b,k))
            {
                v[a][b]=0;
                dfs(v, a, b, k, m, n);
            }
        }
    }
    int res;
public:
    int movingCount(int m, int n, int k) {
        res = 0;
        vector<vector<int>> v(m, vector<int>(n, 1));
        v[0][0]=0;
        dfs(v, 0, 0, k, m, n);
        return res;
    }
};
