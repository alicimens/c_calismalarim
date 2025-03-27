#include<stdio.h>

//  STRUCT ORNEK 3 
struct urun {
	
	int code ;
	char name [20];
	float price ;
	
};

int main (){
	
	struct urun product1 = {123 , "dildo",  5.50};
	
	printf ("URUN BILGILERI \n");
	printf ("urunun kodu :  %d \n", product1.code);
	printf ("urunun adi :  %s \n", product1.name);
    printf ("urunun fiyati :  %f \n", product1.price);

}
