#include<stdio.h>

int main() {
    int a, b;

    printf("Nhập a: ");
    scanf("%d", &a);

    printf("Nhập b: ");
    scanf("%d", &b);

    if (a == 0 && b == 0) {
        printf("Vô số nghiệm\n");
    } else if (a == 0 && b != 0) {
        printf("Vô nghiệm\n");
    } else {
        printf("Nghiệm x = %.2f\n", - (float)b / a);
    }
    return 0;
}