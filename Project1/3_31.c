//#define _CRT_SECURE_NO_WARNINGS
//#define MAX 1000
//#include<stdio.h>
//
//int main() {
//	FILE* fp, * newfp;
//
//	char str[MAX];
//	fp = fopen("C:\\Users\\YooByeongJu\\Desktop\\�ü��\\�����\\����\\a.txt", "r");
//	newfp = fopen("C:\\Users\\YooByeongJu\\Desktop\\�ü��\\�����\\����\\b.txt", "w");
//
//	if (fp == NULL) {
//		printf("���Ͽ���");
//		return 1;
//	}
//	int count;
//
//	while ((count = fread(str, sizeof(char), MAX, fp)) != 0) {
//		fwrite(str, sizeof(char), count, newfp);
//	}
//	fclose(fp);
//	fclose(newfp);
//
//	newfp= fopen("C:\\Users\\YooByeongJu\\Desktop\\�ü��\\�����\\����\\b.txt","r");
//
//	char buffer[MAX] = { 0, };
//
//	fread(buffer, 1, MAX, newfp); 
//	printf("%s", buffer);
//
//	fclose(newfp);
//}
