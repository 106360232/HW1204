#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int dice1, dice2;
	int i, j;
	int t[13] = { 0 };
	srand(time(NULL));
	for (i = 0; i < 36000; i++) {
		dice1 = rand() % 6;
		dice2 = rand() % 6;
		t[dice1 + dice2]++;
	}
	printf("  ");
	printf("¦¸¼Æ:\n");
	for (i = 0; i < 11; i++)
		printf("%2d: %4d\n", i + 2, t[i]);

	printf("\n");
	system("pause");
	return 0;
}