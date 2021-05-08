#include "hal.h"
#include <stdio.h>
#include <string.h>

int main(void) {
	hal_setup(CLOCK_FAST);
	
	int bolunen = 5;
	int bolen = 3;
	
    int bolum = bolunen / bolen;
	int kalan = bolunen % bolen;
	int kusurat = 0;
	int sayac = 0;
	
	while(kalan != 0 && sayac < 5){   // sayac < 5  ->  virgülden sonra 5 basamak yazılması için
		kusurat = (kusurat * 10) + (kalan * 10 / bolen);   // (kusurat * 10)  ->  virgülden sonra basamak kaydırmak için
		kalan = kalan * 10 % bolen;
		sayac++;
	}
	
	char buffer[20];
	sprintf(buffer, "%d / %d = %d,%d", bolunen, bolen, bolum, kusurat);
	
	hal_send_str(buffer);
	
	while (1);
	return 0;
}
