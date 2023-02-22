#include <stdio.h>
int maths(int a, int b, int* sum, int* difference, float* division);

int main(){
int a = 4;
int b = 2;

int sum, difference;
float division;

maths(a, b, &sum, &difference, &division);

printf("sum:%d, difference:%d, division:%f\n", sum, difference, division);
return 0;
}

int maths(int a, int b, int* sum, int* difference, float* division){
*sum = a + b;
*difference = b - a;
*division = a / b;
return 0;
}
