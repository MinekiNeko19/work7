#include <stdio.h>
#include <time.h>

void printArr(int arr[],int arrSize);
double avgArr(int arr[],int arrSize);
void copyArr(int o[],int n[],int arrSize);

void populate(int arr[], int arrSize); // helper

int main() {
    int a[10];
    populate(a, sizeof(a)/sizeof(int));
    printArr(a, sizeof(a)/sizeof(int));
    int b[15];
    populate(b, sizeof(b)/sizeof(int));
    printArr(b, sizeof(b)/sizeof(int));
    int c[20];
    populate(c, sizeof(c)/sizeof(int));
    printArr(c, sizeof(c)/sizeof(int));
    int d[10];
    populate(d, sizeof(d)/sizeof(int));
    printArr(d, sizeof(d)/sizeof(int));

    return 0;
}

void printArr(int arr[],int arrSize) {
    int i;

    printf("[ ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void populate(int arr[], int arrSize) { // helper
    int i;
    // srand(time(NULL));

    for (i = 0; i < arrSize; i++) {
        int x = rand();
        arr[i] = x;
    }
}