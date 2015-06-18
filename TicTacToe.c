#include<stdio.h>
void main()
{void show();
 void play();
 int check();
 int b,c,e,i,j,x=0; char a[3][3],d;
 printf("Enter your choice Player 1 X/O ");
 scanf(" %c",&d);
 if(d=='X'||d=='x')
 {e=1;c=0;}
 else
 {e=0;c=1;}
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
  {if(i==0)
   a[0][j]=(j+1);
   else if(i==1)
   a[1][j]=(j+4);
   else
   a[2][j]=(j+7);}}
 while(x==0)
{printf("Enter your position Player 1\n");
 show(a,b);
 scanf("%d",&b);
 printf("\n");
 play(a,b,c);
 x=check(a,c,e);
 if(x)
 break;
 printf("Enter your position Player 2\n");
 scanf("%d",&b);
 printf("\n");
 play(a,b,e);
 x=check(a,c,e);
 if(x)
 break;
 }printf("Game Over\n");
}
void show(char *x,int y)
{int i,j;
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
  {if((i*3+j+1)==y)
   {printf("%c ",*(x+i*3+j));}
   else if(*(x+i*3+j)>'9')
   printf("%c ",*(x+i*3+j));
   else
   printf("%d ",*(x+i*3+j));}
   printf("\n");}}
void play(char *x,int y,int c)
{ int i,j; char z;
  if(c==0)
  z='X';
  else
  z='O';
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
  {if((i*3+j+1)==y)
   {*(x+i*3+j)=z;printf("%c ",*(x+i*3+j));}
   else if(*(x+i*3+j)>'9')
   printf("%c ",*(x+i*3+j));
   else
   printf("%d ",*(x+i*3+j));}
   printf("\n");}printf("\n");
}
int check(char a[][3],int c,int e)
{int x;
 if(a[0][0]==88&&a[0][1]==88&&a[0][2]==88||a[0][0]==88&&a[1][0]==88&&a[2][0]==88||a[0][0]==88&&a[1][1]==88&&a[2][2]==88||a[0][1]==88&&a[1][1]==88&&a[2][1]==88||a[0][2]==88&&a[1][2]==88&&a[2][2]==88||a[1][0]==88&&a[1][1]==88&&a[1][2]==88||a[2][0]==88&&a[2][1]==88&&a[2][2]==88||a[0][2]==88&&a[1][1]==88&&a[2][0]==88)
{x=1;}
else if(a[0][0]==79&&a[0][1]==79&&a[0][2]==79||a[0][0]==79&&a[1][0]==79&&a[2][0]==79||a[0][0]==79&&a[1][1]==79&&a[2][2]==79||a[0][1]==79&&a[1][1]==79&&a[2][1]==79||a[0][2]==79&&a[1][2]==79&&a[2][2]==79||a[1][0]==79&&a[1][1]==79&&a[1][2]==79||a[2][0]==79&&a[2][1]==79&&a[2][2]==79||a[0][2]==79&&a[1][1]==79&&a[2][0]==79)
{x=2;}
else
{x=3;}
if(x==1&&c==0&&e==1)
 {printf("Player 1 wins\n");return 1;}
 else if(x==1&&c==1&&e==0)
 {printf("Player 2 wins\n");return 2;}
 else if(x==2&&c==0&&e==1)
 {printf("Player 2 wins\n");return 2;}
 else if(x==2&&c==1&&e==0)
 {printf("Player 1 wins\n");return 1;}
 else
 return 0;
}
