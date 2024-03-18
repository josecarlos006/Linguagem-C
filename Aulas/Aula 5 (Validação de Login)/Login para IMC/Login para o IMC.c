#include <stdio.h>
// Adicionamos a biblioteca que valida caracteres com ela podemos atribuir variavel de caracteres ("char") a um valor ("letras")
#include <string.h>

int main()
{
    int pwd = 1234;
    int senha;
    char email[22];
    char mail[] = "jc5474@live.com";
    float peso, altura, imc;

    printf("\n\t**** Tela de Login para acessar IMC****");

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
    if (senha == pwd && strcmp(email, mail) == 0)
    {
        printf("\n\t***--- ACESSO PERMITIDO AO IMC---***");

        printf("\n\tDigite seu peso para calcularmos seu IMC: ");
        scanf("%f", &peso);
        printf("\n\tDigite sua altura para calcularmos seu IMC: ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        if(imc >= 40)
        {
            printf("\n\tCUIDADO OBESIDADE NIVEL III");
            printf("\n\tSEU IMC: %2.f", imc);
        }
        else if (imc >= 35 && imc <= 39.9)
        {
            printf("\n\tCUIDADO OBESIDADE NIVEL II");
            printf("\n\tSEU IMC: %2.f", imc);
        } else if(imc >= 30 && imc <= 34.9)
        {
            printf("\n\tCUIDADO OBESIDADE NIVEL I");
            printf("\n\tSEU IMC: %2.f", imc);
        } else if(imc >= 24.9 && imc <= 29.9)
        {
            printf("\n\tSOBREPESO AMIGO");
            printf("\n\tSEU IMC: %2.f", imc);
        } else if(imc >= 18.5 && imc <= 24.9)
        {
            printf("\n\tVOCE ESTA NORMAL PARABENS!!!");
            printf("\n\tSEU IMC: %2.f", imc);
        } else
        {
            printf("\n\tVOCE ESTA ABAIXO DO PESO!!!");
            printf("\n\tSEU IMC: %.2f", imc);
        }
                }
    else
    {
        printf("\n\t***--- ACESSO NEGADO (SENHA OU EMAIL INCORRETOS) ---***");
    }
}