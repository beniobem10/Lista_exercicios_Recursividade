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
int buscaRecursiva(int arr[], int tamanho, int alvo);//exercicio 17
int comprimentoRecursivo(const char *str);//exercicio 18
void torreDeHanoi(int n, char origem, char auxiliar, char destino);//exercicio 19

void gerarPermutacoes(char str[], int inicio, int fim);
void trocarCaracteres(char *a, char *b); //exercicio20

void gerarCombinacoes(int arr[], int n, int k, int index, int data[], int i);//exercicio 21
void gerarSubconjuntos(int arr[], int n, int index, int subconjunto[], int tamanhoAtual);//exercicio 22

void mergeSort(int arr[], int inicio, int fim);
void merge(int arr[], int inicio, int meio, int fim);//exercicio 23

void quickSort(int arr[], int inicio, int fim);
int particionar(int arr[], int inicio, int fim);//exercicio 24


int buscaBinaria(int arr[], int inicio, int fim, int chave);//exercicio 25
int ExpoRapi(int numero, int expoente); //exercicio 26

void encontrarCaminhos(int x, int y, int x2, int y2, int caminho[MAX][2], int passo);
int contarCaminhos(int x1, int y1, int x2, int y2);//exercicio 27

void resolverNRainhas(int n);
void colocarRainha(int linha, int n, int *colunas, int *diag1, int *diag2, char tabuleiro[MAX][MAX]);
void imprimirTabuleiro(char tabuleiro[MAX][MAX], int n); //exercicio 28


int resolverLabirinto(int lab[MAX][MAX], char sol[MAX][MAX], int n, int m, int x, int y);
void imprimirSolucao(char sol[MAX][MAX], int n, int m);//exercicio 29
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void gerarParenteses(int abertos, int fechados, int n, char *sequencia, int pos);//exercicio 30


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

    //exercicio 17
     int vetor[] = {2, 4, 6, 8};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento;

    printf("Digite o elemento que deseja buscar: ");
    scanf("%d", &elemento);

    if (buscaRecursiva(vetor, tamanho, elemento))
        printf("1\n"); // Elemento encontrado
    else
        printf("0\n"); // Elemento não encontrado

    //exercicio 18
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o '\n' se estiver presente
    texto[strcspn(texto, "\n")] = '\0';

    int comprimento = comprimentoRecursivo(texto);
    printf("Comprimento da string: %d\n", comprimento);
    
    //exercicio 19
    int n;
    printf("Digite o número de discos: ");
    scanf("%d", &n);

    printf("Movimentos:\n");
    torreDeHanoi(n, 'A', 'B', 'C');


    //execicio 20
    char str[100];

    printf("Digite uma string: ");
    scanf("%s", str); 

    printf("Permutações:\n");
    gerarPermutacoes(str, 0, strlen(str) - 1);

    //exercicio 21
    int arr[] = {1, 2, 3};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    int data[k]; // Array temporário para armazenar a combinação atual

    printf("Combinações de tamanho %d:\n", k);
    gerarCombinacoes(arr, n, k, 0, data, 0);

    //exercicio 22
     int arr[] = {1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int subconjunto[n];  // vetor auxiliar para armazenar subconjunto atual

    printf("Subconjuntos:\n");
    gerarSubconjuntos(arr, n, 0, subconjunto, 0);


    //exercicio 23
    int arr[] = {5, 3, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    mergeSort(arr, 0, n - 1);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    
    //exercicio 24
    int arr[] = {5, 3, 8, 1, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
        printf("Array original: ");
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        
        printf("\n");
        quickSort(arr, 0, n - 1);
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    

//exercicio 25
int arr[] = {1, 3, 5, 7, 9};
int n = sizeof(arr) / sizeof(arr[0]);
int chave = 5;

int resultado = buscaBinaria(arr, 0, n - 1, chave);

if (resultado != -1)
    printf("Elemento %d encontrado no índice %d.\n", chave, resultado);
else
    printf("Elemento %d não encontrado no array.\n", chave);
    
    
    //exercicio 26
    int ex=ExpoRapi(4,4);
    printf("%d",ex);


    //exercicio 27
     int x1 = 0, y1 = 0;
    int x2 = 2, y2 = 2;

    printf("Todos os caminhos de (%d,%d) até (%d,%d):\n", x1, y1, x2, y2);
    int caminho[MAX][2];
    encontrarCaminhos(x1, y1, x2, y2, caminho, 0);

    int total = contarCaminhos(x1, y1, x2, y2);
    printf("\nTotal de caminhos possíveis: %d\n", total);

    
    //exercicio 28
    int n;
    printf("Digite o valor de N (até %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Valor inválido.\n");
        return 1;
    }

    resolverNRainhas(n);


    //exercicio 29
     int lab[MAX][MAX];
    char sol[MAX][MAX];
    int n, m;

    printf("Digite as dimensões do labirinto (n m): ");
    scanf("%d %d", &n, &m);

    printf("Digite o labirinto (0 = livre, 1 = parede):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            scanf("%d", &lab[i][j]);
            sol[i][j] = '0';
        }

    if (lab[0][0] == 1 || lab[n-1][m-1] == 1) {
        printf("Sem caminho possível (início ou fim bloqueado).\n");
        return 1;
    }

    if (resolverLabirinto(lab, sol, n, m, 0, 0))
        imprimirSolucao(sol, n, m);
    else
        printf("Nenhum caminho encontrado.\n");


//exercicio 30 
int n;
printf("Digite o número de pares de parênteses: ");
scanf("%d", &n);

char sequencia[MAX];
gerarParenteses(0, 0, n, sequencia, 0);
    
    

        return 0;

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

        //exercicio 17
        int buscaRecursiva(int arr[], int tamanho, int alvo) {
        if (tamanho == 0)
            return 0; // Caso base: não encontrou
    
        if (arr[0] == alvo)
            return 1; // Encontrou o elemento
    
        // Chamada recursiva com o restante do array
        return buscaRecursiva(arr + 1, tamanho - 1, alvo);
        }


        //exercicio 18
        int comprimentoRecursivo(const char *str) {
        if (*str == '\0')
            return 0; // Caso base: fim da string
    
        return 1 + comprimentoRecursivo(str + 1); // Conta o caractere atual
        }


        //exercicio 19
        void torreDeHanoi(int n, char origem, char auxiliar, char destino) {
        if (n == 1) {
            printf("Mover disco 1 de %c para %c\n", origem, destino);
            return;
        }
    
        torreDeHanoi(n - 1, origem, destino, auxiliar);
    
        printf("Mover disco %d de %c para %c\n", n, origem, destino);
            
        torreDeHanoi(n - 1, auxiliar, origem, destino);
        }


//exercicio 20 
void gerarPermutacoes(char str[], int inicio, int fim) {
    if (inicio == fim) {
        printf("%s\n", str);
        return;
    }
    
    for (int i = inicio; i <= fim; i++) {
        trocarCaracteres(&str[inicio], &str[i]);
        gerarPermutacoes(str, inicio + 1, fim);
        trocarCaracteres(&str[inicio], &str[i]);
    }
}

void trocarCaracteres(char *a, char *b) {
    if (a != b) {
        char temp = *a;
        *a = *b;
        *b = temp;
    }
}        

        //exercicio 21
        void gerarCombinacoes(int arr[], int n, int k, int index, int data[], int i) {
            if (index == k) {
                printf("{ ");
                for (int j = 0; j < k; j++) {
                    printf("%d ", data[j]);
                }
                printf("}\n");
                return;
            }
        
            if (i >= n)
                return;
        
            data[index] = arr[i];
            gerarCombinacoes(arr, n, k, index + 1, data, i + 1);
        
            gerarCombinacoes(arr, n, k, index, data, i + 1);
        }

        //exercicio 22
        void gerarSubconjuntos(int arr[], int n, int index, int subconjunto[], int tamanhoAtual) {
            if (index == n) {
                // Imprime o subconjunto atual
                printf("{");
                for (int i = 0; i < tamanhoAtual; i++) {
                    printf("%d", subconjunto[i]);
                    if (i < tamanhoAtual - 1)
                        printf(", ");
                }
                printf("}\n");
                return;
            }
        
            subconjunto[tamanhoAtual] = arr[index];
            gerarSubconjuntos(arr, n, index + 1, subconjunto, tamanhoAtual + 1);

            gerarSubconjuntos(arr, n, index + 1, subconjunto, tamanhoAtual);
        }


        //exercicio 23
        void mergeSort(int arr[], int inicio, int fim) {
            if (inicio < fim) {
                int meio = inicio + (fim - inicio) / 2;
        
                mergeSort(arr, inicio, meio);
                mergeSort(arr, meio + 1, fim);
                merge(arr, inicio, meio, fim);
            }
        }
        
        void merge(int arr[], int inicio, int meio, int fim) {
            int n1 = meio - inicio + 1;
            int n2 = fim - meio;
        
            int *esquerda = (int *)malloc(n1 * sizeof(int));
            int *direita = (int *)malloc(n2 * sizeof(int));
        
            for (int i = 0; i < n1; i++)
                esquerda[i] = arr[inicio + i];
            for (int j = 0; j < n2; j++)
                direita[j] = arr[meio + 1 + j];
        
            int i = 0, j = 0, k = inicio;
        
            while (i < n1 && j < n2) {
                if (esquerda[i] <= direita[j]) {
                    arr[k++] = esquerda[i++];
                } else {
                    arr[k++] = direita[j++];
                }
            }
            while (i < n1) {
                arr[k++] = esquerda[i++];
            }
            while (j < n2) {
                arr[k++] = direita[j++];
            }

            free(esquerda);
            free(direita);
        }


        //exercicio 24
        void quickSort(int arr[], int inicio, int fim) {
            if (inicio < fim) {
                int pivoIndex = particionar(arr, inicio, fim);
        
                quickSort(arr, inicio, pivoIndex - 1);
                quickSort(arr, pivoIndex + 1, fim);
            }
        }

        int particionar(int arr[], int inicio, int fim) {
            int pivo = arr[fim];
            int i = inicio - 1;
        
            for (int j = inicio; j < fim; j++) {
                if (arr[j] <= pivo) {
                    i++;
                    
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            
            int temp = arr[i + 1];
            arr[i + 1] = arr[fim];
            arr[fim] = temp;
        
            return i + 1; 
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


        //exercicio 27
        void encontrarCaminhos(int x, int y, int x2, int y2, int caminho[MAX][2], int passo) {
            caminho[passo][0] = x;
            caminho[passo][1] = y;

            if (x == x2 && y == y2) {
                for (int i = 0; i <= passo; i++) {
                    printf("(%d,%d)", caminho[i][0], caminho[i][1]);
                    if (i < passo) printf(" -> ");
                }
                printf("\n");
                return;
            }
        
            if (x < x2)
                encontrarCaminhos(x + 1, y, x2, y2, caminho, passo + 1);

            if (y < y2)
                encontrarCaminhos(x, y + 1, x2, y2, caminho, passo + 1);
        }
        
        int contarCaminhos(int x1, int y1, int x2, int y2) {
            if (x1 > x2 || y1 > y2)
                return 0;
            if (x1 == x2 && y1 == y2)
                return 1;
        
            return contarCaminhos(x1 + 1, y1, x2, y2) + contarCaminhos(x1, y1 + 1, x2, y2);
        }


        //exercicio 28
        void resolverNRainhas(int n) {
            int colunas[MAX] = {0};
            int diag1[2 * MAX] = {0};
            int diag2[2 * MAX] = {0};
        
            char tabuleiro[MAX][MAX];
        
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    tabuleiro[i][j] = '.';
        
            colocarRainha(0, n, colunas, diag1, diag2, tabuleiro);
        }
        
        void colocarRainha(int linha, int n, int *colunas, int *diag1, int *diag2, char tabuleiro[MAX][MAX]) {
            if (linha == n) {
                imprimirTabuleiro(tabuleiro, n);
                return;
            }
        
            for (int col = 0; col < n; col++) {
                if (!colunas[col] && !diag1[linha + col] && !diag2[linha - col + n - 1]) {
                    tabuleiro[linha][col] = 'Q';
                    colunas[col] = diag1[linha + col] = diag2[linha - col + n - 1] = 1;
        
                    colocarRainha(linha + 1, n, colunas, diag1, diag2, tabuleiro);
        
                    tabuleiro[linha][col] = '.';
                    colunas[col] = diag1[linha + col] = diag2[linha - col + n - 1] = 0;
                }
            }
        }
        
        void imprimirTabuleiro(char tabuleiro[MAX][MAX], int n) {
            printf("\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    printf("%c ", tabuleiro[i][j]);
                }
                printf("\n");
            }
        }


        //exercicio 29
        int resolverLabirinto(int lab[MAX][MAX], char sol[MAX][MAX], int n, int m, int x, int y) {
        if (x == n - 1 && y == m - 1) {
            sol[x][y] = '*';
            return 1;
        }
    
        if (x < 0 || y < 0 || x >= n || y >= m || lab[x][y] == 1 || sol[x][y] == '*')
            return 0;
    
        sol[x][y] = '*';
    
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (resolverLabirinto(lab, sol, n, m, nx, ny))
                return 1;
        }
    
        sol[x][y] = '0';
        return 0;
    }
    
    void imprimirSolucao(char sol[MAX][MAX], int n, int m) {
        printf("\nCaminho encontrado:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                printf("%c ", sol[i][j]);
            printf("\n");
        }
    }


//exercicio 30 
void gerarParenteses(int abertos, int fechados, int n, char *sequencia, int pos) {
    if (abertos == n && fechados == n) {
        sequencia[pos] = '\0'; // Finaliza string
        printf("%s\n", sequencia);
        return;
    }

    if (abertos < n) {
        sequencia[pos] = '(';
        gerarParenteses(abertos + 1, fechados, n, sequencia, pos + 1);
    }

    if (fechados < abertos) {
        sequencia[pos] = ')';
        gerarParenteses(abertos, fechados + 1, n, sequencia, pos + 1);
    }
}
