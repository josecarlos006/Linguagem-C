#include <stdio.h>
// Adicionamos a biblioteca que valida caracteres com ela podemos atribuir variavel de caracteres ("char") a um valor ("letras")
#include <string.h>

int main()
{
    int pwd = 1234;
    int senha;
    char email[22];
    char mail[] = "jc5474@live.com";

    printf("\n\t**** Tela de Login ****");

    printf("\n\tDigite seu Email:");
    /*
     Usando fgets() para ler a entrada;
     O sizeof() usasse para ler o tamanho que é "22";
     O stdin é uma abstração que representa o dispositivo de entrada padrão do sistema, que é geralmente o teclado por outras palavras que você vai digitar.
    */
    fgets(email, sizeof(email), stdin);
    // Removendo o caractere de nova linha (\n) do final da string
    email[strcspn(email, "\n")] = '\0';

    
    printf("\n\tDigite sua Senha: ");
    scanf("%d", &senha);

    /*
    Agora iremos ver se o usuario colocou o email e senha corretos

    -> strcmp(email, mail) == 0;
    Essa estrutura verifica se o email é igual ao mail;
    No caso é uma estrutura de verificação de strings do tipo caractere;
    Atribuisse a "0" para significar verdadeiro a ação do codigo e assim continuar o if().
    */
    if(senha == pwd && strcmp(email, mail) == 0){
        printf("***--- ACESSO PERMITIDO ---***");
    } else {
        printf("***--- ACESSO NEGADO (SENHA OU EMAIL INCORRETOS) ---***");
    }
}