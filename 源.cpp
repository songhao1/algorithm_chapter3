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


//#include<cstdio>
//
////PAT B1022
//
//int main() {
//	int A, B, D;
//	scanf("%d %d %d", &A, &B, &D);
//
//	int sum = A + B;
//
//	int z[31], num = 0;//z���D���Ƶ�ÿһλ
//	do {
//		z[num++] = sum % D;
//		sum = sum / D;
//	} while (sum != 0);
//
//	for (int i = num - 1; i >= 0; i--) {
//		printf("%d", z[i]);
//	}
//
//	return 0;
//}


//#include<cstdio>
//#include<cstring>
//#include<iostream>
//
//using namespace std;
//
////PAT B1009
//
//int main() {
//	char str[90];
//	cin.getline(str, 90);//<<�㷨�ʼ�>>�е�gets(str)������
//
//	int len = strlen(str);
//	int r = 0, h = 0;//rΪ��,hΪ��
//	char ans[90][90];//ans[0]-ans[r]��ŵ���
//
//	for (int i = 0; i < len; i++) {
//		if (str[i] != ' ') {	//������ǿո�,������ans[r][h],����h++
//			ans[r][h++] = str[i];
//		}
//		else {	//����ǿո�,˵��һ�����ʽ���,��r����1,��h�ָ���0
//			ans[r][h] = '\0';	//	ĩβ�ǽ�����\0
//			r++;
//			h = 0;
//		}
//	}
//	ans[r][h] = '\0';//<<�㷨�ʼ�>>��û����һ��,Ӧ�ü���
//
//	for (int i = r; i >= 0; i--) {
//		printf("%s", ans[i]);
//		if (i > 0) printf(" ");
//	}
//
//	return 0;
//}