#ifndef _API_H_
#define _API_H_

typedef struct DATASTRUCTURE {
    void *ds;
    void *(*init)();
    void (*ekle)();
    void* (*find)();
    void (*max)();
} data_st;

typedef enum {linkedlist, bst} dtype;

data_st* new(dtype t);
int ekle(data_st* s, int k);
void dsmax(data_st* s);
int find(data_st* s, int k);

#endif // _API_H_

