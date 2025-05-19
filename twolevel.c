#include<stdio.h>
#include<conio.h>
#define M 15
struct masterdirectory
{
char mdname[M];
struct directory
{
char dname[M];
int nf;
struct names
{
char fname[M];
}n[M];
}d[M];
}md[M];
void main()
{
int nmd,nsd,i,j,k,l,m;
char fn[M],sdn[M],mdn[M];
clrscr();
printf("enter the no of master directories: ");
scanf("%d",&nmd);
for(l=0;l<nmd;l++)
{
z:
printf("enter the name of the master directory %d: ",l+1);
scanf("%s",&mdn);
for(k=0;k<nmd;k++)
if(strcmp(mdn,md[k].mdname)==0)
{
printf("the master directory name already exist.re-enter master directory\n");
goto z;
}
strcpy(md[l].mdname,mdn);
printf("enter the no of sub directories of master directory %d: ",l+1);
scanf("%d",&nsd);
for(m=0;m<nsd;m++)
{
y:
printf("enter the name of the sub directory %d of master directory %d: ",m+1,l+1);
scanf("%s",&sdn);
for(k=0;k<nsd;k++)
if(strcmp(sdn,md[l].d[k].dname)==0)
{
printf("sub directory name already exist.re-enter sub directory name\n");
goto y;
}
strcpy(md[l].d[m].dname,sdn);
printf("enter the no of files in sub directory %d of master directory %d: ",m+1,l+1);
scanf("%d",&md[l].d[m].nf);
for(j=0;j<md[l].d[m].nf;j++)
{
printf("enter the name of the file %d of sub directory %d of master directory %d: ",j+1,m+1,l+1);
scanf("%s",&fn);
for(k=0;k<md[l].d[m].nf;k++)
if(strcmp(fn,md[l].d[m].n[k].fname)==0)
{
j--;
printf("file name already exist.re-enter the file name\n");
goto x;
}
strcpy(md[l].d[m].n[j].fname,fn);
x:
}
printf("\n");
}
printf("\n");
}
printf("\n");
printf("\nTWO LEVEL DIRECTORY IMPLEMENTATION:\n------------------------------------------------------------------------\n");
for(k=0;k<nmd;k++)
{
printf("\n");
textcolor(20);
cprintf("%s",md[k].mdname);
printf("\t\t");
textcolor(30);
for(i=0;i<nsd;i++)
{
cprintf("%s",md[k].d[i].dname);
printf("\t\t");
for(j=0;j<md[k].d[i].nf;j++)
printf("%s\t",md[k].d[i].n[j].fname);
printf("\n\t\t");
}
}
getch();
}