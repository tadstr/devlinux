#include<stdio.h>

int main() {
    double price, vat_amount, total_price;
    short vat_rate;

    printf("Nhập giá hàng: ");
    scanf("%lf", &price);

    printf("Nhập VAT (%%): ");
    scanf("%hd", &vat_rate);

    vat_amount = price * vat_rate / 100;
    total_price = price + vat_amount;

    printf("Tiền VAT: %.0f\n", vat_amount);
    printf("Tổng tiền: %.0f\n", total_price);
    return 0;
}