#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; 
    }

    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Phan tu %d nam o vi tri: %d\n", target, result + 1);
    } else {
        printf("Khong tim thay phan tu trong mang.\n");
    }

    return 0;
}
