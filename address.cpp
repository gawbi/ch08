// file : address.c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int input;

	printf("���� �Է�: ");
	scanf("%d", &input);
	printf("�Է°�: %d\n", input);
	printf("�ּҰ�: %u(10����), %p(16����)\n", (int)&input, &input);
	printf("�ּҰ�: %u(10����), %#X(16����)\n", (unsigned)&input,
		(int) &input);
	printf("�ּҰ� ũ��: %d\n", sizeof(&input));

	return 0;
}
/* �����
���� �Է�: 100
�Է°�: 100
�ּҰ�: 11533900(10����), 00AFFE4C(16����)
�ּҰ�: 11533900(10����), 0XAFFE4C(16����)
�ּҰ� ũ��: 4
*/