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
void oyun();
void kahraman(int x);
void kahraman_sil(int x);
void hazir_ol();
void blog_ciz(int , int,  int);
void pause();
void blog_ciz(int , int, int);
void blog_sil(int, int, int);
int  rastgele(int);



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
void pause(){
     char tus=65;
     int x=330,y=0;
     setfillstyle(1,renk_yan);
     bar(300,200,600,400);
     setbkcolor(renk_yan);
     settextstyle(2,0,8);
     outtextxy(382,250,"DEVAM ET");
     outtextxy(380,300,"ANA MENÜ");
     outtextxy(420,350,"ÇIKIŞ");
     while(tus!=13){
     if(tus==72) if(y==0){y=100;} else {y=(y-50)%150;}
     if(tus==80) y=(y+50)%150;
      setfillstyle(1,BLACK);bar(x,y+250,x+20,y+270);
     tus=getch();
     Beep(200,30);
      setfillstyle(1,renk_yan);bar(x,y+250,x+20,y+270);            
      }
      
      if(y==0){ return;}
      if(y==50){ closegraph(); main();} 
      if(y==100) exit(1);
     getch();
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
      
      if(y==0){ hazir_ol(); oyun() ;}
      if(y==50)  tutorial(); 
      if(y==100) exit(1);
    }
void tutorial(){
     arkaPlan();
     
     
     getch();
    }    
void oyun(){
     arkaPlan_Oyun(0);
     int i=0,k,l,m,r,r1,r2;
     int ras,renk=1;     
     int x=0;
     int key = 0;
     int oyun_hizi=0;


      while (1){
                  kahraman(x); 
                   if (kbhit()){
                            
           key =getch();
             if (key == 75){   if(x>-210){kahraman_sil(x);x-=35;kahraman(x);}}
             if (key == 77){   if(x<+210){kahraman_sil(x);x+=35;kahraman(x);}}
             if (key == 27){ pause(); }       
           }
                
                  
          
 
          
     delay(1);
                   
     oyun_hizi++; 
     if(oyun_hizi==500){ oyun_hizi=0;
     arkaPlan_Oyun(0);
                  if(i%29==0) r=rastgele(i);
                  if(i%29==5) r1=rastgele(i);
                  if(i%29==10) r2=rastgele(i);
                  k=i%29;
                  l=k-5;
                  m=k-10;
          
          blog_ciz(r2,m,renk); 
          blog_ciz(r1,l,renk+10);
          blog_ciz(r,k,renk+3);
          i++;
         }
     }                                  
     
     
     }
      
void arkaPlan_Oyun(int w){
   	setbkcolor(renk_ic);
	setfillstyle(w,0);
	bar(180,0,705,609);
	}
	
void kahraman(int x){
     setfillstyle(1,BLACK);
     bar(390+x,577,495+x,609);
     }
      
void kahraman_sil(int x){
     setfillstyle(1,renk_ic);
     bar(390+x,577,495+x,609);
     }             
     
     
void hazir_ol(){
          
           arkaPlan_Oyun(0);
             setcolor(1);
     settextstyle(2,0,53);
   outtextxy(310,50,"HAZIR OL  3");
       delay(1100);
     arkaPlan_Oyun(0);
   outtextxy(310,50,"HAZIR OL  2");
       delay(1100);
     arkaPlan_Oyun(0);
   outtextxy(310,50,"HAZIR OL  1");
       delay(1100);
     arkaPlan_Oyun(0);
    }

void blog_ciz(int al, int h, int col){
   
          int sag;
  
           sag=180+al+105;  
              setfillstyle(1,col);
      bar(180,1+(h*32),180+al,33+(h*32));
              setfillstyle(1,col);
       bar(sag,1+(h*32),705,33+(h*32)); }   
     
     
     
void blog_sil(int al, int h, int col){
   
        int sag;
 
       sag=180+al+105;  
              setfillstyle(1,renk_ic);
        bar(180,1+(h*32),180+al,33+(h*32));
              setfillstyle(1,renk_ic);
       bar(sag,1+(h*32),705,33+(h*32));  }
       
       
       
       
int rastgele(int count){
    int ras;
    if (count%29==0||count%29==5||count%29==10){ras=rand()%13; 
          if(ras==0){ras=ras+1;}
          ras=ras*35;

          return ras;   }

    }     
