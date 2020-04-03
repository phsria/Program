/*
#include <stdio.h>

int a = 0;
int b = 0;
void ans = 0;

int sum(int a, int b) {

	if (a < b) {

		while (a < (b-1)) {

			if ((a % 2) != 0) {
				a++;
			}

			else {
				a++;
				ans += a;
			}
		}
	}

	else {

		while (b < (a-1)) {

			if ((b % 2) != 0) {
				b++;
			}

			else {
				b++;
				ans += b;
			}
		}
	}

	return ans;
}


int main() {

	printf("첫 번째 숫자 입력:");
	scanf_s("%d", &a);

	printf("\n");

	printf("두 번째 숫자 입력:");
	scanf_s("%d", &b);

	sum(a, b);

	printf("%d 와 %d 사이의 홀수의 총합 : %d", a, b, ans);

	return 0;
}
*/

#include <stdio.h>

int a = 0;
int b = 0;
int ans = 0;

void sum(int a, int b) {

	if (a < b) {

		while (a < (b - 1)) {

			if ((a % 2) != 0) {
				a++;
			}

			else {
				a++;
				ans += a;
			}
		}
	}

	else {

		while (b < (a - 1)) {

			if ((b % 2) != 0) {
				b++;
			}

			else {
				b++;
				ans += b;
			}
		}
	}
}


int main() {

	printf("첫 번째 숫자 입력:");
	scanf_s("%d", &a);

	printf("\n");

	printf("두 번째 숫자 입력:");
	scanf_s("%d", &b);

	printf("\n");

	sum(a, b);

	printf("%d 와 %d 사이의 홀수의 총합 : %d", a, b, ans);

	return 0;

}
