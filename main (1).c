#include <stdio.h>

int main(){
    int mês;
    
    printf("Informe o mês do primeiro semestre que estamos \n");
    scanf("%d",&mês);
    
    switch(mês){
    case 1:
    printf("Janeiro");
    break;
    case 2:
    printf("Fevereiro");
    break;
    case 3:
    printf("Março");
    break;
    case 4:
    printf("Abril");
    break;
    case 5:
    printf("Maio");
    break;
    case 6:
    printf("Junho");
    break;
    
    default:
    printf("Não tem. Meu nobre!");
    break;
    }
    return 0;
}