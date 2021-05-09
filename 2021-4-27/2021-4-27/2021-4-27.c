#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0, j = 0, g = 0, c = 0,s = 0;
	for (i = 0; i <= 100; i++){
		for (j = 0; j <= 100; j++){
			for (g = 0; g <= 100; g+=3){
				c = i + j + g;
				s = 500 * i + 300 * j + 100 * g / 3;
				if (c == 100 && s == 10000)  
					printf("%d,%d,%d\n", i, j, g);
				else
					continue;
			}
		}
	}
	system("pause");
	return 0;
}