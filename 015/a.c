int func0(void *a, void *b, char type){
	int r=0;
	switch(type){
		case 0:
			r=*(int*)a<*(int*)b;
		case 1:
			r=*(float*)a<*(float*)b;
	}
	return r;
}

