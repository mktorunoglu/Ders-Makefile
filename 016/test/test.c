#include <stdio.h>
#include "a.h"
#include "b.h"

int main(void){
	int a=1, b=2;
	float af=1.1, bf=1.2;
	
	printf("%d\n",func0((void*)&a,(void*)&b,0));
	printf("%d\n",func0((void*)&af,(void*)&bf,1));
	
	printf("%d\n",clt(a,b));
	printf("%d\n",clt(af,bf));
	
	return 0;
}

