#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a[10],i,n,high,low,mid,key;
  printf("enter the value of n");
  scanf("%d",&n);
  printf("enter the number");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter the key value");
  scanf("%d",&key);
  low=0;high=n-1;
  while(low<=high)
  {
     mid=(low+high)/2;
     if(key==a[mid])
     {
        printf("the item to be found at %d",mid);
        exit(0);
     }
     else if(key<a[mid])
     {
         high=mid-1;
     }
     else
     {
        low=mid+1;
     }
 }
 printf("item not found");
}
