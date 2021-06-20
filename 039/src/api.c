#include <stdlib.h>
#include <stdio.h>
#include "api.h"
#include "bst.h"
#include "llist.h"

data_st* new(dtype t){
    data_st* n;
    switch(t){
        case linkedlist:
            n = (data_st*)llnew();
            break;
        case bst:
            n = (data_st*)bstnew();
            break;
        default:
            n = NULL;
    }
    return n;
}

int ekle(data_st* s, int k){
    if(s->ds == NULL)
        s->ds = s->init(k);
    else
        s->ekle(s->ds, k);
    return 0;
}

void dsmax(data_st* s){
    return s->max(s->ds);
}

int find(data_st* s, int k){
    data_st* temp = s->find(s->ds, k);
    if(temp == NULL)
        return 0;
    else
        return 1;
}

