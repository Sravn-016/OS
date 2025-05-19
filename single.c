#include<stdio.h>
#include<conio.h>
#define M 30
struct directory
{
char dname[M];
int nf;
struct names
{
char fname[M];
}n[M];
}d[M];
void main()
{
int nd,i,j,k;
char fn[M];
clrscr();
printf("enter the no of directories: ");
scanf("%d",&nd);
for(i=0;i<nd;i++)
{
printf("enter the name of the directory %d: ",i+1);
scanf("%s",&d[i].dname);
}
for(i=0;i<nd;i++)
{
printf("enter the no of file in directory %d: ",i+1);
scanf("%d",&d[i].nf);
}
for(i=0;i<nd;i++)
{
for(j=0;j<d[i].nf;j++)
{
printf("enter the name of the file %d of directory %d: ",j+1,i+1);
scanf("%s",&fn);
for(k=0;k<d[i].nf;k++)
if(strcmp(fn,d[i].n[k].fname)==0)
{
j--;
printf("filename already exist.re-enter the2 file name\n");
goto x;
}
strcpy(d[i].n[j].fname,fn);
x:
}
printf("\n");
}
textcolor(30);
for(i=0;i<nd;i++)
{
cprintf("%s",d[i].dname);
printf("\t\t");
for(j=0;j<d[i].nf;j++)
printf("%s\t",d[i].n[j].fname);
printf("\n");
}
getch();
}
