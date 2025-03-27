#include<stdio.h>
#define SIZE 10 

int main (void){
	
	
	int a [SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 4};
	
	 puts("Data items in original order");

    int i;
	for (i=0; i<=SIZE;i++){
		
		printf("%4d",  a[i]);
	}
	
	int j;
	for (j=0;j<SIZE;j++){
		
		
		int k ;
		for (k=0; k< SIZE-1; k++){
			
			
			if (a[k+1]>a[k]){
	
			int hold =a[k+1];
			a[k+1]=a[k];
			a[k]=hold;	
		}
		}		
	} 
	puts("\nData items in ascending order");
	
	size_t m ;
	for ( m = 0; m < SIZE; ++m) {		
		printf("%4d", a[m]);
}
puts("");
}
