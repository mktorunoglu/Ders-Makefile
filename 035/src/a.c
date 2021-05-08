int func0(void *a, void *b, char type){
	int r=0;
	switch(type){
		case 0:
			r = *(int*)a<*(int*)b;
			break;
		case 1:
			r = *(float*)a<*(float*)b;
			break;
		case 2:
			r = (32 | *(char*)a)<(32 | *(char*)b);
	}
	return r;
}

