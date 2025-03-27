#include<stdio.h>
 


int main (){
	
	char str1 []  =  "Algoritma";    //  burda en sonda null karakteri vardýr 
	 
	char str2 [] = {'A','l','g','o','r','i','t','m','a'}; // burada ise  en sonda null karakteri yoktur 
	
	int n1 =  sizeof (str1) / sizeof(str1[0]);
	
	int n2 = sizeof (str2) / sizeof (str2[0]);
	
	printf ("n1 = %d ,  n2 = %d",n1,n2);
	
	return 0 ; 
	
}
