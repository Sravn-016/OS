#include<stdio.h>
#include<conio.h>
void main()
{
 int n,p[10],bt[10],cbt[10],i,sum=0,ts,temp=0,tat[10],wt[10];
 float awt=0,atat=0;
 clrscr();
 printf("enter the no of processes:");
 scanf("%d",&n);
 printf("enter the process id's:");
 for(i=0;i<n;i++)
 scanf("%d",&p[i]);
 printf("enter the burst time of the processes:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&bt[i]);
 cbt[i]=bt[i];
 }
 printf("enter the time stamp:");
 scanf("%d",&ts);
 for(i=0;i<n;i++)
 {
  sum=sum+bt[i];
 }
while(sum>0)
{
for(i=0;i<n;i++)
{
if(bt[i]>ts)
{
temp=temp+ts;
tat[i]=temp;
bt[i]=bt[i]-ts;
sum=sum-ts;
printf("p[%d]\t",p[i]);
}
else if(bt[i]<=ts&&bt[i]>0)
{
temp=temp+bt[i];
tat[i]=temp;
sum=sum-bt[i];
bt[i]=0;
printf("p[%d]\t",p[i]);
}
else
continue;
}
}
for(i=0;i<n;i++)
wt[i]=tat[i]-cbt[i];
printf("\nprocessid\tbursttime\twaitingtime\tturnaroundtime\n");
for(i=0;i<n;i++)
{
printf("\np[%d]\t\t%d\t\t%d\t\t%d\n",p[i],cbt[i],wt[i],tat[i]);
awt=awt+wt[i];
atat=atat+tat[i];
}
printf("\n average waiting time is %f\n",awt/n);
printf("\n average turn around time is %f\n",atat/n);
getch();
}
