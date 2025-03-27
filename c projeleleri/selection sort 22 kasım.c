#include <stdio.h>

void selectionSort(int arr[], int n) {
	int i;
    for ( i = 0; i < n - 1; i++) {
        int minIndex = i;
        int j;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // En küçük elemanla yer deðiþtir
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
	int i ; 
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Orijinal dizi: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Siralanmis dizi: ");
    printArray(arr, n);

    return 0;
}

