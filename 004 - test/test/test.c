#include <stdio.h>
#include "a.h"
#include "b.h"

int main(void){
	printf("%d\n", func0(func1(5)));
	return 0;
}

