#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_SECURE_NO_WARNINGS

struct patterns
{
	int size;
	int A[10];
	int B[10];
	int C[10];
	int D[10];
	int E[10];
	int F[10];
	int G[10];
	int H[10];
	int I[10];
	int J[10];
};
struct patterns pattern1 ={
	.size = 6,
	.A = { 0,15,10,9,8,0 },
	.B = { 17, 0, 0, 0, 0, 6 },
	.C = { 18, 0, 12, 3, 0, 1 },
	.D = { 19, 0, 25, 26, 0, 30 },
	.E = { 20, 0, 0, 0, 0, 31 },
	.F = { 0, 22, 35, 34, 33, 0 }
};
struct patterns pattern2 = {
	.size = 6,
	.A = { 0,15,10,9,8,12 },
	.B = { 17, 0, 0, 0, 0, 6 },
	.C = { 18, 0, 12, 3, 0, 1 },
	.D = { 19, 0, 25, 26, 0, 30 },
	.E = { 20, 0, 0, 0, 0, 31 },
	.F = { 0, 22, 35, 34, 33, 0 }
};



void pitch()
{
	struct patterns	*pat_use;
	pat_use = &pattern2;
	char letters[] = "ABCDEFGHIJK";
	int *size = &(pat_use->size), endbl = *size * 5 + 1;
	printf("%4c", ' ');
	for (int cell = 0; cell < *size; cell++) printf("%3c  ", letters[cell]);
	printf("\n");
	for (int step = 0; step < *size; step++)
	{
		lines(endbl);
		cells(*size, step, pat_use);
	}
	lines(endbl);
}
float lines(int endbl)
{
	for (int line = 0; line < endbl; line++)
	{
		if (line == 0) printf("%3c", ' ');
		printf("-");
	}
	printf("\n");
}
float cells(int size, int step, struct pattern *pat)
{
	int* cl_st, temp=&pat;
	//printf("%d", temp);
	for (int cel_k = 0; cel_k <= size; cel_k++)
	{
		switch (step)
		{
		case 0:
			cl_st = *(pattern1.A + cel_k);
			break;
		case 1:
			cl_st = *(pattern1.B + cel_k);
			break;
		case 2:
			cl_st = *(pattern1.C + cel_k);
			break;
		case 3:
			cl_st = *(pattern1.D + cel_k);
			break;
		case 4:
			cl_st = *(pattern1.E + cel_k);
			break;
		case 5:
			cl_st = *(pattern1.F + cel_k);
			break;
		case 6:
			cl_st = *(pattern1.G + cel_k);
			break;
		case 7:
			cl_st = *(pattern1.H + cel_k);
			break;
		case 8:
			cl_st = *(pattern1.I + cel_k);
			break;
		case 9:
			cl_st = *(pattern1.J + cel_k);
			break;
		default:
			cl_st = 404;
			break;
		}
		if (cel_k == 0) printf("%2d ", step + 1);
		if (cl_st != 0) printf("|%3d ", cl_st);
		else printf("|%3c ", ' ');
	}
	printf("\n");
}

void main()
{
	setlocale(LC_ALL, "ru");
	pitch();
}