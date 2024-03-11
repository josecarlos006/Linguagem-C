#include <stdio.h>

int main()
{
    int num_1 = 10;
    int num_2 = 100;
    
     int soma, mult, sub, div_;
     
     
    soma = num_1 + num_2;
    sub = num_1 - num_2;
    mult = num_1 * num_2;
    div_ = num_1 / num_2;
    
    printf("A soma do numero %d e %d e: %d \n", num_1, num_2, soma);
    printf("A subtracao do numero %d e %d e: %d \n", num_1, num_2, sub);
    printf("A multiplicacao do numero %d e %d e: %d \n", num_1, num_2, mult);
    printf("A divisao do numero %d e %d e: %d \n", num_1, num_2, div_);
    
}
