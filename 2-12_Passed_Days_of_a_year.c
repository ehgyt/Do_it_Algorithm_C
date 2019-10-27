#include <stdio.h>

int days_in_month[2][12] = {
	{ 31,28,31,30,31,30,31,31,30,31,30,31 },
	{ 31,29,31,30,31,30,31,31,30,31,30,31 }
};

//윤년 체크
int isleap(int year);
int passdaysfor(int y, int m, int d);
int passdayswhile(int y, int m, int d);


void main() {
	int y, m, d;
	int days;
	int retry;
	do{	printf("년 : "); scanf_s("%d", &y);
		printf("월 : "); scanf_s("%d", &m);
		printf("일 : "); scanf_s("%d", &d);
		days = passdayswhile(y, m, d);
		printf("%d년의 %d일째 되는 날입니다.\n", y, days);
		printf("retry - 1 :"); scanf_s("%d", &retry);
	} while (retry == 1);
}


int isleap(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int passdaysfor(int y, int m, int d) {
	int i;
	int days = d;
	for (i = 1; i < m; i++) {
		days += days_in_month[isleap(y)][i - 1];
	}
	return days;
}

int passdayswhile(int y, int m, int d) {
	int i=1;
	int days = d;
	while (i != m) {
		days += days_in_month[isleap(y)][i - 1];
		i++;
	};
	return days;
}
