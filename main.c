// Online C compiler to run C program online
#include <stdio.h>

int fatorial(int nume);
int natural(int numero);
int Contagem(int numero);

int main() {
    //exercicio 1
    int re = fatorial(5);
    printf("%d", re);

        //exercicio 2
         int ae = natural(3);
        printf("\n %d", ae);
        return 0;

 //exercicio 5   
 int de = Contagem(10);
}

//exercicio 1
int fatorial(int nume){
    if(nume <= 1){
        return 1;
    }
    return nume * fatorial(nume - 1) ;
}

//exercicio 2
int natural(int numero){
    if(numero <= 0){
        return 0;
    }
   
    return numero + natural(numero - 1); 
}

//exercicio 5
int Contagem(int numero){
    if(numero>0){
        printf("%d \n",numero);
    }
    if(numero<0){
        printf("acabou");
        return 0;
    }
    return Contagem(numero - 1);
}
