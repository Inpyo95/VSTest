#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
	int width, height;
	double area;

	printf("밑변과 높이를 입력하시오: ");
	scanf("%d %d", &width, &height);

	area = (double)width * (double)height / 2.0;

	printf("밑변 = %.2fcm, 높이 = %.2fcm인 직각삼각형의 넓이 = %.2fcm^2", (double)width, (double)height, area);

	return 0;
}