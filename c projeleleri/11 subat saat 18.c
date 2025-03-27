#include<stdio.h>
#define SIZE 5 

int main (){
	
	int  n [SIZE] = {19,4,8 ,25,3};
	
	printf("%s%13s%17s\n", "Element", "Value", "Histogram");
	
	int i ;
	for (i = 0 ; i < SIZE ; i ++){
		
		printf("%7u%13d ", i, n[i]);
		
	int j ;
	for (j= 0 ; j < n[i]; j++ ){
		
		 printf("%c", '*'); 
	}
		puts("");
	}
}
