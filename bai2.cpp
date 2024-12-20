#include<stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Khong co gia tri nho nhat\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu %d trong mang: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}
