/****************************************************************************
Título Desenvolvimento de Sistema Simplificado para Caixa Eletrônico
Problema
- Implemente um sistema de gerenciamento de um caixa eletrônico com base nos pilares do pensamento computacional. A solução deve:
- Receber a configuração inicial de cédulas disponíveis no caixa eletrônico (valores e quantidades).
- Entrar em modo de operação, permitindo múltiplos saques.
- A cada saque solicitado, tentar entregar o valor exato com o menor número de cédulas possível.
- Caso não haja cédulas suficientes para atender ao valor solicitado, exibir mensagem de erro (“Valor indisponível para saque”).
- O caixa não deve entregar troco nem valores parciais — ou entrega o valor exato ou não entrega.
Exemplo de Entrada Inicial
> Cédulas 100, 50, 20, 10
> Quantidades 2, 4, 5, 10
Exemplos de Saques
> Saque de 180 → entrega 2x100, 1x50, 1x20, 1x10.
> Saque de 70 → entrega 1x50, 1x20
> Saque de 250 → não há cédulas suficientes
Entregas
- Fluxograma
- Programa C
-AUTOR-> VINICIUS ALVES COSTA
-EMAIL-> viniciusac.aluno@unipampa.edu.br
*******************************************************************************/
#include <stdio.h>

/* VOID IMPRIMIR QUE PERMITE UM LOOP DE CARACTERES QUE SERAM IMPRESSOS*/
void imprimir(char caractere, int quantidade){
    int a;
    a = 0;
    while(a < quantidade){
        printf("%c",caractere);
        a = a + 1;
        //imprimir('#',25);
    }
}

int main(){
//VARIAVEIS
    int q200,q100,q50,q20,q10,q5,q2; // CEDULAS(R$)
    int Saque_Solicitado; // SAQUE A SER SOLICITADO
    
    // CEDULAS TEMPORARIAS
    int temp_q200,temp_q100,temp_q50,temp_q20,temp_q10,temp_q5,temp_q2; 
    //TEMPORARIAS SERAO UTILIZADAS PARA NAO ALTERAR A QUANTIDADE ORIGINAL DE CEDULAS
    // A FIM DE , PERMITIR UMA ''COPIA'' PARA REALIZAR O SAQUE E VERIFICAR SE PODE SER REALIZADO OU NAO
    
    int n200,n100,n50,n20,n10,n5,n2; // QUANTIDADE DE CEDULAS A SEREM ENTREGUES PELO CAIXA
    int status; //STATUS DO PROGRAMA 1 = SAQUE, 2 = STATUS, 3 = ENCERRAR

    /* BLOCO 1: INICIO && CEDULAS INICIAIS */
    imprimir('#',25);
        printf("\nCAIXA ELETRONICO");
        printf("\n Quantidade de Cedulas de R$200 : ");
            scanf("%i", &q200);
        printf("Quantidade de Cedulas de R$100 : ");
            scanf("%i", &q100);
        printf("Quantidade de Cedulas de R$50 : ");
            scanf("%i", &q50);
        printf("Quantidade de Cedulas de R$20 : ");
            scanf("%i", &q20);
        printf("Quantidade de Cedulas de R$10 : ");
            scanf("%i", &q10);
        printf("Quantidade de Cedulas de R$5 : ");
            scanf("%i", &q5);
        printf("Quantidade de Cedulas de R$2 : ");
            scanf("%i", &q2);
    imprimir('#',25);

    /* BLOCO 2: WHILE QUE PERMITE A EXECUCAO DO PROGRAMA COM 3 STATUS */    
    while(status != 3){
    //IMPRIMIR O MENU DE OPÇÕES && GUI
        imprimir('#',25);
        printf("\nMenu de opções");
        printf("\n1 = REALIZAR SAQUE");
        printf("\n2 = VERIFICAR A QUANTIDADE DE CEDULAS");
        printf("\n3 = FINALIZAR PROGRAMA\n");
            scanf("%i", &status);
        
        //STATUS 1 = SAQUE
        if(status == 1){
        imprimir('#',25);
            printf("\nIndique o valor do saque a ser: ");
                scanf("%i", &Saque_Solicitado);
        
            //COPIA DE SEGURANCA DAS CEDULAS = TEMPORARIO
                temp_q200 = q200;
                temp_q100 = q100;
                temp_q50 = q50;
                temp_q20 = q20;
                temp_q10 = q10;
                temp_q5 = q5;
                temp_q2 = q2;
                
            //INICIO DO SAQUE
            //CEDULA 200
            n200 = 0;
            while (Saque_Solicitado >= 200 && temp_q200 > 0){
                Saque_Solicitado = Saque_Solicitado - 200;
                temp_q200 = temp_q200 - 1;
                n200 = n200 + 1;
            }
            //CEDULA 100
            n100 = 0;
            while (Saque_Solicitado >= 100 && temp_q100 > 0){
                Saque_Solicitado = Saque_Solicitado - 100;
                temp_q100 = temp_q100 - 1;
                n100 = n100 + 1;
            }
            //CEDULA 50
            n50 = 0;
            while (Saque_Solicitado >= 50 && temp_q50 > 0){
                Saque_Solicitado = Saque_Solicitado - 50;
                temp_q50 = temp_q50 - 1;
                n50 = n50 + 1;
            }
            //CEDULA 20
            n20 = 0;
            while (Saque_Solicitado >= 20 && temp_q20 > 0){
                Saque_Solicitado = Saque_Solicitado - 20;
                temp_q20 = temp_q20 - 1;
                n20 = n20 + 1;
            }
            //CEDULA 10
            n10 =0;
            while (Saque_Solicitado >= 10 && temp_q10 > 0){
                Saque_Solicitado = Saque_Solicitado - 10;
                temp_q10 = temp_q10 - 1;
                n10 = n10 + 1;
            }
            //CEDULA 5
            n5 = 0;
            while (Saque_Solicitado >= 5 && temp_q5 > 0){
                Saque_Solicitado = Saque_Solicitado - 5;
                temp_q5 = temp_q5 - 1;
                n5 = n5 + 1;
            }
            //CEDULA 2
            n2 = 0;
            while (Saque_Solicitado >= 2 && temp_q2 > 0){
                Saque_Solicitado = Saque_Solicitado - 2;
                temp_q2 = temp_q2 - 1;
                n2 = n2 + 1;
            }
            //IF PARA VERIFICAR SE O SAQUE É POSSIVEL DE SER FEITO
            if(Saque_Solicitado == 0){
                printf("Saque aprovado, retire essas notas: ");
                //ATUALIZAR A QUANTIDADE DE CEDULAS DISPONIVEIS (ORIGINAIS)
                q200 = q200 - n200;
                q100 = q100 - n100;
                q50 = q50 - n50;
                q20 = q20 - n20;
                q10 = q10 - n10;
                q5 = q5 - n5;
                q2 = q2 - n2;
                //IMPRIMIR A QUANTIDADE DE CEDULAS ENTREGUES && 
                //IF QUE PERMITE IMPRIMIR APENAS AS CEDULAS UTILIZADAS
                if(n200 > 0){
                    printf("\nCedulas de R$200: %i", n200);
                }
                if(n100 > 0){
                    printf("\nCedulas de R$100: %i", n100);    
                }
                if(n50 > 0){
                printf("\nCedulas de R$50: %i", n50);
                }
                if(n20 > 0){
                    printf("\nCedulas de R$20: %i", n20);
                }
                if(n10 > 0){
                    printf("\nCedulas de R$10: %i", n10);
                }
                if(n5 > 0){
                    printf("\nCedulas de R$5: %i", n5);
                }
                if(n2 > 0){
                    printf("\nCedulas de R$2: %i\n", n2);
                }
            //ELSE IF PARA INFORMAR QUE O SAQUE NAO PODE SER FEITO    
            }else if(Saque_Solicitado != 0){
                printf("Valor indisponível para saque");
            }
        //STATUS 2 = VERIFICAR CEDULAS DISPONIVEIS
        }else if(status == 2){
            imprimir('#',25);
                printf("\nQUANTIDADE DE CEDULAS DISPONIVEIS:");
                printf("\nCedulas de R$200: %i", q200);
                printf("\nCedulas de R$100: %i", q100);
                printf("\nCedulas de R$50: %i", q50);
                printf("\nCedulas de R$20: %i", q20);
                printf("\nCedulas de R$10: %i", q10);
                printf("\nCedulas de R$5: %i", q5);
                printf("\nCedulas de R$2: %i\n", q2);
            }                         
        }
        //STATUS 3 = ENCERRAR PROGRAMA
        imprimir('#',25);
        printf("\nENCERRANDO PROGRAMA...");
        
return 0;
}