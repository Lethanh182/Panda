#include<stdio.h>

void circularShift(int* a, int* b, int* c, int* d) {
		int trunggian = *a;
			*a = b;
			*b = c;
			*c = d;
			*d = trunggian;
	}

int main() {
	int a, b, c, d;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	printf("Nhap vao so c:");
	scanf("%d", &c);
	printf("Nhap vao so d:");
	scanf("%d", &d);
	
	printf("A = %d, B = %d, C = %d, D = %d\n", a, b, c, d);
	
	circularShift(&a, &b, &c, &d);
	
	printf("Gia tri sau khi chuyen doi: \n");
	printf("A = %d, B = %d, C = %d, D = %d\n", a, b, c, d);
	
	return 0;
}	