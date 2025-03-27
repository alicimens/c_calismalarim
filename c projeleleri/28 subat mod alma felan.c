#include<stdio.h>
#define SIZE 99 

/*const: Bu kelime, degiskenin degerinin programin geri kalani boyunca degistirilemez oldugunu belirtir. 
Yani, bir kez baslatildiktan sonra degeri degistirilemez.

unsigned int: Bu, degiskenin bir tamsayi (integer) oldugunu belirtir. "unsigned" kelimesi,
 degiskenin sadece pozitif tamsayi degerlerini alabileceði anlamina gelir.
 Bu tur bir tamsayi, negatif degerlere izin vermez, ancak pozitif tamsayý degerleri icin daha genis bir aralýga sahiptir.

ornegin:


const unsigned int sayi = 42;
Bu ornekte, "sayi" adinda bir degisken tanimlanmistir ve degeri 42 olarak belirlenmistir. 
Ayrica, bu degiskenin degerinin daha sonra programin herhangi bir yerinde degistirilemeyecegi belirtilmistir.*/

void  mean (const unsigned int answer[]);
void  median (unsigned int answer []);
void mode (unsigned int freq [], unsigned const int answer[] );
void bubblesort(unsigned int a []);
void printArray (unsigned const int a []);


int main (void){
	
	unsigned int frequency [10] = {0};
	
	unsigned int response [SIZE] = {
		6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
		7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
		6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
		7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
		6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    	7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
    	5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
    	7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
    	7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 7, 8, 7};
        
        mean (response);
        median (response);
        mode  (frequency ,response);
    }
        void mean (const unsigned int answer []){
        	
        	 printf("%s\n%s\n%s\n", "********", " Mean", "********"); //  birazdan buraya bak 
        	
        	unsigned int total = 0;
        	size_t i ;
        	
        	for (i = 0; i <SIZE;i ++){
        		
        		total = answer[i];
        }
        		printf("The mean is the average value of the data\n"
                        "items. The mean is equal to the total of\n"
                        "all the data items divided by the number\n"
                        "of data items (%u). The mean value for\n"
                        "this run is: %u / %u = %.4f\n\n",
                        SIZE, total, SIZE, (double) total / SIZE);
			
        
		}
void  median (unsigned int answer[]){
	
	
	printf ("\n%s\n%s\n%s\n%s\n",
	"**********","median","********",
	"the unsorted array of responses is");
	
	printArray(answer);
	
	bubblesort(answer);
	
	printf ("%s", "\n\n the sorted array is");
	printArray(answer);

    printf("\n\nThe median is element %u of\n"
           "the sorted %u element array.\n"
           "For this run the median is %u\n\n",
            SIZE / 2, SIZE ,answer[SIZE/2]);
}  

void mode (unsigned int freq[], const unsigned int answer[]){
	
	printf("\n%s\n%s\n%s\n","********", " Mode", "********");
	 
	 size_t rating;
	 for (rating = 1 ; rating<=9; ++rating){
	 	freq[rating] = 0 ;
	 }
	size_t j ;
	
	for (j=0 ; j < SIZE ;++j){
		
		++freq[answer[j]];
		
		
	}
	
	printf("%s%11s%19s\n\n%54s\n%54s\n\n",
            "Response", "Frequency", "Histogram",
              "1 1 2 2", "5 0 5 0 5");
              
         unsigned int largest = 0 ;
         unsigned int modeValue = 0 ;
         
         for (rating = 1 ; rating <= 9 ; ++rating){
         	
            printf ("%8u%11u             ",rating, freq[rating]);
            
            if (freq[rating] > largest) {
                largest = freq[rating];
                modeValue = rating;
         }
         unsigned int h;
         for ( h = 1; h <= freq[rating]; ++h) {
                  printf("%s", "*");
        }

                        puts(""); 
		 }
		 
		 printf("\nThe mode is the most frequent value.\n"
                 "For this run the mode is %u which occurred"
                 " %u times.\n", modeValue, largest);
}
  void bubblesort(unsigned int a[])
 {
                    // loop to control number of passes
                unsigned int pass;
               for (pass = 1; pass < SIZE; ++pass) {

                // loop to control number of comparisons per pass
                size_t j;
                for ( j = 0; j < SIZE - 1; ++j) {

 // swap elements if out of order
               if (a[j] > a[j + 1]) {
                unsigned int hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold; } 
				}
				}
				 }

                  // output array contents (20 values per row)
void printArray(const unsigned int a[])
 {
              // output array contents
              size_t j ;
          for ( j = 0; j < SIZE; ++j) {

           if (j % 20 == 0) { // begin new line every 20 values
             puts("");
 }

               printf("%2u", a[j]);
 }
 } 










	

