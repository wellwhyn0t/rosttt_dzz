#include <stdio.h>
#include <locale.h>

task_dz()
{
	//��������� ��������� ��� ����������� ����� ����� ������� � �������� ������ :
	//�������� ���������� � ���., �������� ���������� � ���., �������� ���������� � ���.
	//	�������� �����, ���������� �� ������� � � ���.� ������ �������� ����� �����
	//	��������� �������������.
	int gloves_cost, bag_cost, tie_cost, all, change;
	puts("������� ���� ��������\nv");
	scanf("%d", &gloves_cost);
	puts("������� ���� ��������\nv");
	scanf("%d", &bag_cost);
	puts("������� ���� ��������\nv");
	scanf("%d", &tie_cost);
	puts("������� ����� ����� �����\nv");
	scanf("%d", &all);
	change = all - (gloves_cost + bag_cost + tie_cost);
	if (change > 0) {
		printf("���� ����� %d ���!", change);
	}
	else {
		printf("��� �� ������� �����, ���� ���� ����� %d ���.", change);
	}
}

main()
{
	task1();
}