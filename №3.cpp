#include <stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int N;
	int summa;
	printf("Введите число N\nN=");
	scanf_s("%d", &N);
	int* p = new int[N];
	int i;
	for (i = 0; i < N; i++)
	{

	}

	float pr = 1.1;

	for (cout = 1; cout <= N; cout++)
	{
		pr = pr * (pr + 0.1);

		printf("%f\n", pr);
	}
	printf("%f", pr);
	return 0;
}