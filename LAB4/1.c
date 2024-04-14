#include <stdio.h>
#include <stdio>


float suma(float a,float b){
return a+b;
}

float roznica(float a,float b){
return a-b;
}

float iloczyn(float a,float b){
return a*b;
}

float iloraz(float a,float b){
return a/b;
}

int main(void){
float a, b;
scanf("%f", &a);
scanf("%f", &b);
printf("%f\n", suma(a,b));
printf("%f\n", roznica(a,b));
printf("%f\n", iloczyn(a,b));
printf("%f\n", iloraz(a,b));

char str[10];
char z[10];
int l=0;

str=fgets(str,sizeof(str),stdin);

while(str[l]!='\0' && (isdigit(str[l] || str[l]='.'){
    z[l]=str[l];
    l++;
}
float a2=atof(a);
printf("%f\n", suma(a,b);
d = str[l];

while(str[l]!='\-' && (isdigit(str[l] || str[l]='.'){
    z[l]=str[l];
    l++;
}

switch()
{
    case +: suma(a,b);
    break;
    case -: roznica(a,b);
    break;
    case *: iloczyn(a,b);
    break;
    case /: iloraz(a,b);
    break;
}

