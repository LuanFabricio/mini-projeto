#include <stdio.h>
#include <string.h>

int main(int quant, char* args[]){
    if(quant!=2) {
        printf("ERRO! Somente insira o nome do arquivo.\n");
        return 1;
    }

    FILE *arq;
    strcat(args[1],".csv");
    arq =  fopen(args[1],"wt");
    if(arq==NULL){
        printf("Problemas na criacao do arquivo.\n");
        return 2;
    }
    int i, j, colunas;
    char texto;
    printf("Digite a quantidade a quantidade de colunas: ");
    scanf("%i%*i",&colunas);
    char str_coluna[i][256];
    for(i = 0 ; i < colunas ; i++){
        gets(str_coluna[i]);
        strcat(str_coluna,",");
        fprintf(arq, str_coluna[i]);
    }
    fprintf(arq,"\n");

    fclose(arq);
    return 0;
}