class Solution {
public:
    bool verify(vector<int>& postorder, int l, int r)
    {
        int sz = postorder.size();
        int i=l;
        while(i<r)
        {
            if(postorder[i]>postorder[r])
                break;
            i++;
        }
        int j=i;
        while(j<r)
        {
            if(postorder[j]<=postorder[r])
                return false;
            j++;
        }
        bool ret1=true;
        bool ret2=true;
        if(i>l)
            ret1 = verify(postorder, l, i-1);
        if(i<r)
            ret2 = verify(postorder, i, r-1);
        return ret1&&ret2;
    }
    bool verifyPostorder(vector<int>& postorder) {
        return verify(postorder, 0, postorder.size()-1);
    }
};
