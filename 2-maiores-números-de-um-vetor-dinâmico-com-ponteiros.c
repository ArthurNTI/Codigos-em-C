#include <stdio.h>
#include <stdlib.h>

int sub(int *vet, int qtd){
    int first_greater = vet[0], second_greater = vet[0];
        
    
    for (int i = 0; i < qtd; i++) {
       if(vet [i] > first_greater){
        first_greater = vet[i];
       }
    }
    for (int i = 0; i < qtd; i++) {
       if((vet [i] < first_greater) && (vet [i] > second_greater)){
        second_greater = vet[i];
       }
      
   }

   printf("The two greatest numbers : %d e %d", first_greater, second_greater);
}
    



int main(){
    int qtd,i;
    int *vet;
    
    printf("Enter how much number you wanna use ? :");
    scanf("%d",&qtd);
    
    vet = malloc(qtd*sizeof(int));
    
    for (i=0;i<qtd;i++){
        printf("Enter the %d number for a vector :",i+1);
        scanf("%d",&vet[i]);
    }
    
    for (i=0;i<qtd;i++){
        printf("%d \n",vet[i]);
        
    }
    sub(vet,qtd);
    
}



