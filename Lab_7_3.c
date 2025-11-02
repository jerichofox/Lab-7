#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

void main()
{	
	int power;

	setlocale(LC_ALL, "Rus");

	puts("Введите степень 10:");
	scanf("%d", &power);

	switch (power) {
	case -12:
		printf("пико-\n\n");
		break;
	case -9:
		printf("нано-\n\n");
		break;
	case -6:
		printf("микро-\n\n");
		break;
	case -3:
	    printf("милли-\n\n");
		break;
	case -2:
		printf("санти-\n\n");
		break;
	case -1:
		printf("деци-\n\n");
		break;
	case 0:
		printf("дека-\n\n");
		break;
	case 2:
		printf("гекто-\n\n");
		break;
	case 3:
		printf("кило-\n\n");
		break;
	case 6:
		printf("мега-\n\n");
		break;
	case 9:
		printf("гига-\n\n");
		break;
	case 12:
		printf("тера-\n\n");
		break;
	default:
		printf("Нет названия\n\n");
		break;
	}

	system("pause");

	return 0;
}