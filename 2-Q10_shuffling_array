#include<stdio.h>
#include<time.h>

void shuffle_data(char data[]);
void swap(char a, char b);

main() {
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int retry;

	do {
		puts("Suffling data...");
		shuffle_data(data);
		printf("Shuffled data is '%s'\n", data);
		puts("Wanna retry ? (1:retry, others:exit) : )");
		scanf_s("%d", &retry);
	} while (retry == 1);
}


void shuffle_data(char data[]) {
	srand(time(NULL));
	int i=0;
	int len=0;
	do {
		if (data[i++] != NULL) {
			len++;
		}
		else {
			break;
		}
	} while (1);

	for (i = 0; i < len; i++) {
		int random_place = rand() % len;
		swap(data+i, data+random_place);
	}
}

void swap(char* a, char* b) {
	char t = *a; *a = *b; *b = t;
}
