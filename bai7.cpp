#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int count[1000] = {0}; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]] = 1; 
    }

    int target;
    scanf("%d", &target);

    if (count[target] == 1) {
        printf("So %d da duoc tim thay trong mang.\n", target);
    } else {
        printf("So %d khong co trong mang.\n", target);
    }

    return 0;
}
