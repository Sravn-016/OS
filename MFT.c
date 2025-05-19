
#include<stdio.h>
#include<conio.h>
void main()
{
int ms,s,n,i,par,ps[20],p[20],size,intr=0,extr=0,k,par1,j=1;
clrscr();
printf("Enter the total memory: ");
scanf("%d",&ms);
printf("Enter the size for OS: ");
scanf("%d",&s);
ms=ms-s;
printf("Enter the number of partitions to be divided: ");
scanf("%d",&par);
printf("Enter the number of processes: ");
scanf("%d",&n);
printf("Enter the process ids and process size: ");
for(i=0;i<n;i++)
scanf("%d %d",&p[i],&ps[i]);
size=ms/par;
par1=par;
for(i=0;i<n;i++)
{
if((ps[i]<=size))
{
intr=intr+size-ps[i];
printf("Process %d is allocated in %d\n",i+1,j);
j++;
}
else
printf("The process %d is not allocated\n",i+1);
}
for(k=j;k<=par1;k++)
extr=extr+size;
printf("The internal fragmentation is %d\n",intr);
printf("The external fragmentation is %d",extr);
getch();
}
