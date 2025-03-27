#include<stdio.h>
#define STUDENTS 3 // 3 dedigin sey parantezler sayýsý  diger anlamiyla satir sayisidir 
#define COURSES 4 // 4 dedigin sey herbir parantezin icindeki eleman sayisi  zaten ic ice for da buna göre yapýlmis.. aslinda bu da sutun sayisidir..


int main(void){
	
	
	float grades [STUDENTS] [COURSES] = {
	
	
	{1,2,3,4},{5,6,7,8},{9,10,11,12} // bunlari daha okunakli yazabiliriz onu zaten biliyoz (satir satir olacak sekilde)
	};
	
	int i;
	for (i=0; i<3; i ++){
		
		int j ;
		for (j=0; j<4;j++){
			
			printf("%2.f ",grades[i][j]);
			
			
		}
		printf("\n");
	}
}
