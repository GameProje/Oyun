#include <stdio.h>
#include <graphics.h>
#include <windows.h>

int renk_yan = COLOR(224,224,224);
int renk_ic = COLOR(245,245,245);
int renk_cizgi = COLOR(236,239,241);

void ana_menu();
void arkaPlan();
void arkaPlan_Oyun(int w);
void tutorial();
void blog();
void kahraman(int x);

//int  check(int); 


int main( )
{
   	initwindow( 900 , 609 , "WinBGIm" );
   	
	arkaPlan();
	ana_menu();
    
    //maine döndümü diye kontrol için SİLİNECEK
    arkaPlan();
    outtextxy(390,250,"BİTTİİİİİİİİİİİ");
    
    
	while( !kbhit() ); 
  
    
    
	closegraph( );
    return( 0 );
}

void arkaPlan(){
    
    int i, k=200;
   	setbkcolor(renk_yan);
	cleardevice();
	setfillstyle(1,renk_ic);
	bar(180,0,705,608);
	
     for(i=0; i<15; i++, k+=35){
      
       setcolor(renk_cizgi);
       line(0+k,0,0+k,getmaxy());
     }
}  


void ana_menu(){
     arkaPlan();
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
      
      if(y==0) blog() ;
      if(y==50)  tutorial(); 
      if(y==100) exit(1);
    }
void tutorial(){
     arkaPlan();
     
     
     getch();
    }    
void blog(){
     arkaPlan_Oyun(0);
     int i=0,k;
     int al;
     int sag;
     setcolor(1);
     settextstyle(1,0,38);
   outtextxy(255,50,"HAZIR OL 3");
   settextstyle(1,0,38);
     delay(1100);
     arkaPlan_Oyun(0);
   outtextxy(255,50,"HAZIR OL 2");
    settextstyle(1,0,38);
        delay(1100);
     arkaPlan_Oyun(0);
   outtextxy(255,50,"HAZIR OL 1");
   delay(1100);
     arkaPlan_Oyun(0);


      while (1){
                   kahraman(0);
                   if(k<13){
                   al=rand()%7; 
          if(al==0){al=al+1;}
          al=al*35;
           sag=200+al+105;}
            k=i%19;
            
                   setfillstyle(1,k+2);
     bar(200,0+(k*32),200+al,32+(k*32));
      setfillstyle(1,k+3);
     bar(sag,0+(k*32),691,32+(k*32));
     delay(400);
                   arkaPlan_Oyun(0);
     i++; 
     }                                   // while
     
     
     }
      
void arkaPlan_Oyun(int w){
   	setbkcolor(renk_ic);
	setfillstyle(w,0);
	bar(200,0,690,608);
	}
void kahraman(int x){
     setfillstyle(1,BLACK);
     bar(410+x,577,515+x,609);
     
     }         
     
