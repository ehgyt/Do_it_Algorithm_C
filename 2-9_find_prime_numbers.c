#include <stdio.h>

main() {
	unsigned int until, i, d, div_cnt = 0;
	unsigned int prime_cnt = 0;
	puts("Until what number you wanna find prime numbers? ");
	scanf_s("%d", &until);
	
	for (i = 2; i <= until; i++) {
		for (d = 2;; d++) {
			div_cnt++;
			if (i % d==0) {
				if (i == d) {
					prime_cnt++;
					printf("%dnd prime number : %d\n", prime_cnt, i);
				}
				break;
			}
		}
	}
	printf("div_times = %d\n", div_cnt);

}
