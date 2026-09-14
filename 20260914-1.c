#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int korean;
	int math;
	double average;

	scanf("%d", &korean);
	scanf("%d", &math);

	average = (korean + math) / 2.0;
	printf("Average: %.1f\n", average);

	return 0;
}