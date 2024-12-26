// Search an array using functions (passing array to a function)

#include <stdio.h>

int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int index = search(arr, n, key);
    if (index != -1) {
        printf("%d found at index %d\n", key, index);
    } else {
        printf("%d not found\n", key);
    }
    return 0;
}