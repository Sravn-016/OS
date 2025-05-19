#include<stdio.h>
#include<conio.h>
void main()
{
 int a[25],check[30],max=0,b[10],i,m,n,fault=1,page=0,j,k=0,p,x,y=0,flag[30];
 clrscr();
 printf("\t\toptimal page replacement technique\n");
 printf("enter no of pages in the reference string");
 scanf("%d",&n);
 printf("enter the reference string");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the no of frames for page replacement");
 scanf("%d",&m);
 p=m+n;
 printf("the reference string is");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\n");
  page=0;
  for(i=0;i<m;i++)
  {
   b[i]=-1;
  }
  for(i=n-1;i>=0;i--)
  {
  check[i]=p;
  p=p-1;
  flag[i]=0;
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   flag[j]=0;
   fault=1;
   for(j=0;j<m;j++)
   {
    if(a[i]==b[j])
    {
     fault=0;
     printf("reference string %d:no page fault",a[i]);
     break;
    }
   }
   if(fault==1)
   {
    page=page+1;
    max=0;
    if(k<m)
    {
     b[k]=a[i];
     k++;
    }
    else
    {
    for(j=i+1;j<n;j++)
    {
     for(x=0;x<m;x++)
     if(check[j]>max && b[x]==a[j] && flag[x]==0)
     {
      max=check[j];
      k=x;
      flag[x]=1;
      break;
     }
    }
    for(x=0;x<m;x++)
    if(flag[x]==0)
    k=x;
    b[k]=a[i];
    k=m;
    }
    printf("reference string %d:",a[i]);
    for(y=0;y<m;y++)
    {
     printf("%d\t",b[y]);
    }
   }
   printf("\n");
  }
  printf("No. of page faults=%d",page);
  getch();
  }