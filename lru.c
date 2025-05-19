#include<stdio.h>
#include<conio.h>
void main()
{
int key[10],keyindex=0,count=0,a[25],min,b[10],i,m,n,fault=1,page=0,j,k=0,x,y=0;
clrscr();
printf("Enter the no of frames: ");
scanf("%d",&m);
printf("Enter no of pages: ");
scanf("%d",&n);
printf("Enter the reference string: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("The reference string is\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
page=0;
for(i=0;i<m;i++)
b[i]=-1;
for(i=0;i<n;i++)
{
fault=1;
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{       key[j]=count++;
				fault=0;
				printf("%d:\tNo page fault",a[i]);
				break;
}
}
if(fault==1)
{
page=page+1;
if(k<m)
{
	b[k]=a[i];
	key[k]=count++;
	k++;
}
else
{       min=99;
	for(x=0;x<m;x++)
	  if(min>key[x])
	  {
	    min=key[x];
	    keyindex=x;
	    }
	b[keyindex]=a[i];
	key[keyindex]=count++;
}
printf("%d:\t",a[i]);
for(y=0;y<m;y++)
printf("%d\t",b[y]);
}
printf("\n");
}
printf("No. of page faults: %d",page);
getch();
}
