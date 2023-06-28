int col[20]={0};
int dg[20]={0};
int udg[20]={0};

class Solution {
public:
    vector<vector<string>> res;
    void backTrace(int n, int i, vector<string>&path, string& s)
    {
        if(i==n)
        {
            res.push_back(path);
            return;
        }
        for(int j=0;j<n;j++)
        {
            if(col[j]||dg[i+j]||udg[i-j+10])
                continue;
            col[j]=dg[i+j]=udg[i-j+10]=1;
            s[j]='Q';
            path.push_back(s);
            s[j]='.';
            backTrace(n, i+1, path, s);
            path.pop_back();
            col[j]=dg[i+j]=udg[i-j+10]=0;
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        memset(col, 0, sizeof(col));
        memset(dg, 0, sizeof(col));
        memset(udg, 0, sizeof(col));
        vector<string> path;
        string s(n,'.');
        backTrace(n, 0, path, s);
        return res;
    }
};
