/*
File: 중간고사 풀이 2번
Name: Seo-jin Jeon
Student identification number: 2021440120
Class: 04분반
Date: 2021.05.04
Revision:
	0.0: by Seo-jin Jeon
*/

#include <stdio.h>

int mySum(int N)
{
	int k = 0;
	int sum = 0;
	do
	{
		sum = sum + ((4 * (k * k)) + 1);
		k += 1;
	} while (k <= N);
	return sum;
}

int main()
{
	int N, S;
	scanf_s("%d", &N);
	N = mySum(N);
	printf("%d", N);
}
