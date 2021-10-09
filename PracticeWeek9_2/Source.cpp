#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int x, y, sum;
	FILE* fp;
	fp = fopen("a.txt", "w");
	scanf("%d %d", &x, &y);
	fprintf(fp,"%d %d", x, y);
	fclose(fp);
	fp = fopen("b.txt", "w");
	sum = x + y;
	fprintf(fp, "%d", sum);
	fclose(fp);
	return 0;
}