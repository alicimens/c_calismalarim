#include<stdio.h>

#define ROWS 4
#define COLS 3

int main(void){
	
	int matrix [ROWS] [COLS]=  {
	{1,2,3},
	{4,5,6},
	{7,8,9},
	{10,11,12}
	
	};
	
	int  transposed[COLS][ROWS] ;
	
	int i ;
	for(i=0;i<ROWS;i++){
		
		int j ;
		for (j=0;j<COLS;j++){
			
			transposed[j][i] = matrix [i][j];
			
		}
	} 
	printf ("matris : \n");
	
	int a;
	for(a=0; a<ROWS;a++){
		
		
		int j ;
		
		for (j = 0 ; j<COLS;j++){
			
			printf("%d ",matrix[a][j]);
		}
		puts("");
	}
	printf("matrisin transpozu : \n");
	
	int b ;
	for (b=0;b <COLS;b++)
	{
		int j ;
		for (j=0; j<ROWS; j++){
			
			printf ("%d ", transposed[b][j]);
		}
		puts("");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
