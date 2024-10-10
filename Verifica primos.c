#include <stdio.h>
#include <math.h>

int main(){
   //Vamos fazer um programa que verifica se um número inteiro positivo é primo.
   int n, divisor;
   do{
      printf("Informe um número inteiro positivo: ");
      scanf("%d", &n);
      
      divisor = 0; //Precisamos iniciar o divisor.
      
      for(int i = 1; i <= n; i++){
         if(n % i == 0){
         divisor++;
         }
      }
      
      if(divisor == 2){ //Se o número for primo ele só terá dois divisores.
      printf("É primo.");
      } else{
      printf("Não é primo.");
      }
      
   } while(n < 0);

return 0;
}