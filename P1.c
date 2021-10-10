#include<stdio.h>
#include<graphics.h>
void main()
{ int pts[]={320,150,400,250,250,350,320,150}; //Points for drawpoly
  int gd=DETECT,gmode,color,maxx,maxy; //Variable declaration
  initgraph(&gd,&gmode,"C:\\TURBOC3\\BGI"); //Initializing graphics
  maxx=getmaxx(); //Getting length of the screen
  maxy=getmaxy(); //Getting breadth of the screen
  circle(100,130,50); //Drawing the circle at (100,100) of radius 50 pixels
  putpixel(100,130,GREEN); //Marking centre of circle white
  color=getpixel(100,130); //Getting the color of the pixel at (100,100)
  line(0,220,maxx,220); //Horizontal line
  line(320,45,320,maxy-80); //Verticle line
  line(30,280,220,380); //Drawing a line
  gotoxy(42,4); //Placing cursor
  moveto(540,85); //Moving to the location
  lineto(350,180); //Drawing a line fron cursor location to (350,180)
  gotoxy(42,16); //Putting cursor on the location
  arc(400,400,15,120,100); //Drawing a arc
  gotoxy(1,25); //Putting cursor on the location
  getch(); //Pause to get user input
  cleardevice(); //Clearing screen
  line(0,220,maxx,220); //Horizontal line
  line(320,30,320,maxy-80); //Vertical line
  gotoxy(1,3); //Placing cursor on new location
  pieslice(100,200,20,120,120); //Drawing a Pieslice
  gotoxy(42,3); //Placing cursor on new location
  ellipse(450,130,0,300,100,50); //Drawing a Ellipse
  gotoxy(1,16); //Placing cursor on new location
  sector(75,375,15,60,200,100); //Drawing a Sector
  gotoxy(42,16); //Placing cursor on new location
  rectangle(360,280,540,380); //Drawing a rectangle
  gotoxy(1,25); //Placing cursor on new location
  getch(); //Pause to get user input
  cleardevice(); //Clearing screen
  gotoxy(1,6); //Placing cursor on a new location
  drawpoly(4,pts); //Draw a polygon
  gotoxy(1,25); //Placing cursor on a new location
  getch(); //Pause to get the user input
  closegraph(); //Closing graphics mode
}
