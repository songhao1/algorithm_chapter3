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
//	int z[31], num = 0;//z存放D进制的每一位
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
//	cin.getline(str, 90);//<<算法笔记>>中的gets(str)报错了
//
//	int len = strlen(str);
//	int r = 0, h = 0;//r为行,h为列
//	char ans[90][90];//ans[0]-ans[r]存放单词
//
//	for (int i = 0; i < len; i++) {
//		if (str[i] != ' ') {	//如果不是空格,则存放至ans[r][h],并令h++
//			ans[r][h++] = str[i];
//		}
//		else {	//如果是空格,说明一个单词结束,行r增加1,列h恢复至0
//			ans[r][h] = '\0';	//	末尾是结束符\0
//			r++;
//			h = 0;
//		}
//	}
//	ans[r][h] = '\0';//<<算法笔记>>中没有这一句,应该加上
//
//	for (int i = r; i >= 0; i--) {
//		printf("%s", ans[i]);
//		if (i > 0) printf(" ");
//	}
//
//	return 0;
//}