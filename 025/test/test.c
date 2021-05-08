#include <stdio.h>
#include "a.h"
#include "b.h"

typedef struct onda {
	float a;
	float b;
	int (*karsilastir)(void*,void*,char);
} ondalik[1];

typedef struct tam {
	int a;
	int b;
	int (*karsilastir)(void*,void*,char);
} tamsayi[1];

#define type(X, tip) _Generic((X), \
	tip: 1, \
	default: 0 \
)

void print_max(ondalik f){
	if (f->karsilastir((void*)&f->a,(void*)&f->b,1))
		printf("b: %f\n",f->b);
	else
		printf("a: %f\n",f->a);
}

void pmax(void (*func)(), ondalik f){
	func(f);
}

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
	
	printf("Class örnek\n");
	ondalik f;
	tamsayi t;
	f->a=1.1;
	f->b=1.2;
	f->karsilastir=func0;
	printf("%d\n",f->karsilastir((void*)&f->a,(void*)&f->b,1));
	print_max(f);
	pmax(print_max,f);
	t->a=3;
	t->b=2;
	t->karsilastir=func1;
	printf("%d\n",t->karsilastir((void*)&t->a,(void*)&t->b,0));
	
	printf("clt çağrısı\n");
	printf("%d\n",clt(a,b));
	printf("%d\n",clt(af,bf));
	
	printf("A: %d, a: %d\n", 32 | 'A','a');
	char ac='A';
	char bc='B';
	printf("%d\n",func0((void*)&ac,(void*)&bc,2));
	
	printf("tip: %d\n", type(a, int));
	printf("tip: %d\n", type(af, float));
	
	return 0;
}

