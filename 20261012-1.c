#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

// 유효한 점수 세 개 수정본
exerc() {
	int score1, score2, score3;
	double avg = 0;
	int i = 0;
	for (i; i < 3; i++) {
		printf("0~100점 사이의 점수만 입력하십시오: ");
		scanf("%d", &score3);
		if (score3 >= 0 && score3 <= 100) {
			if (i == 0) score1 = score3;
			if (i == 1) score2 = score3;
		}
		else {
			if (score3 == -1) {
				break;
			}
			else {
				printf("0~100점 사이의 점수를 입력하시 않았습니다.\n");
				if (i == 0) score1 = score3;
				if (i == 1) score2 = score3;
			}
		}
	}
	int count = 0;
	if (score3 == -1) {
		if (i == 0) printf("입력한 점수가 없습니다.");
		if (i == 1) {
			if (score1 >= 0 && score1 <= 100) {
				avg = (double)score1;
				printf("제외 없음 -> 1개, 평균 %.2lf", avg);
			}
			else {
				printf("%d은 제외 -> 0개, 평균없음", score1);
			}
		}
		if (i == 2) {
			if (score1 >= 0 && score1 <= 100) {
				avg += (double)score1;
				count++;
			}
			else printf("%d ", score1);
			if (score2 >= 0 && score2 <= 100) {
				avg += (double)score2;
				count++;
			}
			else printf("%d ", score2);
			if (count != 2) {
				if (count == 1) {
					printf("은 제외 -> 1개, 평균 %.2lf", avg);
				}
				if (count == 0) {
					printf("은 제외 -> 0개, 평균 없음");
				}
			}
			else {
				printf("제외 없음 -> 2개, 평균 % .2lf", avg);
			}
		}
	}
	else {
		if (score1 >= 0 && score1 <= 100) {
			avg += (double)score1;
			count++;
		}
		else printf("%d ", score1);
		if (score2 >= 0 && score2 <= 100) {
			avg += (double)score2;
			count++;
		}
		else printf("%d ", score2);
		if (score3 >= 0 && score3 <= 100) {
			avg += (double)score3;
			count++;
		}
		else printf("%d ", score3);
		avg /= count;

		if (count != 3) {
			if (count == 2) {
				printf("은 제외 -> 2개, 평균 %.2lf", avg);
			}
			if (count == 1) {
				printf("은 제외 -> 1개, 평균 %.2lf", avg);
			}
			if (count == 0) {
				printf("은 제외 -> 0개, 평균 없음");
			}
		}
		else {
			printf("제외 없음 -> 3개, 평균 % .2lf", avg);
		}
	}
}

// 유효한 점수 세 개
exerc1() {
	int score1, score2, score3;
	double avg = 0;
	int i = 0;
	for (i; i < 3; i++) {
		printf("0~100점 사이의 점수만 입력하십시오: ");
		scanf("%d", &score3);
		if (score3 >= 0 && score3 <= 100) {
			if (i == 0) score1 = score3;
			if (i == 1) score2 = score3;
		}
		else {
			if (score3 == -1) {
				break;
			}
			else {
				printf("0~100점 사이의 점수를 입력하시 않았습니다.\n");
				if (i == 0) score1 = score3;
				if (i == 1) score2 = score3;
			}
		}
	}
	if (score3 == -1) {
		if (i == 0) {
			printf("입력한 점수가 없습니다.");
		}
		if (i == 1) {
			if (score1 >= 0 && score1 <= 100) {
				avg = (double)score1;
				printf("제외 없음 -> 1개, 평균 %.2lf", avg);
			}
			else {
				printf("%d은 제외 -> 0개, 평균없음", score1);
			}
		}
		if (i == 2) {
			if (score1 >= 0 && score1 <= 100) {
				if (score2 >= 0 && score2 <= 100) {
					//12
					avg = score1 + (double)score2;
					avg /= 2;
					printf("제외 없음 -> 2개, 평균 %.2lf", avg);
				}
				else {
					//1
					avg = (double)score1;
					printf("%d은 제외 -> 1개, 평균 %.2lf", score2, avg);
				}
			}
			else if (score2 >= 0 && score2 <= 100) {
				//2
				avg = (double)score2;
				printf("%d은 제외 -> 1개, 평균 %.2lf", score1, avg);
			}
			else {
				printf("%d, %d은 제외 -> 0개, 평균없음", score1, score2);
			}
		}
	}
	else {
		if (score1 >= 0 && score1 <= 100) {
			if (score2 >= 0 && score2 <= 100) {
				if (score3 >= 0 && score3 <= 100) {
					//123
					avg = score1 + score2 + (double)score3;
					avg /= 3;
					printf("제외 없음 -> 3개, 평균 %.2lf", avg);
				}
				else {
					//12
					avg = score1 + (double)score2;
					avg /= 2;
					printf("%d은 제외 -> 2개, 평균 %.2lf", score3, avg);
				}
			}
			else if (score3 >= 0 && score3 <= 100) {
				//13
				avg = score1 + (double)score3;
				avg /= 2;
				printf("%d은 제외 -> 2개, 평균 %.2lf", score2, avg);
			} 
			else {
				//1
				avg = (double)score1;
				printf("%d, %d은 제외 -> 1개, 평균 %.2lf", score2, score3, avg);
			}
		}
		else if (score2 >= 0 && score2 <= 100) {
			if (score3 >= 0 && score3 <= 100) {
				//23
				avg = score2 + (double)score3;
				avg /= 2;
				printf("%d은 제외 -> 2개, 평균 %.2lf", score1, avg);
			} 
			else {
				//2
				avg = (double)score2;
				printf("%d, %d은 제외 -> 1개, 평균 %.2lf", score1, score3, avg);
			}
		}
		else if (score3 >= 0 && score3 <= 100){
			//3
			avg = (double)score3;
			printf("%d, %d은 제외 -> 1개, 평균 %.2lf", score1, score2, avg);
		}
		else {
			printf("%d, %d, %d은 제외 -> 0개, 평균 없음", score1, score2, score3);
		}
	}

}

// 같은 숫자 세 번 연속
exerc2() {
	int num = 0;
	int check = 0;
	int count = 1;
	printf("1~9 사이 정수를 입력하시오: ");
	scanf("%d", &num);
	if (num > 0 && num < 10) check = num;
	else printf("1~9 사이의 정수만 입력하십시오.\n");

	for (int i = 0; i < 3; i++) {
		printf("1~9 사이 정수를 입력하시오: ");
		scanf("%d", &num);
		if (num > 0 && num < 10) {
			if (num == check) {}
			else {
				check = num;
				i = 0;
			}
		}
		else {
			printf("1~9 사이의 정수만 입력하십시오.\n");
			i = 0;
		}
		count += 1;
	}
	printf("숫자 %d가 3번 연속 -> 전체 %d회", check, count);
}

// 속이 빈 정사각형
exerc3() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

int main() {
	// 유효한 점수 세 개 수정본
	//exerc();

	// 유효한 점수 세 개
	//exerc1();

	// 같은 숫자 세 번 연속
	//exerc2();

	// 속이 빈 정사각형
	//exerc3();

	return 0;
}