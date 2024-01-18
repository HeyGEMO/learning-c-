#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
circle(300,300,100);
return 0;
}
