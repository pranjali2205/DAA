#include<stdio.h>

int main()
{
    int n,i,j,key,count=0,t,c=0;
    scanf("%d",&t);
    while(c<t)
    {
    printf("enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("enter elements in array:");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
        printf("enter key:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]-ar[j]==key || ar[j]-ar[i]==key)
                count++;
        }
    }
    printf("\ntotal pair whose diff is equal to key are:%d",count);
    c++;
    }
}
