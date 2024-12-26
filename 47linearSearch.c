// Search for an element in an integer array (Linear search)

#include <stdio.h>

int main() {
    int n, i, key, flag = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("Element found at position %d\n", i + 1);
    } else {
        printf("Element not found\n");
    }
    return 0;
}