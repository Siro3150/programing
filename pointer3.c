#include <stdio.h>

int main( ){
	int d, *pointer;
	pointer = &d;
	printf("整数を入力してください：");
	scanf("%d", pointer);

	printf("入力した整数は、%d です。\n", *pointer);
}