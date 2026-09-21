#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exercl1(void) {
	double inch, cm;
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm 입니다. \n", inch, cm);
}

void exercl2(void) {
	double F, C;
	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf도는 화씨 %lf도 입니다.", C, F);
}

double circle(double r) {
	return r * r * 3.14;
}

void exercl15(void) {
	int total = 7384;
	//scanf("계산할 초를 입력하세요: %d", &total);
	int sh = total / 60;
	int hours = sh / 60;
	int minutes = sh % 60;
	int seconds = total % 60;
	printf("%d시간 %d분 %d초", hours, minutes, seconds);
}

void exercl16(void) {
	int score = 75;
	//scanf("점수를 입력하세요: %d", &score);
	int attendance = 85;
	//scanf("출석률을 입력하세요: %d",&attendance);
	int passed = score >= 60 && attendance >= 80;
	if (passed > 0) {
		printf("합격");
	}
	else
	{
		printf("불합격");
	}
}

void exercl17(void) {
#define READ 0x01
#define WRITE 0x02
#define EXEC 0x04
	unsigned int permission = READ | WRITE;
	permission |= EXEC;
	printf("%d", permission);
}

void exercl18(void) {
	int years = 0;
	int yunyears = 0;
	scanf("%d", &years);

	yunyears = ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0);
	printf("%d\n", yunyears);
	int year1 = years % 4 == 0;
	int year2 = years % 100 != 0;
	int year3 = years % 400 == 0;

	printf("%d \n%d \n%d \n", year1, year2, year3);

}

void exercl19(void) {
	int amount;
	scanf("%d", &amount);

	int won10000 = amount / 10000;
	amount %= 10000;
	int won1000 = amount / 1000;
	amount %= 1000;
	int won100 = amount / 100;
	amount %= 100;
	int won10 = amount / 10;

	printf("10000:%d 1000:%d 100:%d 10:%d\n", won10000, won1000, won100, won10);
}

void exercl20(void) {
	//assignment은 너무 긴 것 같아 quest로 대체하였습니다.
	int midle, last, quest;
	printf("중간고사, 기말고사, 과제 순으로 입력하세요: ");
	scanf("%d %d %d", &midle, &last, &quest);
	double weighted_score = ((midle * 0.3) + (last * 0.4) + (quest * 0.3));
	printf("weighted_score = %.2lf", weighted_score);
}

void exercl21(void) {
	double kg, m;
	printf("키(m), 몸무게(kg) 순서로 입력하시오: ");
	scanf("%lf %lf", &m, &kg);
	double BMI = kg / (m *= m);
	printf("bmi = %.2lf", BMI);
}

int main() {
	//exercl1();
	//exercl2();
	
	//double r;
	//scanf("%lf", &r);
	//printf("반지름 %lf인 원의 넓이는 %lf입니다.", r, circle(r));
	
	//exercl15();
	//exercl16();
	//exercl17();
	//exercl18();
	//exercl19();
	//exercl20();
	//exercl21();

	return 0;
}