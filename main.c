#include <stdio.h>

int main(){
    int idade;
    printf("Informe a idade de Alberto: \n");
    scanf("%d",&idade);
    
    if(idade>=18 && idade <=149){
        printf("Alberto é maior de idade.");
    }else if(idade<18 && idade>0 || idade<150){
        printf("Alberto é menor de idade.");
    }else{
        printf("Idade inválida");
    }
    return 0;
}