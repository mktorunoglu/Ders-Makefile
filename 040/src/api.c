#include <stdlib.h>
#include <stdio.h>
#include "api.h"
#include "bst.h"
#include "llist.h"

data_st* new(dtype t){
    data_st* s;
    switch(t){
        case linkedlist:
            s = (data_st*)llnew();
            break;
        case bst:
            s = (data_st*)bstnew();
            break;
        default:
            s = NULL;
    }
    return s;
}

int ekle(data_st* s, int k){
    if(s->ds == NULL)
        s->ds = s->init(k);
    else if(find(s, k))
        return 1;
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

