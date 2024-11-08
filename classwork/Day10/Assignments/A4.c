
rotate array every kth element

1 2 3 4 5 6 7 8 9

k= 3

3 2 1 6 5 4 9 8 7

#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        // Swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateInGroups(int arr[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        int end = (i + k - 1 < n) ? i + k - 1 : n - 1;  
        reverseArray(arr, i, end);
    }
}

int main() {
    int n, k;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input elements of the array
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);  

    
    rotateInGroups(arr, n, k);

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

