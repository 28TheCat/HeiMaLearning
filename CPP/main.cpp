#include <stdio.h>

typedef struct {
    float realpart;//实部
    float  imagpart;//虚部

}Complex; //带有实部和虚部的复数对象

void assign(Complex *A,float real,float imag);
void add(Complex *A,Complex B,Complex C);
void minus(Complex *A,float real,float imag);
void multiply(Complex *A,float real,float imag);
void divide(Complex *A,float real,float imag);

int main(){

}
void assign(Complex *A,float real,float imag){
    A->realpart=real;
    A->imagpart=imag;
};
void add(Complex *A,Complex B,Complex C){
    A->realpart=B.realpart+C.realpart;
    A->imagpart=B.imagpart+C.imagpart;
};

void minus(Complex *A,float real,float imag);
void multiply(Complex *A,float real,float imag);
void divide(Complex *A,float real,float imag);