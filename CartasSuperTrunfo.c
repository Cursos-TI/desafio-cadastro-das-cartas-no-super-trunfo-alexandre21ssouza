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
    int resultado_um;
    int resultado_dois;

    //Variável de soma dos valores dos atributos para cada carta.
    float valor_carta_um_atributo_um;
    float valor_carta_um_atributo_dois;
    float valor_carta_dois_atributo_um;
    float valor_carta_dois_atributo_dois;
    float soma_um;
    float soma_dois;
   
    // Apresentando o jogo e Solicitandp ao usuário que insira as informações dos dados.
    printf("---------------------BEM-VINDO AO JOGO DE CARTAS SUPER TRUNFO---------------------\n\n");
    printf("VAMOS COMEÇAR!\n");

    // Usando função printf com \n para saltar linhas, para organizar mais os dados exibidos.
    printf("\n");

    // Utilizando a função scanf para capturar as entradas do usuário para cada atributo.
    // Usando a função fgets para ter acesso a países com nomes compostos.
    // Usando a função printf para mostrar os dados em tela.
    printf("Prepare-se para inserir as informações das Cartas:\n\n");

    // Cadastro da Carta:
    //Carta 1
    printf("---------------------CADASTRO DAS CARTAS---------------------\n\n\n\n");
    printf("-------Cadastre a carta número 1-------------\n\n");
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

    printf("-------Cadastre a carta número 2-------------\n");
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
    printf("---------------------CARTAS IMPRESSAS---------------------\n");
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


    printf("\n\n");
    
    printf("---------------------ÁREA DE COMBATE---------------------\n\n\n");

    printf("---------------------ESCOLHA OS QUESITOS DE BATALHA---------------------\n\n");
    // Local da lógica de Comparação dos Atributos das Cartas 1 e 2: 
    //Menu de Opções de comparação
    printf("-------Menu de combate de quesitos das Cartas------- \n\n");

    printf("Escolha duas opções válidas que represente os quesitos a serem Comparados no desfio!\n\n");
    printf("Quesitos 1:\n");
    printf("1-População\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Ponto Turístico\n");
    printf("5-Densidade Populacional\n");
    printf("6-PIB Per Capita\n");
    printf("7-Super Poder\n");
    printf("\n\n");

    
    //inserindo as 2 opções desejada do menu
    //Opção 1
    printf("Insira a opção válida do quesito 1 a ser comparado: ");
    scanf("%d", &opcao_quesito);
    printf("\n");

    /*Variável resultado_um, armazena da opção_quesito selecionada, para ser usado 
    no switch de comparação de atributos mais a frente no projeto, sendo assim, 
     um código mais claro e de melhor reparo. 
      */
    resultado_um = opcao_quesito;
    printf("Quesitos2:\n");

    switch (opcao_quesito){
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


    /*Variável resultado_dois, armazena da opção_quesito selecionada, para ser usado 
    no switch de comparação de atributos mais a frente no projeto, sendo assim, 
     um código mais claro e de melhor reparo. 
     */
     resultado_dois = opcao_quesito_dois;

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
     
           /*Variável resultado_dois, armazena da opção_quesito selecionada, para ser usado 
    no switch de comparação de atributos mais a frente no projeto, sendo assim, 
     um código mais claro e de melhor reparo. 
     */
     resultado_dois = opcao_quesito_dois;

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
          
           /*Variável resultado_dois, armazena da opção_quesito selecionada, para ser usado 
    no switch de comparação de atributos mais a frente no projeto, sendo assim, 
     um código mais claro e de melhor reparo. 
     */
     resultado_dois = opcao_quesito_dois;
     
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
          
           /*Variável resultado_dois, armazena da opção_quesito selecionada, para ser usado 
    no switch de comparação de atributos mais a frente no projeto, sendo assim, 
     um código mais claro e de melhor reparo. 
     */
    resultado_dois = opcao_quesito_dois;
     
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
          
           /*Variável resultado_dois, armazena da opção_quesito selecionada, para ser usado 
    no switch de comparação de atributos mais a frente no projeto, sendo assim, 
     um código mais claro e de melhor reparo. 
     */
    resultado_dois = opcao_quesito_dois;
     
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
          
           /*Variável resultado_dois, armazena da opção_quesito selecionada, para ser usado 
    no switch de comparação de atributos mais a frente no projeto, sendo assim, 
     um código mais claro e de melhor reparo. 
     */
    resultado_dois = opcao_quesito_dois;
     
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
          
           /*Variável resultado_dois, armazena da opção_quesito selecionada, para ser usado 
    no switch de comparação de atributos mais a frente no projeto, sendo assim, 
     um código mais claro e de melhor reparo. 
     */
    resultado_dois = opcao_quesito_dois;
     
         opcao_quesito_dois == 7 ? printf("Opção inválida, já foi escolhida anteriormente!"):
         printf("Vamos lá!\n");
          
      break;

    default:
    printf("Escolha uma opção do menu válida!");
        break;
    }
   
    //Estrutura de comparação de quesitos / decisões aninhadas
    printf("---------------------DUELO DE QUESITOS INDIVIDUAIS SELECIONADOS---------------------\n");
    printf("\n");

    printf("---------QUESITO 1 ---------\n");
    //Variável resultado_um sendo usada
    switch (resultado_um)
    {
        case 1:
    
        // População > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Primeiro quesito\n");
        printf("Quesito: População\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("População: %lu\n\n", populacao);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("População: %lu\n", populacao_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 1 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (populacao > populacao_dois) {
            printf("Carta 1 venceu!\n");
        } else if (populacao < populacao_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 2:
        
        // Área > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Primeiro quesito\n");
        printf("Quesito: Área\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("Área: %.2f km²\n\n", area_km);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("Área: %.2f km²\n", area_km_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 1 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (area_km > area_km_dois) {
            printf("Carta 1 venceu!\n");
        } else if (area_km < area_km_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 3:
        
        // PIB > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Primeiro quesito\n");
        printf("Quesito: PIB\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("PIB: %.2f\n\n", pib);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("PIB: %.2f\n", pib_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 1 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (pib > pib_dois) {
            printf("Carta 1 venceu!\n");
        } else if (pib < pib_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 4:
        
        // Pontos turísticos > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Primeiro quesito\n");
        printf("Quesito: Pontos Turísticos\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("Pontos Turísticos: %d\n\n", pontos_turisticos);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("Pontos Turísticos: %d\n", pontos_turisticos_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 1 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (pontos_turisticos > pontos_turisticos_dois) {
            printf("Carta 1 venceu!\n");
        } else if (pontos_turisticos < pontos_turisticos_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 5:
        
        // Densidade Populacional < menor vence
        //Impressão dos dados do quesito:
        printf("Comparação do Primeiro quesito\n");
        printf("Quesito: Densidade Populacional\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("Densidade Populacional: %.2f\n\n", densidade_populacional);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("Densidade Populacional: %.2f\n", densidade_populacional_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 1 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (densidade_populacional < densidade_populacional_dois) {
            printf("Carta 1 venceu!\n");
        } else if (densidade_populacional > densidade_populacional_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 6:
        
        // Per Capita > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Primeiro quesito\n");
        printf("Quesito: Per Capita\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("Per Capita: %.2f\n\n", per_capita);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("Per Capita: %.2f\n", per_capita_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 1 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (per_capita > per_capita_dois) {
            printf("Carta 1 venceu!\n");
        } else if (per_capita < per_capita_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    case 7:

        //Super Poder > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Primeiro quesito\n");
        printf("Quesito Super Poder: \n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n ", nome_da_cidade);
        printf("Super Poder: %.2f\n\n", super_poder);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n ", nome_da_cidade_dois);
        printf("Super Poder: %.2f\n\n",super_poder_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 1 individual selecionado: ");
        
        //Lógica da comparação e impressão do resultado
        if (super_poder > super_poder_dois){
            printf("Carta 1 venceu!");
        } else if (super_poder < super_poder_dois){
            printf("Carta 2 venceu!");
        } else {
            printf("Houve um empate!");
    
        };
    
    break;
    
     default:
        printf("Opção de comparação inválida!\n");
     break;
    };
    

    printf("\n");
    printf("---------QUESITO 2 ---------\n");
    printf("\n");


    //Variável resultado_dois sendo usada
    switch (resultado_dois)
    {
        case 1:
        // População > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Segundo quesito\n");
        printf("Quesito: População\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("População: %lu\n\n", populacao);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("População: %lu\n", populacao_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 2 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (populacao > populacao_dois) {
            printf("Carta 1 venceu!\n");
        } else if (populacao < populacao_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 2:
        
        // Área > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Segundo quesito\n");
        printf("Quesito: Área\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("Área: %.2f km²\n\n", area_km);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("Área: %.2f km²\n", area_km_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 2 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (area_km > area_km_dois) {
            printf("Carta 1 venceu!\n");
        } else if (area_km < area_km_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 3:
        
        // PIB > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Segundo quesito\n");
        printf("Quesito: PIB\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("PIB: %.2f\n\n", pib);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("PIB: %.2f\n", pib_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 2 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (pib > pib_dois) {
            printf("Carta 1 venceu!\n");
        } else if (pib < pib_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 4:
        
        // Pontos turísticos > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Segundo quesito\n");
        printf("Quesito: Pontos Turísticos\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("Pontos Turísticos: %d\n\n", pontos_turisticos);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("Pontos Turísticos: %d\n", pontos_turisticos_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 2 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (pontos_turisticos > pontos_turisticos_dois) {
            printf("Carta 1 venceu!\n");
        } else if (pontos_turisticos < pontos_turisticos_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 5:
        
        // Densidade Populacional < menor vence
        //Impressão dos dados do quesito:
        printf("Comparação do Segundo quesito\n");
        printf("Quesito: Densidade Populacional\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("Densidade Populacional: %.2f\n\n", densidade_populacional);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("Densidade Populacional: %.2f\n", densidade_populacional_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 2 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (densidade_populacional < densidade_populacional_dois) {
            printf("Carta 1 venceu!\n");
        } else if (densidade_populacional > densidade_populacional_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    
        case 6:
        
        // Per Capita > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Segundo quesito\n");
        printf("Quesito: Per Capita\n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("Per Capita: %.2f\n\n", per_capita);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n", nome_da_cidade_dois);
        printf("Per Capita: %.2f\n", per_capita_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 2 individual selecionado: ");
        
         //Lógica da comparação e impressão do resultado
        if (per_capita > per_capita_dois) {
            printf("Carta 1 venceu!\n");
        } else if (per_capita < per_capita_dois) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Houve um empate!\n");
        }
        break;
    case 7:

        //Super Poder > maior vence
        //Impressão dos dados do quesito:
        printf("Comparação do Segundo quesito\n");
        printf("Quesito Super Poder: \n\n");
        printf("---------CARTA 1 ---------\n");
        printf("Nome do País Carta 1: %s\n", nome_do_pais);
        printf("Nome da Cidade: %s\n ", nome_da_cidade);
        printf("Super Poder: %.2f\n\n", super_poder);
        printf("---------CARTA 2 ---------\n");
        printf("Nome do País Carta 2: %s\n", nome_do_pais_dois);
        printf("Nome da Cidade: %s\n ", nome_da_cidade_dois);
        printf("Super Poder: %.2f\n\n",super_poder_dois);
        printf("\n\n\n");
        printf("# Resultado da comparação do quesito 2 individual selecionado: ");
        
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

        printf("Opção de comparação inválida!\n");

    break;
};

      
    printf("\n");
    printf("\n");
    printf("\n");

    printf("---------DUELO DA SOMA DOS QUESITOS INDIVIDUAIS DE CADA CARTA---------\n\n\n");
//Preparando as variáveis para calcular a soma
    printf("Vamos somar os quesitos de cada carta, o maior vence!!!\n\n\n");
    printf("---------QUESITO 1 DE COMPARAÇÃO---------\n");
    
//buscando os quesitos selecionados, para atribuir as váriáveis de valores para somar
switch (resultado_um){
    case 1:
   /* Se resultado_um for 1 ou outro valor abaixo, as variáveis
   valor_carta_um_atributo_um e valor_carta_dois_atributo_um 
   receberão o valor correspondente ao quesito selecionado.
   
   Após essa atribuição, o programa executará o próximo switch,
   que verificará resultado_dois e atribuirá o valor ao segundo
   quesito a ser somado. */
    printf("Quesitos comparados: População\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("População: %lu\n", populacao);
    printf("\n");    
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("População: %lu\n", populacao_dois);

    valor_carta_um_atributo_um = populacao;   
    valor_carta_dois_atributo_um = populacao_dois;
             
    break;

    case 2:
    printf("Quesitos comparados: Área\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("Área: %.2f km²\n\n", area_km);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("Área: %.2f km²\n\n", area_km);

     valor_carta_um_atributo_um = area_km;
     valor_carta_dois_atributo_um = area_km_dois;
    
    break;

    case 3:
    printf("Quesitos comparados: PIB\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("PIB: %.2f\n\n", pib);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("PIB: %.2f\n\n"), pib_dois;

    valor_carta_um_atributo_um = pib;
    valor_carta_dois_atributo_um = pib_dois;

    break;

    case 4:
    printf("Quesitos comparados: Pontos Turísticos\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_dois);

    valor_carta_um_atributo_um = pontos_turisticos;
    valor_carta_dois_atributo_um = pontos_turisticos_dois;

    break;

    case 5:
    printf("Quesitos comparados: Densidade Populacional\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional_dois);

    valor_carta_um_atributo_um = densidade_populacional;
    valor_carta_dois_atributo_um = densidade_populacional_dois;

    break;

    case 6:
    printf("Quesitos comparados: PIB Per Capita\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("PIB per capita: %.2f reais \n", per_capita);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("PIB per capita: %.2f reais \n", per_capita);

    valor_carta_um_atributo_um = per_capita;
    valor_carta_dois_atributo_um = per_capita_dois;

    break;

    case 7:
    printf("Quesitos comparados: Super poder\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("Super Poder: %.2f\n", super_poder);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("Super Poder: %.2f\n", super_poder_dois);

    valor_carta_um_atributo_um = super_poder;
    valor_carta_dois_atributo_um = super_poder_dois;

    break;

    default:
     printf("Opção 1 de soma invalida!");
    break;
}

printf("\n\n");
printf("---------QUESITO 2 DE COMPARAÇÃO---------\n");
//Switch seguinte
switch (resultado_dois){
    case 1:
    printf("Quesitos comparados: População\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("População: %lu\n", populacao);
    printf("\n");    
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("População: %lu\n", populacao_dois);

    valor_carta_um_atributo_dois = populacao;   
    valor_carta_dois_atributo_dois = populacao_dois;
             
    break;

    case 2:
    printf("Quesitos comparados: Área\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("Área: %.2f km²\n\n", area_km);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("Área: %.2f km²\n\n", area_km);

    valor_carta_um_atributo_dois = area_km;
    valor_carta_dois_atributo_dois = area_km_dois;
    
    break;

    case 3:
    printf("Quesitos comparados: PIB\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("PIB: %.2f\n\n", pib);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("PIB: %.2f\n\n"), pib_dois;

    valor_carta_um_atributo_dois = pib;
    valor_carta_dois_atributo_dois = pib_dois;

    break;

    case 4:
    printf("Quesitos comparados: Pontos Turísticos\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_dois);

    valor_carta_um_atributo_dois = pontos_turisticos;
    valor_carta_dois_atributo_dois = pontos_turisticos_dois;

    break;

    case 5:
    printf("Quesitos comparados: Densidade Populacional\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional_dois);

    valor_carta_um_atributo_dois = densidade_populacional;
    valor_carta_dois_atributo_dois = densidade_populacional_dois;

    break;

    case 6:
    printf("Quesitos comparados: PIB Per Capita\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("PIB per capita: %.2f reais \n", per_capita);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("PIB per capita: %.2f reais \n", per_capita);

    valor_carta_um_atributo_dois = per_capita;
    valor_carta_dois_atributo_dois = per_capita_dois;

    break;

    case 7:
    printf("Quesitos comparados: Super poder\n\n");
    printf("Nome do País carta 1: %s", nome_do_pais);
    printf("Super Poder: %.2f\n", super_poder);
    printf("\n");
    printf("Nome do País carta 2: %s", nome_do_pais_dois);
    printf("Super Poder: %.2f\n", super_poder_dois);

    valor_carta_um_atributo_dois = super_poder;
    valor_carta_dois_atributo_dois = super_poder_dois;

    break;

    default:
    printf("Opção 2 de soma invalida!");
    break;
}

    printf("\n\n");
    printf("---------------RESULTADO DA SOMA DOS 2 ATRIBUTOS SELECIONÁDOS---------------\n\n");
    
    //Soma dos valores dos 2 quesitos da carta 1.
    printf("---------Soma dos 2 quesitos da carta 1---------\n\n");
    soma_um =(float) valor_carta_um_atributo_um + valor_carta_um_atributo_dois;
    printf("Resultado da soma dos 2 quesitos carta 1: %.2f\n\n\n", soma_um);


    //Soma dos valores dos 2 quesitos da carta 2.
    printf("---------Soma dos 2 quesitos carta 2--------\n\n");
    soma_dois =(float) valor_carta_dois_atributo_um + valor_carta_dois_atributo_dois;
    printf("Resultado da soma dos 2 quesitos carta 2: %.2f\n\n", soma_dois);


    //Resultado final geral Carta vencedora
    printf("--------------Carta vencedora na soma dos 2 quesitos selecionados--------------\n\n");
    if (soma_um > soma_dois){
        printf("Carta 1 venceu na soma dos 2 quesitos selecionados!");
    } else if (soma_um < soma_dois){
        printf("Carta 2 venceu na soma dos 2 quesitos selecionados!");
    } else{
        printf("Houve um empate na soma dos quesitos selecionados das duas cartas!");
    }
    
    

     
    printf("\n\n");
  

    printf("Obrigado por jogar!");

    printf("\n\n");
    
    return 0;
};


