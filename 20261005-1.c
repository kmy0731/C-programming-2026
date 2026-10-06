#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//학년 출력하는 코드 과제 if else if문
exerc1() {
	int grade = 0;
	printf("학년을 입력하세요: ");
	scanf("%d", &grade);

	if (grade == 1) {
		printf("1학년입니다. \n");
	}
	else if (grade == 2) {
		printf("2학년입니다. \n");
	}
	else if (grade == 3) {
		printf("3학년입니다. \n");
	}
	else if (grade == 4) {
		printf("4학년입니다. \n");
	}
}

//학년 출력하는 코드 과제 switch case문
exerc2()
{
	int grade = 0;
	printf("학년을 입력하세요: ");
	scanf("%d", &grade);

	switch (grade) {
	case 1:
		printf("1학년입니다. \n");
		break;
	case 2:
		printf("2학년입니다. \n");
		break;
	case 3:
		printf("3학년입니다. \n");
		break;
	case 4:
		printf("4학년입니다. \n");
		break;
	}
}

//가위바위보
exerc3() {
	int player1, player2;
	printf("가위는 1, 바위는 2, 보는 3으로 1~3까지의 수를 입력해주세요\n");
	printf("player1: ");
	scanf("%d", &player1);
	printf("plyer2: ");
	scanf("%d", &player2);

	if (player1 == player2) {
		printf("tie \n");
	}
	else {
		switch (player1) {
		case 1:
			if (player2 == 2) printf("AI wins \n");
			else printf("player1 wins \n");
			break;
		case 2:
			if (player2 == 3) printf("AI wins \n");
			else printf("player1 wins \n");
			break;
		case 3:
			if (player2 == 1) printf("AI wins \n");
			else printf("player1 wins \n");
			break;
		}
	}

}

//윤년 판단문
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

//월일 및 윤년 판단 switch case 문
exerc4() {
	int month, days;
	printf("월 입력(1~12): ");
	scanf("%d", &month);
	if (month >= 1 && month <= 12) {
		int year;
		switch (month) {
		case 2:
			printf("년도를 입력하세요: ");
			scanf("%d", &year);
			if (isleafyear(year) == 1) days = 29;
			else days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
		}
		printf("%d월은 %d일까지 있습니다.", month, days);
	}
	else {
		printf("1부터 12사이의 값을 입력하세요.");
	}
}

//do while문 점수채점
exerc5() {
	int score = 0;
	
	do {
		printf("input score: ");
		scanf("%d", &score);
		if (score <= 80) printf("%d점 점수부족, 복습한다.\n", score);
		else printf("%d 점수충족, 수고했다.\n", score);
	} while (score <= 80);
}

//for문을 이용한 반 평균점수
exerc6() {
	int students;
	int sum = 0;
	double avg = 0.0;
	int score = 0;
	printf("학생 수: ");
	scanf("%d", &students);

	for (int i = 0; i < students; i++) {
		printf("score: ");
		scanf("%d", &score);
		sum += score;
	}

	avg = sum / (double)students;
	printf("avg = %.1lf", avg);

}

int main() {

	//학년 출력하는 코드 과제 if else if문
	//exerc1();

	//학년 출력하는 코드 과제 switch case문
	//exerc2();

	//가위바위보
	//exerc3();

	//월일 및 윤년 판단 switch case 문
	//exerc4();

	//do while문 점수채점
	//exerc5();

	//for문을 이용한 반 평균점수
	//exerc6();

	return 0;
}