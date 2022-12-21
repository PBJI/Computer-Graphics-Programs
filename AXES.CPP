#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

main()
{
   int gd = DETECT,gm , max_x, max_y;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   max_x = getmaxx();
   max_y = getmaxy();
   line(max_x/2,0,max_x/2,max_y);
   line(0,max_y/2,max_x,max_y/2);
   getch();
   closegraph();
   cout << max_x << " and " << max_y;
   getch();
   return 0;
}