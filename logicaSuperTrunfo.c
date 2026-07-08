//desafio nivel mestre

#include <stdio.h>

    int main(){
        char estado, estado2;
        char codigo[20], codigo2[20];
        char nomeEst[30], nomeEst2[30];
        int populacao, populacao2;
        float area, area2;
        float pib, pib2;
        int pontos, pontos2;
        float densidade, densidade2;
        float pibper1, pibper2;
        float superpoder, superpoder2;
        char comparacao1, comparacao2;

        int resultado1, resultado2;

        float somaCarta1 = 0;
        float somaCarta2 = 0;

        //primeira carta
        printf("Digite a primeira letra do estado da primeira carta:");
        scanf(" %c", &estado);

        printf("Digite o codigo da primeira carta:");
        scanf("%s", &codigo);

        printf("Digite o nome do estado da primeira carta:");
        scanf("%s", &nomeEst);

        printf("Digite a população da primeira carta:");
        scanf("%d", &populacao);

        printf("Digite a area da primeira carta:");
        scanf("%f", &area);

        printf("Digite o pib da primeira carta:");
        scanf("%f", &pib);

        printf("Digite o numero de pontos turisticos da primeira carta:");
        scanf("%d", &pontos);

        //segunda carta
        printf("Digite a primeira letra do estado da segunda carta:");
        scanf(" %c", &estado2);

        printf("Digite o codigo da segunda carta:");
        scanf("%s", &codigo2);

        printf("Digite o nome do estado da segunda carta:");
        scanf("%s", &nomeEst2);

        printf("Digite a população da segunda carta:");
        scanf("%d", &populacao2);

        printf("Digite a area da segunda carta:");
        scanf("%f", &area2);

        printf("Digite o pib da segunda carta:");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turisticos da segunda carta:");
        scanf("%d", &pontos2);

        //calcular media
        densidade = (float)populacao / area;
        densidade2 = (float)populacao2 / area2;

        pibper1 = pib / populacao;
        pibper2 = pib2 / populacao2;

        //calcular superpoder
        superpoder = populacao + area + pib + pontos + pibper1 + (1.0 / densidade);
        superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibper2 + (1.0 / densidade2);

        //resultados
        printf("\n===== PRIMEIRA CARTA =====\n");

        printf("A primeira letra do estado da primeira carta é: %c\n", estado);
        printf("O codigo da  primeira carta é: %s\n", codigo);
        printf("O nome do estado da primeira carta é: %s\n", nomeEst);
        printf("A população da primeira carta é: %d\n", populacao);
        printf("A area da primeira carta é: %f\n", area);
        printf("O pib da primeira carta é:%f\n", pib);
        printf("O numero de pontos turisticos da primeira carta é: %d\n", pontos);
        printf("Densidade populacional: %f\n", densidade);
        printf("PIB per capita: %f\n", pibper1);
        printf("O super poder da primeira carta é: %f\n", superpoder);

        printf("\n===== SEGUNDA CARTA =====\n");

        printf("A primeira letra do estado da segunda carta é: %c\n", estado2);
        printf("O codigo da segunda carta é: %s\n", codigo2);
        printf("O nome do estado da segunda carta é: %s\n", nomeEst2);
        printf("A população da segunda carta é: %d\n", populacao2);
        printf("A area da segunda carta é: %f\n", area2);
        printf("O pib da segunda carta é:%f\n", pib2);
        printf("O numero de pontos turisticos da segunda carta é: %d\n", pontos2);
        printf("Densidade populacional: %f\n", densidade2);
        printf("PIB per capita: %f\n", pibper2);
        printf("O super poder da segunda carta é: %f\n", superpoder2);

        printf("\n===== COMPARACAO DAS CARTAS =====\n");
        
        printf("Escolha o primeiro atributo:\n");
        printf("p - Populacao\n");
        printf("a - Area\n");
        printf("b - PIB\n");
        printf("n - Pontos Turisticos\n");
        printf("d - Densidade\n");
        scanf(" %c", &comparacao1);

        printf("\nEscolha o segundo atributo:\n");
        printf("p - Populacao\n");
        printf("a - Area\n");
        printf("b - PIB\n");
        printf("n - Pontos Turisticos\n");
        printf("d - Densidade\n");
        scanf(" %c", &comparacao2);

        if(comparacao1 == comparacao2){
        printf("Voce nao pode escolher o mesmo atributo duas vezes!\n");
         return 0;
        }
        
        switch(comparacao1){
            case 'p':
                resultado1 = (populacao > populacao2) ? 1 :
                            (populacao < populacao2) ? 2 : 0;
                somaCarta1 += populacao;
                somaCarta2 += populacao2;
            break;

            case 'a':
                resultado1 = (area > area2) ? 1 :
                            (area < area2) ? 2 : 0;
                somaCarta1 += area;
                somaCarta2 += area2;
            break;

            case 'b':
                resultado1 = (pib > pib2) ? 1 :
                            (pib < pib2) ? 2 : 0;
                somaCarta1 += pib;
                somaCarta2 += pib2;
            break;

            case 'n':
                resultado1 = (pontos > pontos2) ? 1 :
                            (pontos < pontos2) ? 2 : 0;
                somaCarta1 += pontos;
                somaCarta2 += pontos2;
            break;

            case 'd':
                resultado1 = (densidade < densidade2) ? 1 :
                            (densidade > densidade2) ? 2 : 0;
                somaCarta1 += (1.0 / densidade);
                somaCarta2 += (1.0 / densidade2);
            break;

            default:
                printf("Opcao invalida!\n");
                return 0;
            }

            switch(comparacao2){
            case 'p':
                resultado2 = (populacao > populacao2) ? 1 :
                            (populacao < populacao2) ? 2 : 0;
                somaCarta1 += populacao;
                somaCarta2 += populacao2;
            break;

            case 'a':
                resultado2 = (area > area2) ? 1 :
                            (area < area2) ? 2 : 0;
                somaCarta1 += area;
                somaCarta2 += area2;
            break;

            case 'b':
                resultado2 = (pib > pib2) ? 1 :
                            (pib < pib2) ? 2 : 0;
                somaCarta1 += pib;
                somaCarta2 += pib2;
            break;

            case 'n':
                resultado2 = (pontos > pontos2) ? 1 :
                            (pontos < pontos2) ? 2 : 0;
                somaCarta1 += pontos;
                somaCarta2 += pontos2;
            break;

            case 'd':
                resultado2 = (densidade < densidade2) ? 1 :
                            (densidade > densidade2) ? 2 : 0;
                somaCarta1 += (1.0 / densidade);
                somaCarta2 += (1.0 / densidade2);
            break;

            default:
                printf("Opcao invalida!\n");
                return 0;
            }
            
            printf("\n===== RESULTADO FINAL =====\n");

            printf("Soma da Carta 1: %.2f\n", somaCarta1);
            printf("Soma da Carta 2: %.2f\n", somaCarta2);

            int vencedor = (somaCarta1 > somaCarta2) ? 1 :
                        (somaCarta1 < somaCarta2) ? 2 : 0;

            if(vencedor == 1){
                printf("Carta 1 venceu!\n");
            }
            else if(vencedor == 2){
                printf("Carta 2 venceu!\n");
            }
            else{
                printf("Empate!\n");
            }
                return 0;
    }