#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int main()
{
    int x,y,x1,y1,l;
    float m,dx,dy;
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    printf("Enter starting point:");
    scanf("%d%d",&x,&y);
    printf("Enter the co-ordinate of end point");
    scanf("%d%d",&x1,&y1);
    dx=abs(x1-x);
    dy=abs(y1-y);
    m=dy/dx;
    if(m>1)
    {
        while(y<=y1)
        {
            putpixel(x,y,RED);
            x=x+(1/m);
            y=y+1;
        }
    }
    else
    {
        while(x<=x1);
        {
            putpixel(x,y,RED);
            y=y+m;
            x=x+1;
        }
    }
    outtextxy(300,250,"DDA output");
    getch();
    closegraph();
    return 0;
}
