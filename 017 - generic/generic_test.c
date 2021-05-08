#include <stdio.h>
#include <unistd.h>

typedef struct myint{
	int a;
} myint_t;

#define eklex(Y) _Generic((Y), \
	int: eklei, \
	float: eklef, \
	default: eklef \
	)

#define ekle(X,Y) _Generic((X), \
	myint_t: eklex(Y), \
	int: ekleii \
	)((X),(Y))
	
#define yazdir(X) _Generic((X), \
	int: pi, \
	short: ps, \
	char: pc, \
	float: pf, \
	double: pd, \
	struct myint: pst \
	)(X)
	
void pst(myint_t i){
	printf("%s(%d)\n", __func__, i.a);
}

void pi(int i){
	printf("%s(%d)\n", __func__, i);
}

void ps(short i){
	printf("%s(%d)\n", __func__, i);
}

void pc(char i){
	printf("%s(%d)\n", __func__, i);
}

void pf(float i){
	printf("%s(%f)\n", __func__, i);
}
void pd(double i){
	printf("%s(%f)\n", __func__, i);
}

void eklei(myint_t a, int b){
	a.a=b;
	yazdir(a);
}

void eklef(myint_t a, float b){
	a.a=(int)b;
	yazdir(a);
}

void ekleii(int a, int b){
	yazdir(a+b);
}

int main(void){
	myint_t a;
	a.a=5;
	int i=4;
	short s=2;
	char c=1;
	float f=1.1;
	double d=2.1;
	yazdir(a);
	yazdir(i);
	yazdir(s);
	yazdir(c);
	yazdir(f);
	yazdir(d);
	printf("Birden çok argüman\n");
	ekle(a,1);
	ekle(a,2.5);
	ekle(3,2);
	return 0;
}

