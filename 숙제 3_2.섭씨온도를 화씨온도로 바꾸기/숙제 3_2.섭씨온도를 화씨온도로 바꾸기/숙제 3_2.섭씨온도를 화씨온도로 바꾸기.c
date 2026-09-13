/*
File: 숙제 3_2.섭씨온도를 화씨온도로 바꾸기
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
	float C, F;

	printf("바꾸고 싶은 섭씨 온도를 입력하시오: ");
	scanf("%f", &C);

	F = C*1.8 + 32;

	printf("%.2f℃는 %.2f℉입니다.\n", C, F);

	return 0;
}