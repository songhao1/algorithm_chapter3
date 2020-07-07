#define _CRT_SECURE_NO_WARNINGS

//#include<cstdio>
//
////PAT B1001
//int main() {
//	int n, count = 0;
//	scanf("%d", &n);
//	while (n != 1) {
//		if (n % 2 == 0) n = n / 2;
//		else n = (3 * n + 1) / 2;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<cstdio>
//
//const int maxn = 100001;
//int school[maxn] = { 0 };
//
////PAT B1032
//int main() {
//	int n, schID, score;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &schID, &score);
//		school[schID] = school[schID] + score;
//	}
//	int k = 1, MAX = -1;
//	for (int i = 1; i <= n; i++) {
//		if (school[i] > MAX) {
//			k = i;
//			MAX = school[i];
//		}
//	}
//	printf("%d %d", k, MAX);
//	return 0;
//}


//#include<cstdio>
//
////PAT B1036
//
//int main() {
//	int n;
//	char c;
//	scanf("%d %c", &n, &c);
//
//	int row;
//
//	if (n % 2 == 0) row = n / 2;
//	else row = (n + 1) / 2;
//
//	for (int i = 0; i < row; i++) {
//		if (i == 0) {
//			for (int j = 0; j < n; j++) printf("%c", c);
//			printf("\n");
//		}
//		else if (i == row - 1)
//			for (int j = 0; j < n; j++) printf("%c", c);
//		else {
//			printf("%c", c);
//			for (int i = 0; i < n - 2; i++)
//				printf(" ");
//			printf("%c\n", c);
//		}
//	}
//	return 0;
//}
