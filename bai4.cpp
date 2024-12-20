#include<stdio.h>
#include<string.h>

#define MAX 100

struct SinhVien {
    char ten[50];
    float diem;
};

int main() {
    int n;
    scanf("%d", &n);

    struct SinhVien sv[MAX];

    for (int i = 0; i < n; i++) {
        scanf("%s", sv[i].ten);
        scanf("%f", &sv[i].diem);
    }

    char searchName[50];
    scanf("%s", searchName);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(sv[i].ten, searchName) == 0) {
            printf("%.2f\n", sv[i].diem);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien.\n");
    }

    return 0;
}
