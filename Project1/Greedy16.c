#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


typedef struct _grade {
	int a;		// 서류 심사 성적
	int b;		// 면접 성적
} grade;

int compare(const void* x, const void* y) {
	grade A = *(grade*)x;
	grade B = *(grade*)y;

	if (A.a > B.a)
		return 1;
	else if (A.a < B.a)
		return -1;
	else return 0;
}