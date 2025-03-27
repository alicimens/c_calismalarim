#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int input ();
int createarray(int size );
int  printarray(int arr [], int size);
int randomnumbergenerator();


int number ;

int input(){
	
	scanf ("%d", &number);
	return number ; 
	
}

int createarray(int size ){
	
	int array [size];
	int i ; 
	for(i = 0 ; i < size ; i++){
		
		array[i] = randomnumbergenerator();
	}
	
	printarray (array  , size );
}


int printarray(int arr[], int size){
	
	int i ;
	for ( i = 0 ; i < size ; i++ ){
		
		printf("%d - " , arr[i]);
	}
	
}

int randomnumbergenerator(){
	int num ;
	
	return num = rand() % 100 +1 ;
	
}

int main(){
	
	
	
	srand (time(NULL)) ;//   ayni anda uretilen sayilarin birbirinden farkli olmasini saglayan bir metot
	
	printf("dizinin boyutunu giriniz  ");
	int arraysize = input();
	
	createarray (arraysize);
}
