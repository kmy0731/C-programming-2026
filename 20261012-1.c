#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

// 유효한 점수 세 개 수정본
exerc00() {
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
exerc01() {
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
exerc02() {
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
exerc03() {
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

// 거듭제곱 구하기
exerc1() {
	int n, r, abs_r;
	double x = 1.0;
	printf("input n, r: ");
	scanf("%d %d", &n, &r);

	if (r < 0) abs_r = -r;
	else abs_r = r;

	for (int i = 0; i < abs_r; i++) {
		x *= (double)n;
	}
	if (r < 0) x = 1 / x;
	printf("%d의 %d승은 %lf입니다.", n, r, x);
}

// 팩토리얼 구하기
exerc2() {
	int n, result;
	result = 1;
	printf("input n: ");
	scanf("%d", &n);
	for (int i = n; i > 0; i--) result *= i;
	printf("%d factorial = %d입니다.", n, result);
}

//피보나치 수열(n번째 출현하는 수열의 숫자는?)
exerc3() {
	int n;
	int n1, n2, result;
	n1 = 0;
	n2 = 1;
	printf("input n: ");
	scanf("%d", &n);

	if (n == 0) result = n2;
	else if (n == 1) result = n1;
	else {
		for (int i = 2; i <= n; i++) {
			result = n1 + n2;
			n2 = n1;
			n1 = result;
		}
	}
	printf("%d 번째 숫자는 %d입니다.", n, result);
}

// break와 continue 차이 실습
exerc4() {
	int sum, score;
	double avg;
	int i = 0;
	while (1) {
		printf("input score: ");
		scanf("%d", &score);
		if (score == -1) continue;
		sum += score;
		i++;
		printf("run\n");
	}
	avg = sum / (double)i;
	printf("avg = %.2lf\n", avg);
}

// *출력 과제
exerc5() {
	char star = '*';
	int line = 0;
	printf("input line: ");
	scanf("%d", &line);
	for (int i = 0; i < line; i++) {
		int s_count = i * 2 + 1;
		for (int n = line - i - 1; n > 0; n--) {
			printf(" ");
		}
		for (int j = 0; j < s_count; j++) printf("%c", star);
		printf("\n");
	}
}

int main() {
	// 유효한 점수 세 개 수정본
	//exerc00();

	// 유효한 점수 세 개
	//exerc01();

	// 같은 숫자 세 번 연속
	//exerc02();

	// 속이 빈 정사각형
	//exerc03();

	// 거듭제곱 구하기
	//exerc1();
	
	// 팩토리얼 구하기
	//exerc2();

	//피보나치 수열(n번째 출현하는 수열의 숫자는?)
	//exerc3();

	// break와 continue 차이 실습
	//exerc4();

	// *출력 과제
	//exerc5();

	return 0;
}