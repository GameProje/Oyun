#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	
	int **matris;
	int x, y,i,j;
	

	printf("Matrisin Satir Sayisi: ");
	scanf("%d", &x);
	printf("Matrisin Sutun Sayisi: ");
	scanf("%d", &y);
	

	matris = new int*[x];
	
	for(i=0;i<x;i++){
		matris[i] =  new int [x];	
	}
	 
	
	if (matris == NULL)
		exit(1);
		
	for( i = 0; i<x; i++){
	
		for(j = 0; j<y; j++ ){
			
			printf("Matris[%d][%d]: ",i+1, j+1);
			scanf("%d", &(matris[i][j]) );
			
		}
	
	}	
	for(i = 0; i<x; i++){
	
		for(j = 0; j<y; j++ ){
			
			printf("%3d",matris[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	delete[] matris;
	
	getch();
	return 0;
	
}
