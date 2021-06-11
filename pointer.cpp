//포인터(pointer): 변수의 주소를 저장하는 변수

#include <stdio.h>

int main() {
	int a = 10;

	int* ptr;
	ptr = &a;

	printf("a의 값: %d\n", a);

	*ptr = 20;

	printf("a의 값: %d\n", a);
}
