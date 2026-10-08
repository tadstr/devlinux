#include<stdio.h>

int main() {
    int brutto, tax_amount, netto;
    short tax_rate;

    printf("Nhập lương brutto: ");
    scanf("%d", &brutto);

    printf("Nhập tỉ lệ thuế (%%): ");
    scanf("%hd", &tax_rate);

    tax_amount = brutto * tax_rate / 100;
    netto = brutto - tax_amount;

    printf("Tiền thuế: %d\n", tax_amount);
    printf("Lương ròng: %d\n", netto);
    return 0;
}