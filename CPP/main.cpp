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
    Complex *z1,*z2,z3,z4,z;
    float RealPart,ImagPart;
    assign(z1,8,6);
    assign(z2,4,3);
//    add(z1,z2,z3);
return 0;
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