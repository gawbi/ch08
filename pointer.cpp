// file: pointer.c
#include<stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint;
	ptrint = &data;

	printf("������ �ּҰ�		���尪\n");
	printf("-------------------------------\n");
	printf("  data  %p  %8d\n", &data, data);
	printf("ptrint  %p  %p\n", &ptrint, ptrint);

	return 0;
}
/* �����
���� �ּҰ�           ���尪
-------------------------------
		data  00271339   2560825
, &data, dataptrint 00D8FD68  00D8FD74
*/