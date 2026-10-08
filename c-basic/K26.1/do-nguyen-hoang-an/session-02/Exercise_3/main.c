/* Bài tập: Tính chu vi và diện tích hình tròn
 * Input: Bán kính hình tròn
 * Output: Chu vi và diện tích hình tròn
 */
#include <stdio.h>

int main() {
	float cel, fah;

	printf("Nhập độ Celsius: ");
	scanf("%f", &cel);

	// Công thức chuyển đổi Celsius sang Fahrenheit
	// F = (C × 9/5) + 32
	fah = (cel * 9 / 5) + 32;
	printf("Độ Fahrenheit: %.2f\n", fah);

	return 0;
}