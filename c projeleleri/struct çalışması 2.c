#include<stdio.h>

// struct  2. örnek 
struct rectangle {
	
	float width;
	float length;
};


int main (){
	
	struct rectangle rectangle1 = {3.2 , 5.3};
	struct rectangle rectangle2 = {12.2, 5.9};
	
	float area1  = rectangle1.length * rectangle1.width;
	float area2  = rectangle2.length * rectangle2.width;
	
	float total = area1 + area2 ; 
	
	
	printf ("dikdortgen1 in alani  %.2f \n", area1 );
	printf ("dikdortgen2 nin alani  %.2f \n", area2 );
	printf ("dikdortgenlerin alan toplami %.2f", total );
	
}
