/*
File: 중간고사 풀이 3번
Name: Seo-jin Jeon
Student identification number: 2021440120
Class: 04분반
Date: 2021.05.04
Revision:
	0.0: by Seo-jin Jeon
*/

#include <stdio.h>

int problem1()
{
	int i = 2, j = 4;
	j += --i;
	printf("i=%d, j=%d\n", i, j);

	return 0;
}

int problem2()
{
	int i = 3, j = 5;
	j = +j - i--;
	printf("i=%d, j=%d\n", i, j);

	return 0;
}

int problem3()
{
	int i = 4, j = 2;
	j = i++ + j;
	printf("i=%d, j=%d\n", i, j);

	return 0;
}

int main()
{
	problem1();
	problem2();
	problem3();
}
