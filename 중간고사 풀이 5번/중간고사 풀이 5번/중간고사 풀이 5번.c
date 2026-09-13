/*
File: 중간고사 풀이 5번
Name: Seo-jin Jeon
Student identification number: 2021440120
Class: 04분반
Date: 2021.05.04
Revision:
	0.0: by Seo-jin Jeon
*/

#include <stdio.h>

int dateInMonth(int month)
{
	int days = 0;
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		days = 28;
		break;
	}
	return days;
}

int main()
{
	int month1, month2, date1, date2, minus;
	printf("시작일: ");
	scanf_s("%d %d", &month1, &date1);
	printf("마지막일: ");
	scanf_s("%d %d", &month2, &date2);

	int i = month1 + 1;
	int sum = 0;

	while (i < month2)
	{
		sum = sum + dateInMonth(i);
		i += 1;
	}

	if (month1 == month2)
		minus = date2 - date1;

	else
		minus = (dateInMonth(month1) - date1) + date2;

	sum = sum + minus;

	printf("%d", sum);
}
