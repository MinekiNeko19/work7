#include <stdio.h>
#include <time.h>

void printArr(int arr[],int arrSize);
double avgArr(int arr[],int arrSize);
void copyArr(int o[],int n[],int arrSize);

void populate(int arr[], int arrSize); // helper

int main() {
    int a[10];
    populate(a, sizeof(a)/sizeof(int));
    int b[15];
    // populate(b, sizeof(b)/sizeof(int));
    int c[20];
    // populate(c, sizeof(c)/sizeof(int));
    int d[10];
    // populate(d, sizeof(d)/sizeof(int));
    int e[10];
    int i;
    for (i = 0; i<10; i++) {
        e[i] = i;
    }

    // testing printArr
    printf("testing printArr\n\n");
    printf("array a:\n");
    printArr(a, sizeof(a)/sizeof(int));
    printf("array b:\n");
    printArr(b, sizeof(b)/sizeof(int));
    printf("array c:\n");
    printArr(c, sizeof(c)/sizeof(int));
    printf("array d:\n");
    printArr(d, sizeof(d)/sizeof(int));

    // testing avgArr
    printf("\ntesting avgArr\n\n");
    printf("array e: \n");
    printArr(e, sizeof(e)/sizeof(int));
    printf("avg of e: %lf\n\n", avgArr(e, sizeof(e)/sizeof(int)));
    
    printf("array a: \n");
    printArr(a, sizeof(a)/sizeof(int));
    printf("avg of a: %lf\n\n", avgArr(a, sizeof(a)/sizeof(int)));

    // testing copyArr
    printf("testing copyArr\n\n");
    copyArr(e,a,sizeof(a)/sizeof(int));
    printf("array e: \n");
    printArr(e, sizeof(e)/sizeof(int));
    printf("array a: \n");
    printArr(a, sizeof(a)/sizeof(int));

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

double avgArr(int arr[], int arrSize) {
    long total = 0;
    int i;
    
    for (i = 0; i < arrSize; i++) {
        total += arr[i];
    }
    return (double)total/(double)arrSize;
}

void copyArr(int o[], int n[], int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++) {
        *n = *o;
        n++;
        o++;
    }
}

void populate(int arr[], int arrSize) { // helper
    int i;
    // srand(time(NULL));

    for (i = 0; i < arrSize; i++) {
        arr[i] = rand();
    }
}