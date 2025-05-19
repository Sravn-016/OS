#include<stdio.h>
#include<conio.h>
void main()
{
int page[20],i,j,n,p,pf=0,frame[20],k=0,t=0,x;
clrscr();
printf("Enter the no. of frames: ");
scanf("%d",&n);
printf("Enter the no. of pages: ");
scanf("%d",&p);
printf("Enter page number sequence:-\n");
for(i=0;i<p;i++)
scanf("%d",&page[i]);
printf("The page numbers are:\n");
for(i=0;i<p;i++)
printf("%d ",page[i]);
printf("\n");
for(i=0;i<n;i++)
frame[i]=-1;
for(i=0;i<p;i++)
{
if(k==n)
k=0;
for(j=0;j<n;j++)
{
if(page[i]==frame[j])
{
t=1;
}
}
if(t!=1)
{
frame[k]=page[i];
k++;
pf=pf+1;
printf("%d:\t",page[i]);
for(x=0;x<n;x++)
{
printf("%d\t",frame[x]);
}
printf("Page fault\n");
}
else
{
printf("%d:\t",page[i]);
for(x=0;x<n;x++)
printf("%d\t",frame[x]);
printf("HIT\n");
t=0;
}
}
printf("page fault:%d",pf);
getch();
}
