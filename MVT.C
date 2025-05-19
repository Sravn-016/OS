
#include<stdio.h>
#include<conio.h>

void main()
{

int m,n,pp[50],ch,par[10],visited[10],mp[10],i,j,extr=0,intr=0,min,max,dec[10],k=0,t=0;
clrscr();
printf("enter the number of partitions\n");
scanf("%d",&n);
printf("enter the number of process\n");
scanf("%d",&m);
printf("enter the size of partitions\n");
for(i=0;i<n;i++)
scanf("%d",&mp[i]);
printf("enter the size of processes\n");
for(i=0;i<n;i++)
scanf("%d",&pp[i]);
do
{
for(i=0;i<n;i++)
{
visited[i]=0;
par[i]=-1;
intr=0;
extr=0;
}
printf("\nenter your choice\n 1.first fit\n 2.best fit \n 3.worst fit\n 4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: for(j=0;j<m;j++)
 {
 for(i=0;i<n;i++)
 {
 if(visited[i]==0)
 {
 if(mp[i]>=pp[j])
 {
 printf("process %d is allocated\n",j+1);
 intr=intr+(mp[i]-pp[j]);
 printf("\t\tinternal fragmentation in process%d is %d\n",j+1,mp[i]-pp[j]);
 par[i]=j+1;
 visited[i]=j+1;
 break;
 }
 }
 }
 if(i==n)
 printf("process %d cannot be allocated\n",j+1);
 }
 break;
case 2:for(j=0;j<m;j++)
{
for(i=0;i<n;i++)
dec[i]=mp[i]-pp[j];
min=1000;
k=-1;t=-1;
for(i=0;i<n;i++)
{
if(visited[i]==0)
{
if(dec[i]<min&&dec[i]>=0)
{
t=1;
min=dec[i];
k=i;
}
}
}
if(t==1)
{
printf("process %d is allocated at%d\n",j+1, mp[k]);
par[k]=j+1;
visited[k]=1;
printf("\t\tinternal fragmentation is %d\n",min);
intr=intr+min;
}
else
printf("process %d cannot be allocated\n",j+1);
}  //j loop is going to get incremented before break;
break;
case 3:for(j=0;j<m;j++)
{
for(i=0;i<n;i++)
dec[i]=mp[i]-pp[j];
max=-1;
k=-1;t=-1;
for(i=0;i<n;i++)
if(visited[i]==0)
if(dec[i]>max&&dec[i]>0)
{
t=1;
max=dec[i];
k=i;
}
if(t==1)
{
printf("process %d is allocated at%d\n",j+1, mp[k]);
par[k]=j+1;
visited[k]=1;
printf("\t\tinternal fragmentation is %d\n",max);
intr=intr+max;
}
else
printf("process %d cannot be allocated\n",j+1);
}
break;
case 4:exit(0);
       break;
default:printf("enter a valid choice\n");
       break;
   }
printf("totAL  internal fragmentation is %d\n",intr);
for(i=0;i<n;i++)
if(visited[i]==0)
extr=extr+mp[i];
printf("totAL  external fragmentation is %d\n",extr);
printf("the sequence of allocation is\n ");
for(i=0;i<n;i++)
printf("%d\t",par[i]);
}while(ch<=4);
getch();
}
