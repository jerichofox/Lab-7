#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	float x, y;
	char c;

	setlocale(LC_ALL, "Rus");

	puts("Введите выражение (например 4+2):");
	scanf("%f%c%f", &x, &c, &y);

	switch (c) {
	case '+':
	    printf("=%g", x + y);
		break;
	case '-':
		printf("=%g", x - y);
		break;
	case '*':
		printf("=%g", x * y);
		break;
	case '/':
		printf("=%g", x / y);
		break;
	case '^':
		printf("=%g", pow(x, y));
		break;
	default:
		printf("Некорректный ввод");
		break;
	}

	system("pause");

	return 0;
}