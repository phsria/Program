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

	printf("ù ��° ���� �Է�:");
	scanf_s("%d", &a);

	printf("\n");

	printf("�� ��° ���� �Է�:");
	scanf_s("%d", &b);

	sum(a, b);

	printf("%d �� %d ������ Ȧ���� ���� : %d", a, b, ans);

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

	printf("ù ��° ���� �Է�:");
	scanf_s("%d", &a);

	printf("\n");

	printf("�� ��° ���� �Է�:");
	scanf_s("%d", &b);

	printf("\n");

	sum(a, b);

	printf("%d �� %d ������ Ȧ���� ���� : %d", a, b, ans);

	return 0;

}
