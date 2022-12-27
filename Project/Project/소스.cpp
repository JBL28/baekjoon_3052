#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int list1[11];
	int list2[11];
	for (int i = 1; i <= 10; i++) {
		scanf("%d", &list1[i]);
	}

	int boool = 0;
	int count = 0;
	for (int i = 1; i <= 10; i++) {
		boool = 0;
		for (int j = 1; j <= count; j++) {
			if (list1[i] % 42 == list2[j])
				boool = 1;
		}
		if (boool != 1) {
			count++;
			list2[count] = list1[i] % 42;
		}
	}
	printf("%d", count);
}