#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<utility>

using namespace std;

class Solution {
public:
    int digitAtIndex(int n) {
        if (n == 0) return 0;
        long long i = 1, base = 1, num = 9;
        while (n > i * num)
        {
            n -= i * num;
            i++;
            num *= 10;
            base *= 10;
        }
        //此时i表示n是落在几位数群体里的
        int number = base + (n + i - 1) / i - 1; //number为n在number这个数里面
        cout << "number" << number << endl;
        if (n % i == 0)
            return number % 10;
        else
        {
            int r = n % i;
            r = i - r;
            while (r--)
                number /= 10;
            return number % 10;
        }
    }
};


int main()
{
    Solution S;

    auto ret = S.digitAtIndex(1);
    cout << ret << endl;
}