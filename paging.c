#include<stdio.h>
#include<conio.h>
void main()
{
int p,ps,f,fs,pt[20],i,la,pn,offset,pa;
clrscr();
printf("Enter the number of pages: ");
scanf("%d",&p);
printf("Enter the size of each page: ");
scanf("%d",&ps);
printf("Enter the number of frames: ");
scanf("%d",&f);
fs=ps;
printf("Enter the frame number for each page number\n");
for(i=0;i<p;i++)
{
printf("%d\t",i);
scanf("%d",&pt[i]);
}
printf("Enter the logical address for which physical address is to be calculated: ");
scanf("%d",&la);
pn=la/ps;
offset=la%ps;
pa=pt[pn]*fs+offset;
printf("The physical address for %d is %d ",la,pa);
getch();
}