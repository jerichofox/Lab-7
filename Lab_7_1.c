#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

void main()
{
	char c;
	int condition;

	setlocale(LC_ALL, "Rus");

	printf("Введите символ: ");
	scanf("%c", &c);

	if ('a' <= c && c <= 'z') {
		condition = 0;
	} else if ('0' <= c && c <= '9') {
		    condition = 1;
	} else {
		    condition = 2;
	}

	switch (condition) {
	case 0:
		printf("это буква\n");
		break;    
	case 1:
		printf("это цифра\n");
		break;	
    default:
		printf("Неизвестный символ\n");
		break;
	}

	system("pause");

	return 0;
}