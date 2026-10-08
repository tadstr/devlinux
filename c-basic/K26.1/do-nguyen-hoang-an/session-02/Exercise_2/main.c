/* Bài tập: Tính diện tích hình chữ nhật
 * Input: Chiều dài và chiều rộng
 * Output: Diện tích hình chữ nhật
 */
#include <stdio.h>

int main() {
	float a, b;

	printf("Nhập chiều dài: ");
	scanf("%f", &a);

	printf("Nhập chiều rộng: ");
	scanf("%f", &b);

	printf("Diện tích: %.2f\n", a * b);
	return 0;
}