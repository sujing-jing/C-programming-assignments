/*
File: Practice
Name: Seo-jin Jeon
Student identification number: 2021440120
Class: C프로그래밍 04분반
Date: 2021/04/20
Revision:
	0.0: by Seo-jin Jeon
Others: 공부나 해라 이것아..!!!!
*/

#include <stdio.h>
#include <stdlib.h>
int sosua(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num%i == 0) break;
	}
	if (i == num)
		return 1;
	else
		return 0;
}

int main(void)
{
	int count = 0, sosu = 2, j;
	printf("구할려고 하는 소수의 갯수 : ");
	scanf_s("%d", &j);
	while (count < j)
	{
		if (sosua(sosu) == 1)
		{
			count++;
			printf("%d ", sosu);
		}
		sosu++;
	}
	return 0;
}