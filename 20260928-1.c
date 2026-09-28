#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//pdf 23페이지 과제
void exerc1(void) {
	int year = 0;
	printf("년도를 입력하세요: ");
	scanf("%d", &year);

	if (year % 100 == 0) {
		if (year % 400 == 0) {
			printf("윤년입니다.\n");
		}
		else {
			printf("평년입니다.\n");
		}
	}
	else {
		if (year % 4 == 0) {
			printf("윤년입니다.\n");
		}
		else {
			printf("평년입니다.\n");
		}
	}
}

// 세번째 강의 
int isleafyear(int year) {
	int isleaf = 0;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				isleaf = 1;
			}
		}
		else {
			isleaf = 1;
		}
	}
	return isleaf;
}

void exerc3(void) {
	int year, leafyear;

	printf("input year : ");
	scanf("%d", &year);

	
	if (isleafyear(year) == 1) printf("윤년입니다.\n");
	else printf("평년입니다.\n");
}

// 네번째 강의
void exerc5(void) {
	int player1, player2;

	printf("input player1: ");
	scanf("%d", &player1);
	printf("input player2: ");
	scanf("%d", &player2);

	if (player1 == player2)	printf("tie");
	else if (player1 == 1) {
		if (player2 == 2) printf("p2 wins");
		else printf("p1 wins");
	}
	else if (player1 == 2) {
		if (player2 == 3) printf("p2 wins");
		else printf("p1 wins");
	}
	else if (player1 == 3) {
		if (player2 == 1) printf("p2 wins");
		else printf("p1 wins");
	}
}

int main() {

	//pdf 23페이지 과제
	//exerc1();

	// 세번째 강의 
	//exerc3();

	// 네번째 강의
	//exerc5();

	return 0;
}