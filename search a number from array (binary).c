#include <stdio.h>
int BinarySearch(int arr[], int size, int value) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == value)
            return mid;
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main() {
    int a[10] = {2, 4, 8, 9, 10, 12, 13, 15, 20, 22};
    int find, result;

    printf("Enter the value to search: ");
    scanf("%d", &find);

    result = BinarySearch(a, 10, find);

    if (result == -1)
        printf("Number Not Found.\n");
    else
        printf("Number %d is at index %d.\n", find, result);

    return 0;
}