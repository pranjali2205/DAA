#include<stdio.h>
int main()
{
    int n,i,j,key,index,found=-1,count=0;
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
        if(ar[i]==key)
        {
            index=i;
            found=1;
            break;
        }
    }
    if(found==1)
    {
      printf("present\n");
       for(i=0;i<n;i++)
    {
        if(ar[i]==key)
            count++;
    }
    printf("no. of times the key occurs:%d",count);
    }
    else
        printf("not present");

}
