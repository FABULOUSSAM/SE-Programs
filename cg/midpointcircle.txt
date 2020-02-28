#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void circle(int x0,int y0,int radius)
{
	int x=0;
	int y=radius;
	putpixel(x0+x,y0+y,7);
	int p=1-radius;
	while(y>=x)
	{

		if(p<=0)
		{
			p=p+2*x+3;
			x++;
		}
		else
		{
			p=p+2*(x-y)+5;
			x++;
			y--;
		}
		putpixel(x0+x,y0+y,7);
		putpixel(x0+x,y0-y,7);
		putpixel(x0-x,y0+y,7);
		putpixel(x0-x,y0-y,7);
		putpixel(x0+y,y0+x,7);
		putpixel(x0+y,y0-x,7);
		putpixel(x0-y,y0+x,7);
		putpixel(x0-y,y0-x,7);
	}
}


}
void main
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	printf("Enter the radius of circle :");
	scanf("%d",&r);
	printf("Enter the x and y coordinate :");
	scanf("%d %d",&x,&y);
	circle(x,y,r);
	closegraph();
	getch();
}
