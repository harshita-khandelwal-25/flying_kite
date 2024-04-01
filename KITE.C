#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void main()
{
int gd=DETECT,gm;
int arr[10];
int x=5,y=5,x_inc=0,y_inc=0;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

while(!kbhit())
{
setcolor(blue);

if(x<20)
	x_inc+=5;
if(x > 200)
	x_inc-=5;
if(y>130)
	y_inc-=5;
if(y<50)
	y_inc+=5;
	x=x+x_inc;
	y=y+y_inc;
 arr[0]=110+x;
 arr[1]=60+y;
 arr[2]=135+x;
  arr[3]=40+y;
 arr[4]=160+x;
  arr[5]=60+y;
 arr[6]=125+x;
 arr[7]=70+y;
 arr[8]=110+x;
 arr[9]=60+y;
drawpoly(5,arr);
 setcolor(BLACK);
//body

circle(15,270,10);
line(15,280,15,320);
line(15,320,10,350);
line(15,320,30,350);
//hand
line(15,320,35,310);


line(40,310,125+x,70+y);   //rope

line(125+x,70+y,110+x,90+y);
 line(125+x,70+y,125+x,100+y);
 line(125+x,70+y,139+x,110+y);
delay(300);

cleardevice();
setcolor(RED);
//hut
setfillstyle(SOLID_FILL,YELLOW);
floodfill(400,170,RED);
line(400,150,340,230);
line(400,150,460,230);
line(340,230,460,230);

rectangle(340,230,460,370);
rectangle(460,230,610,370);

setfillstyle(HATCH_FILL,BROWN);
line(610,150,610,230);
line(400,150,610,150);
floodfill(420,170,RED);

setfillstyle(SOLID_FILL,BROWN);
circle(400,200,10);
floodfill(400,205,RED);

//door
setfillstyle(SOLID_FILL,BROWN);
rectangle(370,290,430,370);
floodfill(380,300,RED);

//window
setfillstyle(HATCH_FILL,BROWN);
rectangle(500,270,560,330);
floodfill(510,300,RED);

//SEPRATOR
line (0,240,340,240);
line(610,240,800,240);

//SUNN
 setfillstyle(SOLID_FILL,YELLOW);
circle(30,50,20);
   floodfill(30,50,RED);


 setfillstyle(SOLID_FILL,GREEN);
    floodfill(400,400,RED);
     setfillstyle(SOLID_FILL,11);
    floodfill(10,10,RED);

}
}
