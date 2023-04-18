#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

const int N = 1e5 + 10;
int h[N], w[N];
int n, k;

bool satify(int x)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (x > h[i] || x > w[i])
            continue;
        res = res + ((h[i]/x) * (w[i]/x));
    }
    if (res >= k)
        return true;
    return false;
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &h[i], &w[i]);
    }
    int l = 1, r = N - 1;
    while (l < r)
    {
        int mid = l + r + 1 >> 1;
        if (satify(mid)) l = mid;
        else r = mid - 1;
    }
    cout << l << endl;
    return 0;
}