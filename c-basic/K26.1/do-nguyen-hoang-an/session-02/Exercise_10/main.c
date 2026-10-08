#include<stdio.h>

int main() {
    double balance, interest, years, total_balance;
    short interest_rate;

    printf("Nhập tiền gốc: ");
    scanf("%lf", &balance);

    printf("Nhập lãi suất (%%): ");
    scanf("%hd", &interest_rate);

    printf("Nhập số năm: ");
    scanf("%lf", &years);

    interest = balance * interest_rate * years / 100;
    total_balance = balance + interest;

    printf("Tiền lãi: %.0f\n", interest);
    printf("Tổng số tiền: %.0f\n", total_balance);
    return 0;
}