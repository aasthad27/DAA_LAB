#include<stdio.h>
void solve()
{
    int n,key,flag=0,c=0;

    scanf("%d",&n);
    int arr[n],i;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
   }
   scanf("%d", &key);
   for( i=0;i<n;i++)
   {
    c++;
    if(arr[i]==key)
    {
     flag=1;

     break;
    }
   }
   if(flag)
   {
    printf("found at index %d\n",i);
    printf("comparision %d",c);
   }
   else
   printf("not found ");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}