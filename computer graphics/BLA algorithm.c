#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int x,y,x1,y1,p0,dx,dy;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    printf("enter the starting point:");
    scanf("%d%d",&x,&y);
    dx=abs(x1-x);
    dy=abs(y1-y);
    p0=2xdy-dx;
    if(p0>=0)
    {
        while(x!=x1&&y!=y1)
        {
            putpixel(x,y,GREEN);
            x=x+1;
            y=y+1;
            p0=p0+2xdy-2xdx;
        }
    }
    else
    {
        while(x!=x1&&y!=y1)
        {
            putpixel(x,y,GREEN);
            x=x+1;
            y=y1;
            p0=p0+2xdy;
        }
    }
    getch();
    closegraph();
    }
}
