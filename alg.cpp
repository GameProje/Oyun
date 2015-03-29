                       if(k==0) r=rastgele(k);
                  if(l==0) r1=rastgele(l);
                  if(m==0) r2=rastgele(m);
                  if(n==0) r3=rastgele(n);
                  
                 
                  
            if(i>14){ blog_ciz(r3,n,renk+13);n++; }         
         if(i>9){ blog_ciz(r2,m,renk);m++; }
         if(i>4){ blog_ciz(r1,l,renk+9);l++;}
                 blog_ciz(r,k,renk+3); k++;
           
           
           if(k>=19) k=0;
                  if(l>=19) l=0;
                  if(m>=19) m=0;
                  if(n>=19) n=0;
                  
                  
                  
                  
 int rastgele(int count){
    int ras;
    if (count==0){
                srand(time(NULL));                                             
          ras=rand()%13; 
          if(ras==0){ras=ras+1;}
          ras=ras*35;

          return ras;   }

    }  
