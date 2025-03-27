// dosya açma ve okuma



#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("./data/inputs.txt", "r"); // fopen ile pc dosyayi kendi belleginde acti aslinda 
    if (file == NULL) {
        printf("Dosya acma islemi yapilamadi.\n"); 
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {   //fgetc fonksiyonunu kullanarak dosyadan karakter karakter okuyoruz.  Dosyanin sonuna ulasildiginda EOF doner ve while dongusunden cikilir.
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}




