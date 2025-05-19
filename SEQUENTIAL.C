#include<stdio.h>
//#include<conio.h>
int main()
{
  int f[50],i,st,j,len,c,k=0;
  char s[50];
  //clrscr();
  for(i=0;i<50;i++)
  f[i]=0;
  while(1)
  {
    printf("Enter the file name");
    scanf("%s",s);
    printf("Enter the starting block and length of the file");
    scanf("%d%d",&st,&len);
    for(j=st;j<(st+len);j++)
    {
      if(f[j]==1)
      {
	printf("%s cannot be allocated",s);
	k=1;
	break;
      }
    }
     if (k==0)
     {
      for(j=st;j<(st+len);j++)
      {
      f[j]=1;
      printf("\n%d->%s",j,s);
      }
      if(j==(st+len))
      printf("\nFile is allocated to disk");
    }
    k=0;
      printf("\nDo you want to enter other file?(yes-1/no-0)");
      scanf("%d",&c);
      if(c==0)
      break;
  }
  //getch();
return 0;
}
