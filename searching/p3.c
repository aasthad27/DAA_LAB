#include <stdio.h>
void solve()
{
    int n, key, flag = 0, c = 0, index;

    scanf("%d", &n);
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    int k = 0;
    while (arr[k] < key)
    {
        index = k;
        k = k + 2;
    }
    for (int j = index; j < n; j++)
    {
        c++;
        if (arr[j] == key)
        {
            flag = 1;

            break;
        }
    }
    if (flag)
    {
        printf("found");
        printf("comparision %d", c);
    }
    else
        printf("not found ");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}