#include <stdio.h>
#include <iostream>
#include <graphics.h>

int renk_yan=COLOR(224,224,224);
int renk_ic=COLOR(245,245,245);
using namespace std;

int main( )
{
   	initwindow( 900 , 607 , "WinBGIm" );
	setbkcolor(renk_yan);
	cleardevice();
	setfillstyle(1,renk_ic);
	bar(200,0,690,608);
	
   
    
    
	while( !kbhit() ); 
  
    
    
	closegraph( );
    
	return( 0 );
}
