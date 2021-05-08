#if !defined(_A_H_)
#define _A_H_
#define N 100

int func0(void* a, void* b, char t);

#define clt(a,b) a<b

#define func00(c,a,b) \
	do{ \
		(c)=(a)*(b); \
	}while(0)

#define printn(n,a) \
	for(int i=0; i<n; i++){\
		printf("%d\n",a);\
	}
	
#define concat(a,b) a ## b
#define CONCAT(a,b) concat(a,b)
#define str_a(a) #a
#define STR(a) str_a(a)

#endif // _A_H_


