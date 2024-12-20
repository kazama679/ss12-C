#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    char condition[20];
    scanf("%s", condition);

    int found = 0;

    if (strcmp(condition, "ch?n") == 0) {
        printf("Cac so chan la: ");
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    } else if (strcmp(condition, "le") == 0) {
        printf("Cac so le la: ");
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    } else if (strncmp(condition, "lon hon", 6) == 0) {
        int x;
        sscanf(condition + 6, "%d", &x);
        printf("Cac so lon hon %d la: ", x);
        for (int i = 0; i < n; i++) {
            if (arr[i] > x) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Khong co so nao thoa man dieu kien.\n");
    }

    return 0;
}
