#incluide <studio.h> 
int main(){
    int i, vetor[10],soma;
    soma=0;
    for(i=0;i<10;i++)
 {
    printf ("digite um numero:");
    scanf("%d,&vetor[i]")
    soma = soma + vetor[i];
 }
 printf("A soma obtida foi:%d", soma);
 return 0;
}