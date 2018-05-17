#include <iostream>
#include<stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int integerone;
	int integertwo;
	int integerthree;
	printf("請輸入第一個數字");
	scanf("%d",&integerone);
	printf("請輸入第二個數字");
	scanf("%d",&integertwo);
	integerthree=integerone+integertwo;
	printf("2數字加起來的結果為: %d",integerthree);
	return 0;
}
