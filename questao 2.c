#include <stdio.h>
int main(){
    int n[15], i , ma, me;
printf("Digite 15 numeros inteiros:\n");
for(i=0;i<15;i++){
    scanf("%d", &n[i]);
}
ma = me = n[0];
for(i=1;i<15;i++){
    if(n[i] > ma)
        ma = n[i];
    if(n[i] < me)
        me = n[i];
}
printf("O maior numero e %d\n", ma);
printf("O menor numero e %d\n", me);
    return 0;
}