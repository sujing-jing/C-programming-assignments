/*
File: 숙제 3_1.cm를 inch로 바꾸기
Name: Seo-jin Jeon
Student identification number: 2021440120
Class: D
Date: April 4th, 2021
Revision:
	0.0: by Seo-jin Jeon
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cm;
	double inch;

	printf("바꾸고 싶은 cm길이를 입력하시오: ");
	scanf("%d", &cm);

	inch = cm / 2.54;

	printf("%dcm는 %.4finch입니다.\n", cm, inch);

	return 0;
}