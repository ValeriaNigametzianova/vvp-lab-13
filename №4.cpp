#include <stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i;
	float a, k;
	k = 1;
	printf("Введите числа A и N\nN=");
	scanf_s("%d", &n);
	printf("A=");
	scanf_s("%f", &a);
	for (int i = 1; i <= n; i++)
	{
		k = k + pow(a, i);
	}
	printf("\n%f", k);
	return 0;
}
