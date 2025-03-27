// Online C compiler to run C program online
#include <stdio.h>

int fatorial(int nume); //exercicio 1
int natural(int numero); //exercicio 2
int fiboracci(int numero); //exercicio 3
int potencia(int numero,int elevado); //exercicio 4
int Contagem(int numero);  //exercicio 5
int digito(int numero); //exercicio 6
int Invertor(char str[],int posi); //exercicio 7
int multirec(int numero,int multi); //exercicio 10
int verificador (int vetor[], int pos, int comp); //exercicio 11
int Somaelemen(int ver[],int posi); //exercicio 12
int numePar(int numero); //exercicio 15
int numeImpar(int numero); //exercicio 16

int main() {
    //exercicio 1
    int re = fatorial(5);
    printf("%d", re);

        //exercicio 2
        int ae = natural(3);
        printf("\n %d", ae);

        //exercicio 3
        int fibo = fiboracci(6);
        printf("%d",fibo);
        
        //exercicio 4
        int ce = potencia(3,4);
        printf("%d",ce);

 //exercicio 5   
 int de = Contagem(10);

        //exercicio 7
        char str[8] = {'F','u','l','a','n','o'};
        char IN=Invertor(str,5);

        //exercicio 6
        int digi = digito(123);
        printf("%d",digi);

 //exercicio 10   
int mulRec=multirec(7,3);
printf("%d",mulRec);
    
        //exercicio 11
        int vetor[5] = {3,3,3,3,4};
        printf("%d\n", verificador(vetor, 4, 3));

        //exercicio 12
        int ver[5]= {31,1,38,5,1};

        int Somele = Somaelemen(ver,4);
        printf("%d", Somele);

//exercicio 15
int nuPar = numePar(6);    
    
    //exercicio 16
    int nuImpa = numeImpar(7);
        

    return 0;
}
//////////////////////////////////////////////////////////////////////////
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

        //exercicio 3
        int fiboracci(int numero){
            if(numero==0)return 0;
    
                if(numero==1){
                    return 1;
                }
            return fiboracci(numero- 1) + fiboracci(numero - 2);
        }
    
        //exercicio 4
        int potencia(int numero, int elevado){
            if(elevado<=0){
                return 1;
            }
        
        return numero * potencia(numero,elevado-1);
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

        //exercicio 6
        int digito(int numero){
            if(numero<=0) return 0;
            
            int salvo = salvo + (numero % 10 );
            return salvo + digito(numero /10);
        }
    
        //exercicio 7
        int Invertor(char str[],int posi){
            if(posi <= -1){
                return str[posi];
            }
        char sal = str[posi];
        printf("%c",sal);
    
        return Invertor(str, posi - 1);
        }

//exercicio 10
int multirec(int numero,int multi){
        if(numero<=0 || multi<=0){
            return 0;
        }
        if(multi<=0){
            return 0;
        }
    return numero + multirec(numero,multi-1);
}

        //exercicio 11
        int verificador(int vetor[], int pos, int comp){
            if(pos < 0) return 0;
            
            int salvo = vetor[pos];
        
            if( salvo == comp){
                return verificador(vetor, pos -1, comp) + 1;
            }
         return verificador(vetor, pos -1, comp);
        }
    

        //exercicio 12    
        int Somaelemen(int ver[],int posi){
            if(posi<0){
                return 0;
            }
    
            int salva = ver[posi];
            return salva + Somaelemen(ver,posi-1);
        }
//exercicio 15
int numePar(int numero){
    if(numero == 0){
        return 0;
    }
    if(numero % 2 == 0){
        printf("%d\n",numero);
    }
    
    return  numePar(numero - 2 );
}

        //exercicio 16
        int numeImpar(int numero){
            if(numero<=0){
                return 0;
            }
            
            if(numero % 2 == 1){
                printf("%d\n",numero);
            }
            return  numeImpar(numero - 2 );
        }
