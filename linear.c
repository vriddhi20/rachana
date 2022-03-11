 #include<stdio.h>
int main()
{
  int i,key,n,a[10];
  printf("enter the limit");
  scanf("%d",&n);
  printf("enter the numbers");
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter the key value");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    if(key==a[i])
    {
      printf("item found at location %d",i);
      return 0;
    }
  }
   printf("item not found");
}
