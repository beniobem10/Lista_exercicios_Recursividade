// Online C compiler to run C program online
#include <stdio.h>

int fatorial(int nume);
int natural(int numero);

int main() {
    // Write C code here
    int re = fatorial(5);
    printf("%d", re);
    
     int ae = natural(3);
    printf("\n %d", ae);
    return 0;
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
