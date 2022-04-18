#include<stdio.h>

int main()
{
    int n,i,j,k,i1,j1,k1;
    printf("enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("enter elements in array:");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
         for(i=0;i<n;i++)
         {
              for(j=0;j<n;j++)
              {
                   for(k=0;k<n;k++)
                   {
                       if(ar[i]+ar[j]==ar[k])
                       {
                           i1=i;
                           j1=j;
                           k1=k;
                           break;
                       }
                   }
              }
         }

    printf("the i,j,k indexes are: %d %d %d",i1,j1,k1);
}
