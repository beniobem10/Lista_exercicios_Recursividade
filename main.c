// Online C compiler to run C program online
#include <stdio.h>

int fatorial(int nume);

int main() {
    // Write C code here
    int re = fatorial(5);
    printf("%d", re);
    return 0;
}

int fatorial(int nume){
    if(nume <= 1){
        return 1;
    }
    return nume * fatorial(nume - 1) ;
}
