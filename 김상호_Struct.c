#include <stdio.h>0
struct info {
	char name[20];
	int age;
};

void main() {
	struct info i1[5];
	int a = 0;
	int b = 100;
	for (a = 0; a < 5; a++) {
		printf("\n이름을 입력하세요 : ");
		scanf("%s", i1[a].name);
		printf("\n나이를 입력하세요 : ");
		scanf("%d", &i1[a].age);
	}
	printf("\n저장된 정보");
	for (a = 0; a < 5; a++) {
		printf("\n이름 : %s", i1[a].name);
		printf("\n나이 : %d", i1[a].age);
	}
	for (a = 0; a <= 5; a++) {
		if (b > i1[a].age) {
			b = i1[a].age;
		}
	}
	for (a = 0; a < 5; a++) {
		if (i1[a].age == b) {
			printf("\n나이가 제일 어린사람의 이름은 %s", i1[a].name);
		}
	}
	printf(" 나이는 %d세 입니다.", b);
}