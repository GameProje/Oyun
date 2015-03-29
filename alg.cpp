void blog_ciz(int , int, int);
void blog_sil(int, int, int);
int rastgele(int);


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
    if (count%27==0||count%27==4||count%27==8){ras=rand()%13; 
          if(ras==0){ras=ras+1;}
          ras=ras*35;

          return ras;   }

    }
    
    
    
    
    
    //Gerekli kısım
    if(i%27==0) r=rastgele(i);
                  if(i%27==4) r1=rastgele(i);
                   if(i%27==8) r2=rastgele(i);
                  k=i%27;
                  l=k-4;
                  m=k-8;
           blog_ciz(r2,m,renk+3); 
          blog_ciz(r1,l,renk+7);
          blog_ciz(r,k,renk);
                 delay(500);
               blog_sil(r1,l,renk+7);
          blog_sil(r,k,renk);   
          blog_sil(r2,m,renk+3);  
          i++;
