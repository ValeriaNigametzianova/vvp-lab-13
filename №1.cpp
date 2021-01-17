#include <stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	float price;
	float weight, cost;
	printf("Введите цену за 1 кг конфет - A\nА=");
	scanf_s("%f", &price);

	weight = 0.1;

	while (weight <= 1)
	{
		cost = price * weight;
		printf("\nЦена за %f кг - %f", weight, cost);
		weight = weight + 0.1;
	}
	return 0;
}