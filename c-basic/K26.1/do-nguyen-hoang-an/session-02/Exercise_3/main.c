#include<stdio.h>

int main() {
    float cel, fah;

    printf("Nhập độ Celsius: ");
    scanf("%f", &cel);

    fah = (cel * 9 / 5) + 32;
    printf("Độ Fahrenheit: %.2f\n", fah);

    return 0;
}