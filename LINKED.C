
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  int f[20],i,n,st,len,c;
  char s[20];
  clrscr();
  n=20;
  for(i=0;i<20;i++)
  f[i]=0;
  randomize();
  while(1)
  {
  printf("Linked file allocation\n");
    printf("Enter the file name");
    scanf("%s",s);
    printf("Enter the length of the file");
    scanf("%d",&len);
    printf("\nThe file %s is allocated at",s);
    for(i=0;i<len;)
    {
      st=random(n);
      if(f[st]==0)
      {
      f[st]=1;
      i++;
      printf("\n%d->%d",st,f[st]);
      }
    }
   printf("\nDo you want to enter another file?(yes-1/no-0)");
   scanf("%d",&c);
   if(c==0)
   break;
   }
   getch();
return 0;
  }

