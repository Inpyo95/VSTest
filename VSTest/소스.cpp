#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
	int width, height;
	double area;

	printf("�غ��� ���̸� �Է��Ͻÿ�: ");
	scanf("%d %d", &width, &height);

	area = (double)width * (double)height / 2.0;

	printf("�غ� = %.2fcm, ���� = %.2fcm�� �����ﰢ���� ���� = %.2fcm^2", (double)width, (double)height, area);

	return 0;
}