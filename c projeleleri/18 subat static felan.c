#include<stdio.h>


void staticArrayInit();
void automaticArrayIint();

int main (void){
	
	
	puts ("first call to each function");
	staticArrayInit();
	automaticArrayInit();
	
	
	puts ("\n \n second call to each function");
	staticArrayInit();
	automaticArrayInit();
	
}

void staticArrayInit(void){
	
	static int array1[3];
	
	puts("\nValues on entering staticArrayInit:");
	
	size_t i ;
	
	for (i = 0 ; i <= 2 ; ++i){
	printf("array1[%u] = %d ", i, array1[i]);
	}
	
	 puts("\nValues on exiting staticArrayInit:");
	 
	 size_t k ;
	 for ( k = 0; k <= 2; ++k) {
    printf("array1[%u] = %d ", k, array1[k] += 5);
}}
void automaticArrayInit(void)
 {	
 	int array2  [3]= {1,2,3};
 // initializes elements each time function is called
 puts("\n\nValues on entering automaticArrayInit:");

 // output contents of array2
    size_t i ;
 for (i = 0; i <= 2; ++i) {
 printf("array2[%u] = %d ", i, array2[i]);
 } 
puts("\nValues on exiting automaticArrayInit:");

 // modify and output contents of array2
    size_t k ;
 for ( k = 0; k <= 2; ++k) {
 printf("array2[%u] = %d ", k, array2[k] += 5);
 }
}







