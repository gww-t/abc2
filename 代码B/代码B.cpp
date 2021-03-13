#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct info
{
    int a;
    int b;
}unit[103];
int cmd(info x, info y)
{
    return x.b < y.b;
}
int main()
{
    int n, i, j, k;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
        {
            scanf("%d%d", &unit[i].a, &unit[i].b);
        }
        sort(unit, unit + n, cmd);
        j = 0;
        k = 0;
        for (i = 1; i < n; i++)
        {
            if (unit[i].a >= unit[j].b)
            {
                k++;
                j = i;
            }
        }
        printf("%d\n", k + 1);
    }
    return 0;
}