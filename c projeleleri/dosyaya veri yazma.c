#include<stdio.h>

int main (){
	
	
	FILE *file;
	
	char string[]  = "hello dunya dsfsdf"; 
	
	file = fopen("./data/inputs.txt", "w");  // fopen la hem dosya açýyoz hem oluþturuyoz
	
	if (file == NULL){
		
		printf("acýlacak dosya yok");
		
		return 1 ;
	}
	 
	 fprintf(file, "%s" ,string);
	 
	 fclose(file);
	 
	 return 0 ;	
}
