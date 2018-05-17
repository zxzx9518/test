#include <iostream>
#include<stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int integerOne; // first number to be entered by user
	int integerTwo; // second number to be entered by user
	int integerThree; // variable in which integerThree will be stored
	printf("請輸入第一個數字"); //prompt 
	scanf("%d",&integerOne); //read an interger
	printf("請輸入第二個數字"); //prompt
	scanf("%d",&integerTwo); //read an interger
	integerThree=integerone+integertwo; //assign tatal to integerThree 
	printf("2數字加起來的結果為: %d",integerThree); //printf integerThree
	return 0;
}
