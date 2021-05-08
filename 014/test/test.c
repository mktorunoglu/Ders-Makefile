#include <stdio.h>
#include "a.h"
#include "b.h"

int main(void){
	int t;
	func00(t,1+2,func0(func1(M)));
	printf("%d\n",t);
	printf("printn;\n");
	printn(3,5);
	CONCAT(print,n)(3,1);
	return 0;
}

