/*
File: ¼÷Á¦ 5_2.21¼¼±â À±³â Ã£±â
Name: Seo-jin Jeon
Student identification number: 2021440120
Class: D
Date: April 12th, 2021
Revision:
	0.0: by Seo-jin Jeon
*/

#include <stdio.h>

int main()
{
	int ly;
	for (ly = 2001; ly <= 2100; ly++)
	{
		if (ly % 4 == 0 && ly % 100 != 0)
			printf("%d\n", ly);
		else if (ly % 400 == 0)
			printf("%d\n", ly);
	}
	return 0;
}