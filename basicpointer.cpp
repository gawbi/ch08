// file: basicpointer.c
#include<stdio.h>

int main(void)
{
	char c = '@';
	char* pc = &c;
	int m = 100;
	int* pm = &m;
	double x = 5.83;
	double* px = &x;

	printf("변수명	 주소값	 저장값\n");
	printf("----------------------------------\n");
	printf("%3s %12p %9c\n", "c", pc, c);
	printf("%3s %12p %9d\n", "m", pm, m);
	printf("%3s %12p %9f\n", "x", px, x);

	return 0;
}
/* 결과
변수명          주소값          저장값
----------------------------------
  c     0053FD97         @
  m     0053FD7C       100
  x     0053FD60  5.830000
*/