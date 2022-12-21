#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

main()
{
   int gd = DETECT,gm
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   float rad=0, PI=3.141592, Val=PI/180;
   for(rad=0;rad < 360;){
    circle(100 * sin(rad * Val) + 300, 100 * cos(rad * Val) + 200, 10);
    line(300,200,100 * sin(rad*Val) + 300,100 * cos(rad*Val) + 200);
    rad = rad + 30;
   }
   rectangle(275,175,325,225);
   bar(290,190,310,210);
   ellipse(300,200,0,360,225,100+10);
   circle(300,200,100);
   getch();
   closegraph();
   return 0;
}