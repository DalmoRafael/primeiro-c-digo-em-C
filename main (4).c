#include <stdio.h>

int main(){
   /*
   int x;
   int y;
   printf("informe dois numeros para soma:");
   scanf("%d", &x);
   scanf("%d", &y);
   printf("o resultado é:%d", x+y);
  */
   
  
/*
float nota_1, nota_2,nota_3,nota_4;

printf("informe as notas:");
scanf("%f", &nota_1);
scanf("%f", &nota_2);
scanf("%f", &nota_3);
scanf("%f", &nota_4);
printf("a soma é:%.1f, a media é:%.1f",nota_1+nota_2+nota_3+nota_4, (nota_1+nota_2+nota_3+nota_4)/4);
*/
/*
 int num;
 
 printf("informe o numero");
 scanf("%d", &num);
 
 if(num %2 == 0){
     printf("esse numero é par");
 }else if(num %2 == 1){
     printf("esse numero é impar");
 }else{
     printf("esse numero é 0");
 }*/
 /*
 int contador = 0;
 
 for(contador; contador < 100; contador++){
     printf("%d\n", contador);
 }
 if (contador == 100) {
     for (contador; contador >= 0; contador--) {
        printf("%d\n", contador);
     }
 }
 */
 
 int valorUsuario;
 printf("Digite um valor: ");
 scanf("%i", &valorUsuario);
 for (int i = 1; i >= valorUsuario; i++) {
     i += valorUsuario;
     printf("%i", i);
 }
  return 0;
}