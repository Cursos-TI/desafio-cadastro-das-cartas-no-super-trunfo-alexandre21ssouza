#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, 
    //número de pontos turísticos.

    //Variáveis carta 1 e os tipos para alocar os dados inseridos
    int carta_um = 1;
    char nome_do_pais[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    unsigned long int populacao;
    float area_km;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float per_capita;
    float super_poder;


    //Variáveis carta 2 e os tipos para alocar os dados inseridos
    int carta_dois = 2;
    char nome_do_pais_dois[50];
    char codigo_da_carta_dois[50];
    char nome_da_cidade_dois[50];
    unsigned long int populacao_dois;
    float area_km_dois;
    float pib_dois;
    int pontos_turisticos_dois;
    float densidade_populacional_dois;
    float per_capita_dois;
    float super_poder_dois;

    //Variável de comparação: opção de quesito
    int opcao_quesito;
    int opcao_quesito_dois;
   
    // Apresentando o jogo e Solicitandp ao usuário que insira as informações dos dados.
    printf("BEM-VINDO AO JOGO DE CARTAS SUPER TRUNFO!\n");
    printf("VAMOS COMEÇAR!\n");

    // Usando função printf com \n para saltar linhas, para organizar mais os dados exibidos.
    printf("\n");

    // Utilizando a função scanf para capturar as entradas do usuário para cada atributo.
    // Usando a função fgets para ter acesso a países com nomes compostos.
    // Usando a função printf para mostrar os dados em tela.
    printf("Prepare-se para inserir as informações das Cartas:\n");
    printf("\n");

    // Cadastro da Carta:
    //Carta 1
    printf("Cadastre a carta número 1!\n");
    printf("\n");
    printf("Carta: %d\n", carta_um);

    //Dados Nome País:
    printf("Escreva o nome do País: ");
    fgets(nome_do_pais,50,stdin);
    printf("Nome do País: %s" , nome_do_pais);

    //Dados Nome Cidade:
    printf("Insira o nome da Cidade: ");
    fgets(nome_da_cidade,50, stdin);
    printf("Nome da Cidade: %s", nome_da_cidade);

    //Dados Código da carta A:
    printf("Escreva o código da Carta: ");
    scanf("%s", &codigo_da_carta);
    printf("Código da Carta 1: %s\n", codigo_da_carta); 

    //Dados Número da População:
    printf("Insira o número da População: ");
    scanf("%lu", &populacao);
    printf("População: %.lu\n", populacao);

    //Dados de Extensão da Área da Cidade do País:
    printf("Insira a área em km² da Cidade: ");
    scanf("%f", &area_km);
    printf("Área km²: %.2f \n",area_km);

    //Dados do PIB da Cidade:
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("PIB: %.2f \n", pib);

    //Dados Número de ponto Turísticos da Cidade Cadastrada:
    printf("Insira o Número de pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Número de pontos Turísticos: %d \n", pontos_turisticos);

    //Cálculo densidade populacional:
    densidade_populacional = populacao / area_km;

    //Cálculo PIB per capita:
    per_capita = pib / populacao;


    printf("\n");
    printf("\n");

    printf("---------------------//---------------------\n");
    printf("\n");
    printf("\n");

    // Cadastro da Carta:
    //Carta 2
    printf("Cadastre a carta Número Dois!\n");
    printf("\n");
    printf("Carta: %d\n", carta_dois);

    //Dados Nome País:
    printf("Escreva o nome do País: ");
    getchar(); /*Usei a função para corrigir um erro de buffer na entrada de dados,
     relacionado com o uso do scanf após um fgets de introdução de dados. */ 
    fgets(nome_do_pais_dois,50,stdin);
    printf("Nome do País: %s" , nome_do_pais_dois);

     //Dados Nome Cidade:
    printf("Insira o nome da Cidade: ");
    fgets(nome_da_cidade_dois,50, stdin);
    printf("Nome da Cidade: %s", nome_da_cidade_dois);

     //Dados Código da carta:
    printf("Escreva o código da Carta: ");
    scanf("%s", &codigo_da_carta_dois);
    printf("Código da Carta B: %s\n", codigo_da_carta_dois); 

     //Dados Número da População:
    printf("Insira o número da População: ");
    scanf("%lu", &populacao_dois);
    printf("População: %lu\n", populacao_dois);

    //Dados de Extensão da Área da Cidade do País:
    printf("Insira a área em km² da Cidade: ");
    scanf("%f", &area_km_dois);
    printf("Área km²: %.2f \n",area_km_dois);


    //Dados do PIB da Cidade:
    printf("Insira o PIB: ");
    scanf("%f", &pib_dois);
    printf("PIB: %.2f \n", pib_dois);
    
     //Dados Número de ponto Turísticos da Cidade Cadastrada:
    printf("Insira o Número de pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_dois);
    printf("Número de pontos Turísticos: %d \n", pontos_turisticos_dois);

    //Cálculo densidade populacional:
        densidade_populacional_dois = populacao_dois / area_km_dois;

     //Cálculo PIB per capita:
        per_capita_dois = pib_dois / populacao_dois;

    printf("\n");
    printf("\n");

    // Seção de exibição dos Dados das Cartas com o uso da função printf:
  
    //Dados Carta 1
    printf("Carta: %d\n", carta_um);
    printf("País: %s", nome_do_pais);
    printf("Nome da Cidade: %s", nome_da_cidade);
    printf("Código da Carta A: %s\n", codigo_da_carta);
    printf("População: %lu\n", populacao);
    printf("Área km²: %.2f\n", area_km);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional);
    printf("PIB per capita: %.2f reais \n", per_capita);

    printf("\n");
    printf("\n");
    
    //Dados Carta 2
    printf("Carta: %d\n", carta_dois);
    printf("País: %s", nome_do_pais_dois);
    printf("Nome da Cidade: %s", nome_da_cidade_dois);
    printf("Código da Carta B: %s\n", codigo_da_carta_dois);
    printf("População: %lu\n", populacao_dois);
    printf("Área km²: %.2f\n", area_km_dois);
    printf("PIB: %.2f\n", pib_dois);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_dois);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional_dois);
    printf("PIB per capita: %.2f reais \n", per_capita_dois);

    printf("\n");
    printf("\n");

    
    //Super poder carta 1:
    super_poder = (float) populacao + area_km + (float) pontos_turisticos + per_capita / 1;

    //Super poder carta 2:
    super_poder_dois = (float) populacao + area_km + (float) pontos_turisticos + per_capita_dois / 1;


    printf("\n");
    printf("\n");

    // Local da lógica de Comparação dos Atributos das Cartas 1 e 2: 
    //Menu de Opções de comparação
    printf("Menu de combate de quesitos das Cartas: \n");
    printf("\n");
    printf("Escolha duas opções válidas que represente os quesitos a serem Comparados no desfio!\n");
    printf("Opções:\n");
    printf("1-População\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Ponto Turístico\n");
    printf("5-Densidade Populacional\n");
    printf("6-PIB Per Capita\n");
    printf("7-Super Poder\n");
    printf("\n");

    //inserindo as 2 opções desejada do menu
    //Opção 1
    printf("insira a opção do quesito 1 a ser comparado: ");
    scanf("%d", &opcao_quesito);
    printf("\n");

    switch (opcao_quesito)
    {
    case 1:  
         printf("2-Área\n");
         printf("3-PIB\n");
         printf("4-Ponto Turístico\n");
         printf("5-Densidade Populacional\n");
         printf("6-PIB Per Capita\n");
         printf("7-Super Poder\n");
         printf("\n");

     //Escolha Opção quesito 2 a ser comparado
     printf("insira a opção válida do quesito 2 a ser comparado: ");
     scanf("%d", &opcao_quesito_dois);
     printf("\n");

    opcao_quesito_dois == 1 ? printf("Opção inválida, selecionada anteriormente!\n"):
    printf("Vamos lá!\n");
     
     break;
    
     case 2:  
         printf("1-População\n");
         printf("3-PIB\n");
         printf("4-Ponto Turístico\n");
         printf("5-Densidade Populacional\n");
         printf("6-PIB Per Capita\n");
         printf("7-Super Poder\n");
         printf("\n");
     
          //Escolha Opção quesito 2 a ser comparado
          printf("insira a opção válida do quesito 2 a ser comparado: ");
          scanf("%d", &opcao_quesito_dois);
          printf("\n");
     
         opcao_quesito_dois == 2 ? printf("Opção inválida, já foi escolhida anteriormente!"):
         printf("Vamos lá!\n");
          
     break;

    case 3:  
         printf("1-População\n");
         printf("2-Área\n");
         printf("4-Ponto Turístico\n");
         printf("5-Densidade Populacional\n");
         printf("6-PIB Per Capita\n");
         printf("7-Super Poder\n");
         printf("\n");
     
          //Escolha Opção quesito 2 a ser comparado
          printf("insira a opção válida do quesito 2 a ser comparado: ");
          scanf("%d", &opcao_quesito_dois);
          printf("\n");
     
         opcao_quesito_dois == 3 ? printf("Opção inválida, já foi escolhida anteriormente!"):
         printf("Vamos lá!\n");
          
     break;

     case 4:  
         printf("1-População\n");
         printf("2-Área\n");
         printf("3-PIB\n");
         printf("5-Densidade Populacional\n");
         printf("6-PIB Per Capita\n");
         printf("7-Super Poder\n");
         printf("\n");
     
          //Escolha Opção quesito 2 a ser comparado
          printf("insira a opção válida do quesito 2 a ser comparado: ");
          scanf("%d", &opcao_quesito_dois);
          printf("\n");
     
         opcao_quesito_dois == 4 ? printf("Opção inválida, já foi escolhida anteriormente!"):
         printf("Vamos lá!\n");
          
      break;
     case 5:  
         printf("1-População\n");
         printf("2-Área\n");
         printf("3-PIB\n");
         printf("4-Ponto Turístico\n");
         printf("6-PIB Per Capita\n");
         printf("7-Super Poder\n");
         printf("\n");
     
          //Escolha Opção quesito 2 a ser comparado
          printf("insira a opção válida do quesito 2 a ser comparado: ");
          scanf("%d", &opcao_quesito_dois);
          printf("\n");
     
         opcao_quesito_dois == 5 ? printf("Opção inválida, já foi escolhida anteriormente!"):
         printf("Vamos lá!\n");
          
      break;
    case 6:  
         printf("1-População\n");
         printf("2-Área\n");
         printf("3-PIB\n");
         printf("4-Ponto Turístico\n");
         printf("5-Densidade Populacional\n");
         printf("7-Super Poder\n");
         printf("\n");
     
          //Escolha Opção quesito 2 a ser comparado
          printf("insira a opção válida do quesito 2 a ser comparado: ");
          scanf("%d", &opcao_quesito_dois);
          printf("\n");
     
         opcao_quesito_dois == 6 ? printf("Opção inválida, já foi escolhida anteriormente!"):
         printf("Vamos lá!\n");
          
       break;
    case 7:  
         printf("1-População\n");
         printf("2-Área\n");
         printf("3-PIB\n");
         printf("4-Ponto Turístico\n");
         printf("5-Densidade Populacional\n");
         printf("6-PIB Per Capita\n");
         printf("\n");
     
          //Escolha Opção quesito 2 a ser comparado
          printf("insira a opção válida do quesito 2 a ser comparado: ");
          scanf("%d", &opcao_quesito_dois);
          printf("\n");
     
         opcao_quesito_dois == 7 ? printf("Opção inválida, já foi escolhida anteriormente!"):
         printf("Vamos lá!\n");
          
      break;

    default:
    printf("Escolha uma opção do menu válida!");
        break;
    }
   
    //Estrutura de decisões aninhadas
    switch (opcao_quesito)
    {
    case 1:  
    
    //População > maior vence
    //impressão dos dados
    printf("Quesito população: \n");
    printf("\n");
    printf("Nome do País Carta 1: %s\n", nome_do_pais);
    printf("%s %lu\n", nome_da_cidade, populacao);
    printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
    printf("%s %lu\n", nome_da_cidade_dois, populacao_dois);
    printf("Resultado: ");

    //Lógica da comparação e impressão do resultado
    if (populacao > populacao_dois){
        printf("Carta 1 venceu!");
    } else if (populacao < populacao_dois){
        printf("Carta 2 venceu!");
    } else {
        printf("Houve um empate!");
    };

    break;

    case 2:  

    //Área > maior vence
    //impressão dos dados
    printf("Quesito Área: \n");
    printf("\n");
    printf("Nome do País Carta 1: %s\n", nome_do_pais);
    printf("%s %.2f\n", nome_da_cidade, area_km);
    printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
    printf("%s %.2f\n", nome_da_cidade_dois, area_km_dois);
    printf("Resultado: ");

    //Lógica da comparação e impressão do resultado
    if (area_km > area_km_dois){
        printf("Carta 1 venceu!");
    } else if (area_km < area_km_dois){
        printf("Carta 2 venceu!");
    } else {
        printf("Houve um empate!");

    };

    break;

    case 3:  

    //PIB > maior vence
    //impressão dos dados
    printf("Quesito PIB: \n");
    printf("\n");
    printf("Nome do País Carta 1: %s\n", nome_do_pais);
    printf("%s %.2f\n", nome_da_cidade, pib);
    printf("Carta 2 - %s %.2f\n", nome_da_cidade_dois, pib_dois);
    printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
    printf("Resultado: ");

    //Lógica da comparação e impressão do resultado
    if (pib > pib_dois){
        printf("Carta 1 venceu!");
    } else if (pib < pib_dois){
        printf("Carta 2 venceu!");
    } else {
        printf("Houve um empate!");
    };

    break;

    case 4:

    //Ponto turístico > maior vence
    //impressão dos dados
    printf("Quesito Pontos Turísco: \n");
    printf("\n");
    printf("Nome do País Carta 1: %s\n", nome_do_pais);
    printf("%s %d\n", nome_da_cidade, pontos_turisticos);
    printf("\n");
    printf("Nome do País Carta 1: %s\n", nome_do_pais_dois);
    printf("%s %d\n", nome_da_cidade_dois, pontos_turisticos_dois);
    printf("Resultado: ");

    //Lógica da comparação e impressão do resultado
    if (pontos_turisticos > pontos_turisticos_dois){
        printf("Carta 1 venceu!");
    } else if (pontos_turisticos < pontos_turisticos_dois){
        printf("Carta 2 venceu!");
    } else {
        printf("Houve um empate!");

    };
 
    break;

    case 5:  

    //Densidade Populacional o < menor Vence
    //impressão dos dados
    printf("Quesito Densidade Populacional: \n");
    printf("\n");
    printf("Nome do País Carta 1: %s\n", nome_do_pais);
    printf("%s %.2f\n", nome_da_cidade, densidade_populacional);
    printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
    printf("%s %.2f\n", nome_da_cidade_dois, densidade_populacional_dois);
    printf("Resultado: ");
    
    //Lógica da comparação e impressão do resultado
    if (densidade_populacional < densidade_populacional_dois){
        printf("Carta 1 venceu!");
    } else if (densidade_populacional > densidade_populacional_dois){
        printf("Carta 2 venceu!");
    } else {
        printf("Houve um empate!");

    };
 
    break;

    case 6:

    //Per Capita > maior vence
    //impressão dos dados
    printf("Quesito Per Capita: \n");
    printf("\n");
    printf("Nome do País Carta 1: %s\n", nome_do_pais);
    printf("%s %.2f\n", nome_da_cidade, per_capita);
    printf("Nome do País Carta 2: %s\n", nome_da_cidade_dois);
    printf("%s %.2f\n", nome_da_cidade_dois, per_capita_dois);
    printf("Resultado: ");

    //Lógica da comparação e impressão do resultado
    if (per_capita > per_capita_dois){
        printf("Carta 1 venceu!");
    } else if (per_capita < per_capita_dois){
        printf("Carta 2 venceu!");
    } else {
        printf("Houve um empate!");
    };

    break;

    case 7:

    //Super Poder > maior vence
    //impressão dos dados
    printf("Quesito Super Poder: \n");
    printf("\n");
    printf("Nome do País Carta 1: %s\n", nome_do_pais);
    printf("%s %.2f\n", nome_da_cidade, super_poder);
    printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
    printf("%s %.2f\n", nome_da_cidade_dois, super_poder_dois);
    printf("Resultado: ");
    
    //Lógica da comparação e impressão do resultado
    if (super_poder > super_poder_dois){
        printf("Carta 1 venceu!");
    } else if (super_poder < super_poder_dois){
        printf("Carta 2 venceu!");
    } else {
        printf("Houve um empate!");

    };

    break;

    //Caso de opção inválida
    default:

    printf("Opção de comparação inválida!");
    
    break;
    };

      
    printf("\n");
    printf("\n");
    printf("\n");

    printf("Obrigado por jogar!");

    printf("\n");
    printf("\n");
    
    return 0;
};

