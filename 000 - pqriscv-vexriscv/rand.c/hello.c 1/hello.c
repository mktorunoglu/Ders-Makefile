#include "hal.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int randombytes(uint8_t *x, size_t xlen);

static void yazdir(const int t){
	int8_t s[32];
	snprintf(s, 32, "\n%d\n", t);
	hal_send_str(s);
}

static int tusbasildi(uint8_t tus){
	return (tus&1);
}

static int tusbirak(uint8_t tus){
	return 1^(tus&1);
}

static int artir(int t){
	return t+1;
}

int main(void){
	hal_setup(CLOCK_FAST);
	
	uint8_t tus;
	int t = 0;
	
	while(1){
		randombytes(&tus,1);
		int flag = tusbasildi(tus);
		
		while(flag){
			randombytes(&tus,1);
			
			if(tusbirak(tus)){
				artir(t);
				flag = 0;
			}
		}
		yazdir(t);
	}
	
	while(1)
	return 0;
}