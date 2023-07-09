class Solution {
public:
    int countDigitOne(int n) {
        if(n==0) return 0;
        if(n<10) return 1;
        long c_00 = 1; // 若c在百位则为100，在千位则为100，初始为1
        int total=0;
        while(1)
        {
            int de = n%c_00;
            int abc = n/c_00;
            int c = abc%10;
            int ab = abc/10;
            //cout<<c_00<<" "<<ab<<" "<<c<<" "<<de<<endl;
            total+=ab*c_00;
            if(c==0) total+=0;
            else if(c==1) total+=de+1;
            else total+=c_00;
            c_00*=10; // 完成上述对ab，c，de提取后再将c_00扩大
            if(ab==0)
            {
                break;
            }
        }
        return total;
    }
};
