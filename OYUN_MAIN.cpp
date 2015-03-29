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
void skor(int s);
int  rastgele(int);
void gameover();


int main( )
{
   	initwindow( 900 , 609 , "Crazy Blogs" );
   	
	arkaPlan();
	ana_menu();
    
   
    
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
     settextstyle(2,0,40);
     setbkcolor(renk_ic);
     setcolor(BLACK);
     outtextxy(280,50,"Crazy Blogs");
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
     
     ana_menu();
    }    
void oyun(){
     arkaPlan_Oyun(0);
     int i=0,k,l,m,r,r1,r2,r3,n,sko=0;
     int ras,renk=1;     
     int x=0;
     int key = 0;
     int oyun_hizi=0;
     int HIZ = 500, sayacc = 0;


      while (1){
                  kahraman(x); 
                   if (kbhit()){
                            
           key =getch();
             if (key == 75 || key == 'a'){   if(x>-210){kahraman_sil(x);x-=35;kahraman(x);}
                     
                     
             }
             if (key == 77 || key == 'd'){   
             {if(x<+210){kahraman_sil(x);x+=35;kahraman(x);}
                   
                   
             }}
             if (key == 27){ pause(); }       
           }
                
                  
          
 
          
     delay(1);
                   
     oyun_hizi++; 
     if(oyun_hizi==HIZ){ oyun_hizi=0;
     arkaPlan_Oyun(0);
                 /*  if(k==18){if((x+390)!=((180+r))) gameover();   }   
                   if(l==18){if((x+390)!=((180+r1))) gameover();   }                                   
                   if(m==18){if((x+390)!=((180+r2))) gameover();   }
                   if(n==18){if((x+390)!=((180+r3))) gameover();   }*/
                  if(k==0) r=rastgele(k);
                  if(l==0) r1=rastgele(l);
                  if(m==0) r2=rastgele(m);
                  if(n==0) r3=rastgele(n);
                  
                 
                  
            if(i>14){ blog_ciz(r3,n,renk+13);n++; }         
            if(i>9){ blog_ciz(r2,m,renk);m++; }
            if(i>4){ blog_ciz(r1,l,renk+9);l++;}
                 blog_ciz(r,k,renk+3); k++;
           
           
                  if(k>=19){ k=0;sko++;}
                  if(l>=19){l=0;sko++;}
                  if(m>=19){ m=0;sko++;}
                  if(n>=19){n=0; sko++;}
                  
                  skor(sko);
          i++;
          sayacc++;
          
          if(HIZ > 350)
          if ( sayacc % 9 == 0) 
             HIZ -= 4;
             printf("%d", HIZ);
         }
     }                                  
     
     
     }
      
void arkaPlan_Oyun(int w){
   	setbkcolor(renk_ic);
	setfillstyle(1,renk_ic);
	bar(180,0,705,609);
	}
	
void kahraman(int x){
     int check = 0, sonRenkSol,sonRenksagg, sonRenksoll, sonRenkSag,sonRenkOrta, kkk=0,aaa=0;
      setfillstyle(1,BLACK);
     bar(390+x,578,495+x,609);
     
     sonRenkSol = getpixel(390+x-1,600);
     sonRenkSag = getpixel(495+x+1,600);
     sonRenkOrta = getpixel(405+x,577);
     sonRenksoll = getpixel(405+70+x,600);
     sonRenksagg = getpixel(405-70+x,600);
     if(     sonRenkOrta == renk_ic ) kkk=1;
     if(     sonRenksagg != renk_ic || sonRenksagg !=  renk_yan  ) aaa=1;
     if(     sonRenksoll != renk_ic || sonRenksoll !=  renk_yan  ) aaa=1;
     if ( aaa == 1 && kkk==1 && (sonRenkSol == sonRenkSag ) )check=1;
     if ( aaa == 1 &&  kkk==1 &&(sonRenkSol == renk_yan && sonRenkSag == renk_ic) ) check=1;
     if(  aaa == 1 && kkk==1 &&(sonRenkSag == renk_yan && sonRenkSol == renk_ic ) )check=1;
     if (sonRenkSag == renk_yan && sonRenkSol != renk_ic  ) check=1;
     if (sonRenkSol == renk_yan && sonRenkSag != renk_ic  ) check=1;
     
    
    

     
    
     if( check==0){
         outtextxy(400,250,"GAMEOVER");        
          delay(5000);
         ana_menu();
         }
       
     
     }
      
void kahraman_sil(int x){
     setfillstyle(1,renk_ic);
     bar(390+x,578,495+x,609);
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

void blog_ciz(int r, int h, int col){
   
          int sag;
  
           sag=180+r+105;  
              setfillstyle(1,col);
      bar(180,1+(h*32),180+r,33+(h*32));
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
    if (count==0){
                srand(time(NULL));                                             
          ras=rand()%13; 
          if(ras==0){ras=ras;}
          ras=ras*35;

          return ras;   }

    } 
void skor (int s){
     char aa[10];
     s=s-2;
     sprintf(aa,"%d",s);
     setcolor(BLACK);
     setbkcolor(renk_yan);
     settextstyle(2,0,15);
     setfillstyle(1,renk_yan);
     bar(750,90,800,110);
     outtextxy(750,90,aa);
     outtextxy(750,50,"SKOR");
     
} 
void gameover(){
     settextstyle(2,0,15);
     arkaPlan_Oyun(1);
     outtextxy(370,250,"GAMEOVER");        
          delay(5000);
         ana_menu();   
     
     }  
