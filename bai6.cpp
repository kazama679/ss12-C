#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int count[1001] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (count[arr[i]] > 1) {
            printf("Phan tu %d xuat hien %d lan.\n", arr[i], count[arr[i]]);
            found = 1;
            count[arr[i]] = 0; 
        }
    }

    if (!found) {
        printf("Khong co phan tu lap lai.\n");
    }

    return 0;
}
