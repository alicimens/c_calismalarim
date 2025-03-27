#include<stdio.h>

int main (void){
	
	int boyut;
	printf("olusturmak istediginiz dizinin boyutunu girin  \n");
	scanf("%d", &boyut);
	
	if (boyut<=0){
		
		printf("lutfen gecerli bir sayi gir");
		
		return 1;
	}
	
	int dizi [boyut];
	
	printf ("simdi lutfen  olusturdugunuz boyut kadar sayilari girin... her sayi girdikten sonra da entere basin  \n");
	int i;
	for (i=0;i<boyut;i++){
		
		scanf ("%d", &dizi[i]);
		
	}
	
	int k ;
	for (k=0;k<boyut;k++){
		
		int m;
		for (m=0;m<boyut-1;m++){
			
			if (dizi[m+1]>dizi[m]){
			
			int hold = dizi[m];
			dizi[m] = dizi[m+1];
			dizi [m+1]=hold;
			
			}
		}
		
	}
	
	puts ("buyukten kucuge siralaniyor");
	
	int n;
	for (n=0;n<boyut;n++){
		
		printf("%4d", dizi[n]);
	}
	}
