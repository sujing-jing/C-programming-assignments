/*
File: 숙제 2. 원화를 달러로 바꾸기
Name: Seo-jin Jeon
Student identification number: 2021440120
Class: D
Date: March 22nd, 2021
Revision:
	0.0: by Seo-jin Jeon
Others: 교수님 scanf 경고는 왜 뜨는 건가요?
		경고가 계속 떠서 include 위에 define 을 새로 넣었는데 이것 말고도 scanf_s를 쓰는 방법도 있다고 하더라구요.
		경고가 왜 뜨는 것이고 왜 define 문을 적으면 해결이 되는 건가요?
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float rate;
	float dollors;
	int won;

	printf("달러원 환율(1달러가 몇 원인가?)을 입력하시오: ");
	scanf("%f", &rate);

	printf("원화를 입력하시오: ");
	scanf("%d", &won);

	dollors = won / rate;

	printf("%d원은 %.2f달러입니다.\n", won, dollors);

	return 0;
}