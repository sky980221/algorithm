#include <stdio.h>

int main()
{

	int a, b, c, i;
	int total;
	int arr[10] = { 0, };
	scanf("%d %d %d", &a, &b, &c);

	total = a * b * c;
	int num;

	while (total > 0) {
		num = total % 10;
		arr[num]++;
		total = total / 10;
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;

}