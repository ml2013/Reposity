/*************************************************************************
    > File Name: 1.c
    > Author: alex
    > Mail: malong2006@163.com 
    > Created Time: 2013年09月23日 星期一 13时47分56秒
 ************************************************************************/

#include<stdio.h>
typedef struct a
{
	int *b;
}a;
int main()
{
	a aa;
	int key=sizeof(*(&aa));
	printf("%d",key);
}
