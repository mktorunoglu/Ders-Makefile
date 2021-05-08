int func0(void *a, void *b, char type){
    switch(type){
        case 0:
            return (int)a<(int)b;
        case 1:
            return (float)a<(float)b;
    }
}

