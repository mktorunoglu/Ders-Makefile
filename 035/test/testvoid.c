#include <stdio.h>
#include "a.h"

enum dtype{tamsayi, ondalik, harf};

int main(void){
	int a=3, b=4;
	float af=1.3, bf=1.4;
	char ac='c', bc='d';
	
	printf("3<4: %d\n", func0(&a, &b, tamsayi));
	printf("1.3<1.4: %d\n", func0(&af, &bf, ondalik));
	printf("c<d: %d\n\n", func0(&ac, &bc, harf));
	
	a=4, b=3;
	af=1.4, bf=1.3;
	ac='d', bc='c';
	printf("4<3: %d\n", func0(&a, &b, tamsayi));
	printf("1.4<1.3: %d\n", func0(&af, &bf, ondalik));
	printf("d<c: %d\n", func0(&ac, &bc, harf));
	
	return 0;
}

