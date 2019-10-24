#include <stdio.h>

int card_convr(unsigned x, int n, char d[]);

void main() {
	int i;
	unsigned int decimal_num;
	int cd;
	int dno;
	char changed_no[512];
	int retry;

	puts("10진수를 기수 변환합니다.");
	do {
		printf("변환할 음이 아닌 정수 : ");
		scanf_s("%d", &decimal_num);
		do {
			printf("몇 진수로 변환하시겠습니까(2-36) : ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd >36);
			dno = card_convr(decimal_num, cd, changed_no);
			for (i = dno - 1; i >= 0; i--) {
				printf("%c", changed_no[i]);
			}
			printf("입니다.\n");
			printf("다시 하려면 1을 입력하세요 : ");
			scanf_s("%d", &retry);
	} while (retry == 1);
}


int card_convr(unsigned x, int n, char d[]){
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;
	if(x==0){
		d[digits++] = dchar[0];
	}
	else {
		while (x) {
			d[digits++] = dchar[x % n];
			printf("%d | %10d … %d\n", n, x, x % n);
			printf(" + -----------\n");
			x /= n;
			if (x == 0) {
				puts("             0\n");
			}
		}
	}
	return digits;
}
