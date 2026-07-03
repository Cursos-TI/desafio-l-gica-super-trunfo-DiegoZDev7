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
        char comparacao;

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
        
        printf("Escreva a letra do atributo que deseja comparar\n p = populacao \n a = Area \n b = Pib \n n = Numero de pontos turisticos \n d = Densidade demografica \n");
        scanf(" %c", &comparacao);
        
        switch (comparacao){
        case 'p':
            if(populacao > populacao2){
                printf("Populaçao do(a) %s e %d: carta 1 venceu\n", nomeEst, populacao);
            }else if (populacao < populacao2){
                printf("Populacao do(a) %s e %d: carta 2 venceu\n", nomeEst2, populacao2);
            } else{
                printf("Empate!");
            }
        break;
        case 'a':
             if(area > area2){
                printf("Area do(a) %s e %.2f: Carta 1 venceu\n", nomeEst, area);
            } else if(area < area2){
                printf("Area do(a) %s e %.2f: Carta 2 venceu\n", nomeEst2, area2);
            } else{
                printf("Empate!");
            }
        break;
        case 'b':
            if(pib > pib2){
                printf("Pib do(a) %s e %.2f: Carta 1 venceu\n", nomeEst, pib);
            } else if(pib < pib2){
                printf("Pib do(a) %s e %.2f: Carta 2 venceu\n", nomeEst2, pib2);
            } else{
                printf("Empate!");
            }
        break;
        case 'n':
            if(pontos > pontos2){
                printf("Pontos turisticos do(A) %s e %d: Carta 1 venceu\n", nomeEst, pontos);
            } else if(pontos < pontos2){
                printf("Ponto turisticos do(A) %s e %d: Carta 2 venceu\n", nomeEst2, pontos2);
            } else{
                printf("Empate!");
            }
        break;
        case 'd':
            if(densidade < densidade2){
            printf("Densidade do(a) %s e %.2f: Carta 1 venceu\n", nomeEst, densidade);
            } else if(densidade > densidade2){
            printf("Densidade do(a) %s e %.2f: Carta 2 venceu\n", nomeEst2, densidade2);
            } else{
                printf("Empate!");
            }
        break;
        default:
            printf("opcao invalida");
        break;
        }
    return 0;
    }