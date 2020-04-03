#include <stdio.h>

struct student {

	char name[100];
	int kor, mat, eng, avg, rank;

};

int main() {

	int i = 0;
	int j = 0;
	int sum[] = { 0 };
	struct student arr[] = { 0 };


	for (i = 0; i < 3; i++) {

		printf("%d 번째학생 정보입력: 이름, 국어, 수학, 영어 >> ", (i + 1));
		scanf("%s %d %d %d", arr[i].name, &arr[i].kor, &arr[i].mat, &arr[i].eng);
		printf("\n");
	}

	for (i = 0; i < 3; i++) {

		sum[i] = arr[i].kor + arr[i].mat + arr[i].eng;
		arr[i].avg = sum[i] / 3;
		
	}

	for (i = 0; i < 3; i++) {

		arr[i].rank = 1;
		
		for (j = 0; j < 3; j++) {
			
			if (arr[i].avg < arr[j].avg) {
			
				arr[i].rank++;
			}
		}
		
	}

	printf("이름	국어	영어	수학	평균	성적순위\n");
	for (i = 0; i < 3; i++) {
		printf(" %s	 %d	 %d	 %d	 %d	   %d", arr[i].name, arr[i].kor, arr[i].eng, arr[i].mat, arr[i].avg, arr[i].rank);
		printf("\n");

	}

	return 0;
}
