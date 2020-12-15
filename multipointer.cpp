// file: multipointer.c
#include<stdio.h>

int main(void)
{
	int i = 20;
	int *pi = &i;		//������ ����
	int **dpi = &pi;	//���� ������ ����

	printf("%p %p %p\n", &i, pi, *dpi);

	*pi = i + 2;	// i = i + 2;
	printf("%d %d %d\n", i, *pi, **dpi);

	**dpi = *pi + 2;// i = i + 2;
	printf("%d %d %d\n", i, *pi, **dpi);

	return 0;
}
/* ���
00D3FE88 00D3FE88 00D3FE88
22 22 22
24 24 24
*/