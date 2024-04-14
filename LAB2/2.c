#include <stdio.h>

int main(){

int n;
int k=1;
int m=1;

scanf("%d", &n);

for(int i=1; i<=n; i++){
for(int j=2; j<i-1; j++){
if(i%j==0){k=0;}
}
if(k==1){
printf("%d ", i);
m=m*i;
}
k=1;
}
printf("%d ", m);

return 0;
}
