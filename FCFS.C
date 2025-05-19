#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,p[10],bt[10],w[10],t[10],wt=0,tat=0;
 float awt,atat;
 clrscr();
 printf("enter the no of processes:");
 scanf("%d",&n);
 printf("enter the process id's:");
 for(i=0;i<n;i++)
 scanf("%d",&p[i]);
 printf("enter the burst time of the processes:");
 for(i=0;i<n;i++)
 scanf("%d",&bt[i]);
 w[0]=0;
 for(i=1;i<n;i++)
 w[i]=w[i-1]+bt[i-1];
 for(i=0;i<n;i++)
 wt=wt+w[i];
 awt=(wt)/n;
 t[0]=bt[0];
 for(i=1;i<n;i++)
 t[i]=w[i]+bt[i];
 for(i=0;i<n;i++)
 tat=tat+t[i];
 atat=(tat)/n;
 printf("\n GANTT CHART \n");
 for(i=0;i<n;i++)
 {
   printf("p[%d]\t",p[i]);
 }
 printf(" \n FIRST COME FIRST SERVE IS \n");
 printf("processid\tbursttime\twaitingtime\tturnaroundtime\n");
 for(i=0;i<n;i++)
 {
  printf("p[%d]\t\t%d\t\t%d\t\t%d\t\n",p[i],bt[i],w[i],t[i]);
 }
 printf("average waiting time is %f\n",awt);
 printf("average turnaroundtime is %f\n",atat);
 getch();
}