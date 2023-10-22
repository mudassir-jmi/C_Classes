#include <stdio.h>
void main(){
	int a,b,sum, minas,multiply,divide,modleous;
	printf("enter value of a and b: ");
	scanf("%d %d",&a,&b);
	sum= a+b;
	minas=a-b;
	multiply=a*b;
	divide=a/b;
	modleous=a%b;
	 printf("after solving all result is : %d %d %d %d %d ", sum, minas, multiply, divide, modleous);
	}
