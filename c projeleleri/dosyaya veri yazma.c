#include<stdio.h>

int main (){
	
	
	FILE *file;
	
	char string[]  = "hello dunya dsfsdf"; 
	
	file = fopen("./data/inputs.txt", "w");  // fopen la hem dosya a��yoz hem olu�turuyoz
	
	if (file == NULL){
		
		printf("ac�lacak dosya yok");
		
		return 1 ;
	}
	 
	 fprintf(file, "%s" ,string);
	 
	 fclose(file);
	 
	 return 0 ;	
}
