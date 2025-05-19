#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,p[10],bt[10],w[10],t[10],wt=0,tat=0,t1,t2;
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
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
  if(bt[i]>bt[j])
  {
  t1=bt[i];
  bt[i]=bt[j];
  bt[j]=t1;

  t2=p[i];
  p[i]=p[j];
  p[j]=t2;
  }
 }
}
w[0]=0;
 for(i=1;i<n;i++)
 w[i]=w[i-1]+bt[i-1];
 for(i=0;i<n;i++)
 wt=wt+w[i];
 awt=(float)(wt)/n;
 t[0]=bt[0];
 for(i=1;i<n;i++)
 t[i]=w[i]+bt[i];
 for(i=0;i<n;i++)
 tat=tat+t[i];
 atat=(float)(tat)/n;
 printf("\n GANTT CHART \n");
 for(i=0;i<n;i++)
 {
   printf("p[%d]\t",p[i]);
 }
 printf(" \n SHORTEST JOB FIRST IS \n");
 printf("processid\tbursttime\twaitingtime\tturnaroundtime\n");
 for(i=0;i<n;i++)
 {
  printf("p[%d]\t\t%d\t\t%d\t\t%d\t\n",p[i],bt[i],w[i],t[i]);
 }
 printf("average waiting time is %f\n",awt);
 printf("average turnaroundtime is %f\n",atat);
 getch();
}