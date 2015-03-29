
void blog_ciz(int , int,  int);



void blog_ciz(int al, int h, int col){
   
     int sag;
                   kahraman(0);
   
           sag=180+al+105;  
              setfillstyle(1,col);
     bar(180,1+(h*32),180+al,33+(h*32));
              setfillstyle(1,col);
     bar(sag,1+(h*32),705,33+(h*32));
                delay(600);
                   arkaPlan_Oyun(0);
     
     }             
