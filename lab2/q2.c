#include<stdio.h>

int main()
{
    int n,i,j,k,i1,j1,k1,t,flag=-1;
    scanf("%d",&t);
    int c=0;
    while(c<t)
    {
    printf("\nenter size of array:");
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
                           flag=1;
                           i1=i;
                           j1=j;
                           k1=k;
                           break;
                       }
                   }
              }
         }
         if(flag==1)
            printf("the i,j,k indexes are: %d %d %d",i1,j1,k1);
         else
            printf("no sequence found");
    c++;
    }
}
