#include <stdio.h>
#include <graphics.h>

int renk_yan = COLOR(224,224,224);
int renk_ic = COLOR(245,245,245);
int renk_cizgi = COLOR(236,239,241);

void ana_menu();
void arkaPlan();

int main( )
{
   	initwindow( 900 , 609 , "WinBGIm" );
   	
	arkaPlan();
	ana_menu();
   
    outtextxy(400,250,"Z<AAASDAV");
    
	while( !kbhit() ); 
  
    
    
	closegraph( );
    return( 0 );
}

void arkaPlan(){
    
    int i, k=200;
   	setbkcolor(renk_yan);
	cleardevice();
	setfillstyle(1,renk_ic);
	bar(200,0,690,608);
	
     for(i=0; i<15; i++, k+=35){
      
       setcolor(renk_cizgi);
       line(0+k,0,0+k,getmaxy());
     }
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
     char tus=65;
     int x=280,y=0;
     while(tus!=13){
     if(tus==72) if(y==0){y=100;} else {y=(y-50)%150;}
    if(tus==80) y=(y+50)%150;
      setfillstyle(1,BLACK);bar(x,y+250,x+20,y+270);
     tus=getch();
     Beep(200,30);
      setfillstyle(1,renk_ic);bar(x,y+250,x+20,y+270);            
      }
      if(y==100) exit(1);
      }
