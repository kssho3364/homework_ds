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
		printf("\n�̸��� �Է��ϼ��� : ");
		scanf("%s", i1[a].name);
		printf("\n���̸� �Է��ϼ��� : ");
		scanf("%d", &i1[a].age);
	}
	printf("\n����� ����");
	for (a = 0; a < 5; a++) {
		printf("\n�̸� : %s", i1[a].name);
		printf("\n���� : %d", i1[a].age);
	}
	for (a = 0; a <= 5; a++) {
		if (b > i1[a].age) {
			b = i1[a].age;
		}
	}
	for (a = 0; a < 5; a++) {
		if (i1[a].age == b) {
			printf("\n���̰� ���� ������ �̸��� %s", i1[a].name);
		}
	}
	printf(" ���̴� %d�� �Դϴ�.", b);
}