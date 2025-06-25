// Online C compiler to run C program online
#include <stdio.h>

int fatorial(int nume); //exercicio 1
int natural(int numero); //exercicio 2
int fiboracci(int numero); //exercicio 3
int potencia(int numero,int elevado); //exercicio 4
int Contagem(int numero);  //exercicio 5
int digito(int numero); //exercicio 6
int Invertor(char str[],int posi); //exercicio 7
int ehPalindromo(const char *str, int inicio, int fim);//exercicio 8
int MDC(int a,int b); //exercicio 9
int multirec(int numero,int multi); //exercicio 10
int verificador (int vetor[], int pos, int comp); //exercicio 11
int Somaelemen(int ver[],int posi); //exercicio 12
int ehPrimo(int n, int divisor); //exercicio 13
void decimalParaBinario(int n); //exercicio 14
int numePar(int numero); //exercicio 15
int numeImpar(int numero); //exercicio 16
int ExpoRapi(int numero, int expoente); //exercicio 26

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

        //exercicio 6
        int digi = digito(123);
        printf("%d",digi);
    
        //exercicio 7
        char str[8] = {'F','u','l','a','n','o'};
        char IN=Invertor(str,5);

        //exercicio 8
        char str[100];
    
        printf("Digite uma string: ");
        fgets(str, sizeof(str), stdin);
    
        str[strcspn(str, "\n")] = '\0';
    
        if (ehPalindromo(str, 0, strlen(str) - 1))
            printf("A string é um palíndromo.\n");
        else
            printf("A string não é um palíndromo.\n");

        //exercicio 9
        int me= MDC(48,18);
        printf("%d",me);

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

        //exercicio 13
         int numero;
    
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);
    
        if (numero < 2) {
            printf("0\n"); // Números menores que 2 não são primos
        } else if (ehPrimo(numero, 2)) {
            printf("1\n"); // Primo
        } else {
            printf("0\n"); // Não primo
        }

        //exercicio 14
        int numero;

        printf("Digite um número decimal: ");
        scanf("%d", &numero);
    
        if (numero < 0) {
            printf("Número negativo não suportado.\n");
        } else if (numero == 0) {
            printf("0");
        } else {
            decimalParaBinario(numero);
        }
    
        printf("\n");
        

//exercicio 15
int nuPar = numePar(6);    
    
    //exercicio 16
    int nuImpa = numeImpar(7);

    //exercicio 26
    int ex=ExpoRapi(4,4);
    printf("%d",ex);

    
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

        //exercicio 9
        int MDC(int a,int b){
            if(b== 0){
                return a;
            }
          return MDC(b,a % b);
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

        //exercicio 13 
        int ehPrimo(int n, int divisor) {
            if (divisor > sqrt(n)) // Se já passou da raiz quadrada, é primo
                return 1;
        
            if (n % divisor == 0) // Encontrou divisor, não é primo
                return 0;
        
            return ehPrimo(n, divisor + 1); // Testa próximo divisor
        }

        //exercicio 14
        void decimalParaBinario(int n) {
        if (n == 0)
            return;
        
            // Chamada recursiva antes (para inverter a ordem)
            decimalParaBinario(n / 2);
        
            // Imprime o bit mais à direita
            printf("%d", n % 2);
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

        //exercicio 26
        int ExpoRapi(int numero, int expoente){
            if(numero <= 1 ||expoente == 0){
                return 1;
            }
            
            if(expoente == 1){
                return numero;
            }
    
            return numero * ExpoRapi(numero,expoente-1);
        }
