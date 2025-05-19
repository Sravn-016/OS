#include<stdio.h>
#include<conio.h>
int main()
{
  int f[50],i,j,k=0,index[50],n,c,p;
  char s[20];
  clrscr();
  for(i=0;i<50;i++)
  f[i]=0;
  while(1)
  {
    printf("Enter the file name");
    scanf("%s",s);
    printf("Enter the index block");
    scanf("%d",&p);
    if(f[p]==1)
    {
      printf("%s cannot be allocated at index block %d",s,p);
    }
    else
    {
      f[p]=1;
      printf("Enter the no. of blocks on index");
      scanf("%d",&n);
      printf("Enter the blocks");
      for(i=0;i<n;i++)
      scanf("%d",&index[i]);
      for(i=0;i<n;i++)
      if(f[index[i]]==1)
      {
      printf("\nBlock cannot be allocated");
      k=1;
      break;
      }
      if(k==0)
      {
	for(i=0;i<n;i++)
	{
	f[index[i]]=1;
	printf("\n%d->%d:%d",p,index[i],f[index[i]]);
	}
	printf("\n%s indexed",s);
      }
    }
      printf("\nDo you want to enter another file?(yes-1/no-0)");
      scanf("%d",&c);
      if(c==0)
      break;
    }
  //  getch();
return 0;
}


