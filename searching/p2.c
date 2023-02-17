#include <stdio.h>
void solve()
{
    int n, c = 0, key;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        c++;
        mid = (high + low) / 2;
        if (arr[mid] == key)
        {
            printf("found at index %d", mid);
            printf("comaparision %d", c);
            break;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    solve();
}