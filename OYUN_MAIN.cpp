#include <stdio.h>
#include <iostream>
#include <graphics.h>

using namespace std;

int renk_yan=COLOR(224,224,224);
int renk_ic=COLOR(245,245,245);

void ana_menu();

int main( )
{
   	initwindow( 900 , 609 , "WinBGIm" );
	setbkcolor(renk_yan);
	cleardevice();
	setfillstyle(1,renk_ic);
	bar(200,0,690,608);
	ana_menu();
   
    outtextxy(400,250,"Z<AAASDAV");
    
	while( !kbhit() ); 
  
    
    
	closegraph( );
    return( 0 );
}


void ana_menu(){
     settextstyle(1,0,40);
     setbkcolor(renk_ic);
     setcolor(BLACK);
     outtextxy(340,50,"ASD");
     settextstyle(2,0,8);
     outtextxy(400,250,"OYNA");
     outtextxy(330,300,"NASIL OYNANIR?");
     outtextxy(400,350,"ÇIKIŞ!");
     int a=0;
     int x=300,y=320;
    while(getch()!=13){
     
     if (a%2==0) {setfillstyle(1,BLUE);bar(x,x,y,y);}
     else {setfillstyle(1,renk_ic);bar(x,x,y,y);}
     a++;
     delay(200);
     }
     }
