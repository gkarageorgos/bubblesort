#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


void swap(int* a, int*b);
void bubbleSort(int arr[], int n);

int main(){
    int n; // Size of the array
    int max_value; // Maximum possible element in the array

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the maximum possible element in the array:");
    scanf("%d", &max_value);

    // Set the seed for the rand() function based on the current time
    srand(time(0));

    // Create and generate random integers for the array
    int array[n];
    for (int i = 0; i < n; i++) {
        array[i] = rand() % max_value; // Generate a random number in the range [0, max_value-1]
    }

    printf("Random integer array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    bubbleSort(array, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}


void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n){
    for (int i = n - 1; i > -1; i--) {
        bool flag = true;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                flag = false;
            }
        }
        if (flag) {
            return;
        }
    }
}