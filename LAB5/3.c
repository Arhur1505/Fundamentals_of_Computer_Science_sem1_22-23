#include <stdio.h>

void swap(int *x, int *y);
void sortuj(int *x, int *y, int *z);

int main(){

int a, b, c;

scanf("%d %d %d", &a, &b, &c);
int *x, *y, *z;
x=&a;
y=&b;
z=&c;


sortuj(x, y, z);

printf("a=%d, b=%d, c=%d \n", a, b, c);


return 0;
}

void swap(int *x, int*y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}

void sortuj(int *x, int *y, int *z){
if(*x>*y) swap(x, y);
if(*x>*z) swap(x, z);
if(*y>*z) swap(y, z);
}
