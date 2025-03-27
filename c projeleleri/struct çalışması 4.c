#include<stdio.h>


//  STRUCT  ORNEK 4 
struct student {
	
	char name [20];
	int number;
	float grade;
};

struct student ogrbilgiler ( struct student ogr){
	
	
	printf ("ogrencinin adini girin \n");
	scanf ("%s", &ogr.name);
	printf ("ogrencinin numarasini girin \n");
	scanf ("%d", &ogr.number);
	printf ("ogrencinin notunu girin \n");
	scanf ("%f", &ogr.grade);
	
	return ogr; // bunu  eklemeyince çalýþmýyor 
	
}

int main (){
	
	struct student ogr1;
    ogr1 =  ogrbilgiler(ogr1);
	
	printf ("ogrenci bilgileri \n");
	printf ("isim :  %s \n", ogr1.name);
    printf ("numarasi :  %d \n", ogr1.number);
	printf ("notu :  %.2f \n", ogr1.grade);
	
}
