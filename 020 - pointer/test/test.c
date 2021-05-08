#include <stdio.h>
#include "a.h"
#include "b.h"

int main(void){
	int a=2, b=1;
	float af=1.1, bf=1.2;
	int (*fadresi[])(void*,void*,char) = {func0,func1}; ;
	
	printf("Fonksiyon çağrısı\n");
	printf("%d\n",func0((void*)&a,(void*)&b,0));
	printf("%d\n",func0((void*)&af,(void*)&bf,1));
	
	printf("Fonksiyona pointer çağrısı\n");
	printf("%d\n",(*fadresi[0])((void*)&a,(void*)&b,0));
	printf("%d\n",(*fadresi[0])((void*)&af,(void*)&bf,1));
	printf("%d\n",(*fadresi[1])((void*)&a,(void*)&b,0));
	
	printf("clt çağrısı\n");
	printf("%d\n",clt(a,b));
	printf("%d\n",clt(af,bf));
	
	return 0;
}

