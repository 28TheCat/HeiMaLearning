#include<stdio.h>

#define MAXSIZE 100
typedef  struct {
    float coef;
    int expn;
}Polynomial;

typedef struct {
    Polynomial *elem;
    int length;
}Sqlist;

double Add(Sqlist &n1,Sqlist &n2){
    n1.elem->coef
}
