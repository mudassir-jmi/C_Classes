#include<stdio.h>

// bitwise  &,|,~,^,>>,<<
 
 void main(){
 	int a = 2>1 , b = 1>3, AND,OR,NOT,XOR;
 	int x = 20 > 30;
 	int c = 30, d = 20;
 	
 	int rshift;
 	rshift = 106 >> 2;
 	
 	int lshift;
 	lshift=106<< 2;
 	
 	AND = a && b;
 	printf("AND is %d\n", AND);
 	
 	OR = a | b;
 	printf("OR is %d\n", OR);
 	
 	NOT= !x;	
 	
 	printf("NOT is %d\n", NOT);
 	
 	XOR= c^x;
 	printf("XOR is %d\n", XOR);
 	
 	printf("Right Shift is : %d\n", rshift);
 	printf("left Shift is : %d", lshift);
  }
  
