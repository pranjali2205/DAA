#include<stdio.h>
void binary_search(int ar[], int i, int j, int key)
{
    int mid,c=0;

    if (i > j)
    {
        printf("Key not found\n");
        return;
    }
    mid = (i + j) / 2;
    c++;
    if (ar[mid] == key)
    {
        printf("Key found\n");
    }
    else if (ar[mid] > key)
    {
        binary_search(ar, i, mid - 1, key);
    }
    else if (ar[mid] < key)
    {
        binary_search(ar, mid + 1, j, key);
    }
    printf("no. of comparisons=%d",c);
}
int main()
{
     int n,i,key,found=-1,c=0,index=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    int ar[n];
    printf("enter elements in array:");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("enter key element to search:");
    scanf("%d",&key);

    while(low<=high)
    {
        c++;
        if(ar[mid]==key)
        {
            printf("key found at index %d",mid+1);
            break;
        }
        else if(ar[mid]<key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid=(low+high)/2;
    }
    if(low>high)
        printf("element does not exist in array");
        printf("\n no. of comparisons:%d",c);

}
