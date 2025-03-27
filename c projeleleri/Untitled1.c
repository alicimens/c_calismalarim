#include<stdio.h>
#include<stddef.h>
#define SIZE 12 
 
int main (void){
	
	int a [SIZE]= {1,2,3,4,5,6,7,8,9,10,11,12};
	int total  = 0 ; 
	
	size_t i ; //  dongu degiskeni i  size_t  tipinde tanimlanmis cok kafaya takma akilda kalsin yeterli simdilik 
	for ( i= 0 ; i < SIZE ;i++)
	{
		total += a[i];
	}
	printf ("total of array element value is  %d ",total);
	return 0 ;
}

