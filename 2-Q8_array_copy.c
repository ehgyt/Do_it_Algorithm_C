#include<stdio.h>
#define TRUE 1
#define FALSE 0
void arr_copy(char a[], const char data[], int reverse);


main() {

	const char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char copied_data[1000];
	arr_copy(copied_data, data, FALSE);
	printf("%s\n", copied_data);

}

void arr_copy(char copied_data[], const char data[], int reverse) {
	int i=0;
	int len = 0;

	do {
		if (data[i] == NULL)
			break;
		len++;
		i++;
	} while (1);

	if (reverse == FALSE){
		for (i = 0;; i++) {
			copied_data[i] = data[i];
			if (data[i] == NULL)
				break;
		}
	}
	else {
		copied_data[len] = data[len];
		for (i = 0;;) {
			copied_data[len - i - 1] = data[i];
			if (data[++i] == NULL)
				break;
		}
	}
	return 0;
}
