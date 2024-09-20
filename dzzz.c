#include <stdio.h>
#include <locale.h>

task_dz()
{
	//Составьте программу для определения сдачи после покупки в магазине товара :
	//перчаток стоимостью А руб., портфеля стоимостью Б руб., галстука стоимостью С руб.
	//	Исходная сумма, выделенная на покупку – Д руб.В случае нехватки денег сдача
	//	получится отрицательной.
	int gloves_cost, bag_cost, tie_cost, all, change;
	puts("Введите цену перчаток\nv");
	scanf("%d", &gloves_cost);
	puts("Введите цену портфеля\nv");
	scanf("%d", &bag_cost);
	puts("Введите цену галстука\nv");
	scanf("%d", &tie_cost);
	puts("Введите общую сумму денег\nv");
	scanf("%d", &all);
	change = all - (gloves_cost + bag_cost + tie_cost);
	if (change > 0) {
		printf("Ваша сдача %d руб!", change);
	}
	else {
		printf("Вам не хватает денег, ведь ваша сдача %d руб.", change);
	}
}

main()
{
	task1();
}