//desafio nivel novato

#include <stdio.h>

    int main(){
        char estado, estado2;
        char codigo[20], codigo2[20];
        char nomecdd[30], nomecdd2[30];
        int populacao, populacao2;
        float area, area2;
        float pib, pib2;
        int pontos, pontos2;
        float densidade, densidade2;
        float pibper1, pibper2;
        float superpoder, superpoder2;

        //primeira carta
        printf("Digite a primeira letra do estado da primeira carta:");
        scanf(" %c", &estado);

        printf("Digite o codigo da primeira carta:");
        scanf("%s", &codigo);

        printf("Digite o nome da cidade da primeira carta:");
        scanf("%s", &nomecdd);

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

        printf("Digite o nome da cidade da segunda carta:");
        scanf("%s", &nomecdd2);

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
        printf("O nome da cidade da primeira carta é: %s\n", nomecdd);
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
        printf("O nome da cidade da segunda carta é: %s\n", nomecdd2);
        printf("A população da segunda carta é: %d\n", populacao2);
        printf("A area da segunda carta é: %f\n", area2);
        printf("O pib da segunda carta é:%f\n", pib2);
        printf("O numero de pontos turisticos da segunda carta é: %d\n", pontos2);
        printf("Densidade populacional: %f\n", densidade2);
        printf("PIB per capita: %f\n", pibper2);
        printf("O super poder da segunda carta é: %f\n", superpoder2);

        printf("\n===== COMPARACAO DAS CARTAS =====\n");

        if(populacao > populacao2){
            printf("Populaçao: carta 1 venceu\n");
        }else{
            printf("Populacao: carta 2 venceu\n");
        }

        if(area > area2){
            printf("Area: Carta 1 venceu\n");
        } else{
            printf("Area: Carta 2 venceu\n");
        }

        if(pib > pib2){
            printf("Pib: Carta 1 venceu\n");
        } else{
            printf("Pib: Carta 2 venceu\n");
        }

        if(pontos > pontos2){
        printf("Pontos turisticos: Carta 1 venceu\n");
        } else{
        printf("Ponto turisticos: Carta 2 venceu\n");
        }

        if(densidade < densidade2){
        printf("Densidade: Carta 1 venceu\n");
        } else{
        printf("Densidade: Carta 2 venceu\n");
        }

        if(pibper1 > pibper2){
        printf("Pib per capital: Carta 1 venceu\n");
        } else{
        printf("Pib per capital: Carta 2 venceu\n");
        }

        if(superpoder > superpoder2){
        printf("Super poder: Carta 1 venceu\n");
        } else{
        printf("Super poder: Carta 2 venceu\n");
        }
    return 0;
    }