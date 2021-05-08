#if !defined (_A_H_)
#define _A_H_
#define N 100

int func0(int a);

#define func00(c,a,b) \
	do{ \
		(c)=(a)*(b); \
	}while(0)

#endif // _A_H_


