#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int kutuGetir();


	int kutuGetir(){
		
		
		int solKutu = 40 + (rand() % 535);
	
		return solKutu;
		
	}

int main(){
	srand( time(NULL) );
	int solKutu, sagKutu, KARAKTER = 40;	

	for( int i = 0; i < 100; i++){
		
	
		solKutu = kutuGetir();
		sagKutu = 640 - solKutu - KARAKTER;
	 	
	 	printf("%d\t%d\n", solKutu, sagKutu);
	
	}
	
	
	getch();
	return 0;
}
