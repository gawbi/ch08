// file: sumpointer.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����
#include <stdio.h>

int main(void)
{
	double x, y;
	double *px = &x;
	double* py = &y;

	//������ ���� px�� py�� ���
	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", px, py);
	//�� ���
	printf("%.2f + %.2f = %.2f\n", *px, *py, *px + *py);

	return 0;
}
/* ���
�� �Ǽ� �Է�:  3.874 7.983
3.87 + 7.98 = 11.86
*/