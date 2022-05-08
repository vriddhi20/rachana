#include<stdio.h>
#include<stdlib.h>
int d[20],cost[10],p[20],s[10];
int n;
void dijkstra(int source)
{
  int i,j,min,u,v;
  for(i=1;i<n;i++)
  {
    u=-1;
    min=99;
    for(j=0;j<n;j++)
    {
      if(d[j]<min)
      {
        min=d[j];
        u=j;
      }
    }
    for(i=0;i<n;i++)
   {  
      s[i]=0;
      d[i]=cost[i];
      p[i]=source;
      s[source]=1;
    }
    if(u==1)
    s[u]=1;
    for(v=0;v<n;v++)
    {
      if(s[v]==0)
      {
        d[v]=d[u]+cost[u][v];
        p[v]=u;
      }
    }
  }
}
void main()
{
  int i,j;
  int source;
  printf("number of verticed");
  scanf("%d",&n);
  printf("enter the adjacency matrix\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",cost[i][j]);
    }
    printf("\n");
    printf("enter the vertex");
    scanf("%d",&source);
    dijkstra(source);
    printf("the shortest path is");
 }
 for(j=0;j<n;j++)
 { 
   if(d[j]==99)
   else
   i=j;
   printf("%d",i);
   i=p[i];
 }
 printf("%d",i,d[j]);
 printf("\n");
}  
  
      
      
