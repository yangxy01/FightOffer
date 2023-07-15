const int N = 1e4+10;
int h[N];
class Solution {
    void down(int i)
    {
        int new_i = i;
        if(2*i<=n&&h[2*i]>h[new_i])
            new_i = 2*i;
        if(2*i+1<=n&&h[2*i+1]>h[new_i])
            new_i = 2*i+1;
        if(new_i!=i)
        {
            swap(h[i], h[new_i]);
            down(new_i);
        }
    }
    int n;
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        n=k;
        memset(h, 0, sizeof(h));
        for(int i=0;i<k;i++)
            h[i+1]=arr[i];    
        for(int i=k/2;i>0;i--)
        {
            down(i);
        }
        for(int i=k;i<arr.size();i++)
        {
            if(arr[i]<h[1])
            {
                h[1]=arr[i];
                down(1);
            }
        }
        return vector<int>(h+1, h+k+1);
    }
};
