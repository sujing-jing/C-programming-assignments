/*
File: 중간고사 풀이 4번
Name: Seo-jin Jeon
Student identification number: 2021440120
Class: 04분반
Date: 2021.05.04
Revision:
	0.0: by Seo-jin Jeon
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	while (i < 5)
	{
		sum += i;
		i += 2;
	}
	printf("%d, %d\n", i, sum);

	char ch = 'y', x;
	switch (ch) {
	case '1': case '2':
		x = 0;
		break;
	case 'x': case 'y':
		x = 1;
		break;
	default:
		x = 2;
		break;
	}
	printf("%c, %d\n", ch, x);
}
