#include <stdio.h>

int main(){

    /*País*/
    char pais1 [50];

    /*Estado dos Países*/

    char estadoA [50];
    char estadoB [50];
    char estadoC [50];
    char estadoD [50];
    char estadoE [50];
    char estadoF [50];
    char estadoG [50];
    char estadoH [50];
    
    /* Cidades do Estado A01 ao A04 */

    char cidadeA01 [50];
    int popA01; // População
    float areaA01; // Area em M²
    float pibA01; //Pib
    int NptA01; //Numeros de pontos Turisticos

    char cidadeA02 [50];
    int popA02; // População
    float areaA02; // Area em M²
    float pibA02; //Pib
    int NptA02; //Numeros de pontos Turisticos

    char cidadeA03 [50];
    int popA03; // População
    float areaA03; // Area em M²
    float pibA03; //Pib
    int NptA03; //Numeros de pontos Turisticos
    
    char cidadeA04 [50];
    int popA04; // População
    float areaA04; // Area em M²
    float pibA04; //Pib
    int NptA04; //Numeros de pontos Turisticos

    /*Cidades do Estado B01 ao B04*/

    char cidadeB01 [50];
    int popB01; // População
    float areaB01; // Area em M²
    float pibB01; //Pib
    int NptB01; //Numeros de pontos Turisticos

    char cidadeB02 [50];
    int popB02; // População
    float areaB02; // Area em M²
    float pibB02; //Pib
    int NptB02; //Numeros de pontos Turisticos

    char cidadeB03 [50];
    int popB03; // População
    float areaB03; // Area em M²
    float pibB03; //Pib
    int NptB03; //Numeros de pontos Turisticos

    char cidadeB04 [50];
    int popB04; // População
    float areaB04; // Area em M²
    float pibB04; //Pib
    int NptB04; //Numeros de pontos Turisticos
    
     /*Cidades do Estado C01 ao C04*/

    char cidadeC01 [50];
    int popC01; // População
    float areaC01; // Area em M²
    float pibC01; //Pib
    int NptC01; //Numeros de pontos Turisticos

    char cidadeC02 [50];
    int popC02; // População
    float areaC02; // Area em M²
    float pibC02; //Pib
    int NptC02; //Numeros de pontos Turisticos

    char cidadeC03 [50];
    int popC03; // População
    float areaC03; // Area em M²
    float pibC03; //Pib
    int NptC03; //Numeros de pontos Turisticos

    char cidadeC04 [50];
    int popC04; // População
    float areaC04; // Area em M²
    float pibC04; //Pib
    int NptC04; //Numeros de pontos Turisticos

     /*Cidades do Estado D01 ao D04*/

    char cidadeD01 [50];
    int popD01; // População
    float areaD01; // Area em M²
    float pibD01; //Pib
    int NptD01; //Numeros de pontos Turisticos

    char cidadeD02 [50];
    int popD02; // População
    float areaD02; // Area em M²
    float pibD02; //Pib
    int NptD02; //Numeros de pontos Turisticos

    char cidadeD03 [50];
    int popD03; // População
    float areaD03; // Area em M²
    float pibD03; //Pib
    int NptD03; //Numeros de pontos Turisticos

    char cidadeD04 [50];
    int popD04; // População
    float areaD04; // Area em M²
    float pibD04; //Pib
    int NptD04; //Numeros de pontos Turisticos

     /*Cidades do Estado E01 ao E04*/

    char cidadeE01 [50];
    int popE01; // População
    float areaE01; // Area em M²
    float pibE01; //Pib
    int NptE01; //Numeros de pontos Turisticos

    char cidadeE02 [50];
    int popE02; // População
    float areaE02; // Area em M²
    float pibE02; //Pib
    int NptE02; //Numeros de pontos Turisticos
    
    char cidadeE03 [50];
    int popE03; // População
    float areaE03; // Area em M²
    float pibE03; //Pib
    int NptE03; //Numeros de pontos Turisticos

    char cidadeE04 [50];
    int popE04; // População
    float areaE04; // Area em M²
    float pibE04; //Pib
    int NptE04; //Numeros de pontos Turisticos

     /*Cidades do Estado F01 ao F04*/

    char cidadeF01 [50];
    int popF01; // População
    float areaF01; // Area em M²
    float pibF01; //Pib
    int NptF01; //Numeros de pontos Turisticos

    char cidadeF02 [50];
    int popF02; // População
    float areaF02; // Area em M²
    float pibF02; //Pib
    int NptF02; //Numeros de pontos Turisticos

    char cidadeF03 [50];
    int popF03; // População
    float areaF03; // Area em M²
    float pibF03; //Pib
    int NptF03; //Numeros de pontos Turisticos

    char cidadeF04 [50];
    int popF04; // População
    float areaF04; // Area em M²
    float pibF04; //Pib
    int NptF04; //Numeros de pontos Turisticos

     /*Cidades do Estado G01 ao G04*/

    char cidadeG01 [50];
    int popG01; // População
    float areaG01; // Area em M²
    float pibG01; //Pib
    int NptG01; //Numeros de pontos Turisticos

    char cidadeG02 [50];
    int popG02; // População
    float areaG02; // Area em M²
    float pibG02; //Pib
    int NptG02; //Numeros de pontos Turisticos

    char cidadeG03 [50];
    int popG03; // População
    float areaG03; // Area em M²
    float pibG03; //Pib
    int NptG03; //Numeros de pontos Turisticos

    char cidadeG04 [50];
    int popG04; // População
    float areaG04; // Area em M²
    float pibG04; //Pib
    int NptG04; //Numeros de pontos Turisticos



     /*Cidades do Estado H01 ao H04*/

    char cidadeH01 [50];
    int popH01; // População
    float areaH01; // Area em M²
    float pibH01; //Pib
    int NptH01; //Numeros de pontos Turisticos

    char cidadeH02 [50];
    int popH02; // População
    float areaH02; // Area em M²
    float pibH02; //Pib
    int NptH02; //Numeros de pontos Turisticos

    char cidadeH03 [50];
    int popH03; // População
    float areaH03; // Area em M²
    float pibH03; //Pib
    int NptH03; //Numeros de pontos Turisticos
    
    char cidadeH04 [50];
    int popH04; // População
    float areaH04; // Area em M²
    float pibH04; //Pib
    int NptH04; //Numeros de pontos Turisticos

    /*Apresentação do jogo */

    printf("Super Trunfo Desafio novato! \n");
    printf("Bem vindo ao Super Trunfo! o jogo consistem em 32 cartas, divididas em 8 estados com 4 cidades, \n");
    printf("para comecar o jogo basta adicionar as cartas. \n");

    /*Nome do País*/

    printf("insira o nome do Pais: \n");
    scanf("%s", &pais1);

    /*Nome do Estado A e suas Cidades A01 a A04 e suas atribuições*/
    /*Cidade A01*/

    printf("Insira o nome de um Estado: \n");
    scanf("%s", &estadoA);

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeA01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popA01);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaA01);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibA01);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptA01);

    /*Cidade A02*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeA02);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popA02);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaA02);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibA02);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptA02);

    /*Cidade A03*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeA03);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popA03);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaA03);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibA03);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptA03);

    /*Cidade A04*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeA04);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popA04);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaA04);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibA04);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptA04);

    /*Estado B*/
    /*Cidade B01*/

    printf("Insira o nome de um Estado: \n");
    scanf("%s", &estadoB);

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeB01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popB01);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaB01);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibB01);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptB01);

    /*Cidade B02*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeB02);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popB02);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaB02);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibB02);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptB02);

    /*Cidade B03*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeB03);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popB03);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaB03);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibB03);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptB03);

    /*Cidade B04*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeB04);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popB04);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaB04);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibB04);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptB04);

    /*Estado C*/
    /*Cidade C01*/

    printf("Insira o nome de um Estado: \n");
    scanf("%s", &estadoC);

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeC01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popC01);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaC01);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibC01);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptC01);

    /*Cidade C02*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeC02);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popC02);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaC02);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibC02);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptC02);

    /*Cidade C03*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeC03);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popC03);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaC03);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibC03);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptC03);

    /*Cidade C04*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeC04);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popC04);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaC04);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibC04);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptC04);

    /*Estado D*/
    /*Cidade D01*/

    printf("Insira o nome de um Estado: \n");
    scanf("%s", &estadoD);

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeD01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popD01);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaD01);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibD01);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptD01);

    /*Cidade D02*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeD02);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popD02);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaD02);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibD02);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptD02);

    /*Cidade D03*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeD03);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popD03);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaD03);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibD03);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptD03);

    /*Cidade C04*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeD04);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popD04);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaD04);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibD04);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptD04);

    /*Estado E*/
    /*Cidade E01*/

    printf("Insira o nome de um Estado: \n");
    scanf("%s", &estadoE);

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeE01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popE01);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaE01);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibE01);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptE01);

    /*Cidade E02*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeE02);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popE02);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaE02);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibE02);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptE02);

    /*Cidade E03*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeE03);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popE03);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaE03);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibE03);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptE03);

    /*Cidade E04*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeE04);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popE04);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaE04);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibE04);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptE04);

    /*Estado F*/
    /*Cidade F01*/

    printf("Insira o nome de um Estado: \n");
    scanf("%s", &estadoF);

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeF01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popF01);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaF01);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibF01);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptF01);

    /*Cidade F02*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeF02);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popF02);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaF02);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibF02);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptF02);

    /*Cidade F03*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeF03);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popF03);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaF03);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibF03);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptF03);

    /*Cidade F04*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeF04);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popF04);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaF04);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibF04);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptF04);

    /*Estado G*/
    /*Cidade G01*/

    printf("Insira o nome de um Estado: \n");
    scanf("%s", &estadoG);

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeG01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popG01);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaG01);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibG01);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptG01);

    /*Cidade G02*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeG01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popG02);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaG02);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibG02);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptG02);

    /*Cidade G03*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeG03);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popG03);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaG03);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibG03);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptG03);

    /*Cidade G04*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeG04);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popG04);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaG04);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibG04);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptG04);

    /*Estado H*/
    /*Cidade H01*/

    printf("Insira o nome de um Estado: \n");
    scanf("%s", &estadoH);

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeH01);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popH01);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaH01);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibH01);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptH01);

    /*Cidade H02*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeH02);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popH02);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaH02);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibH02);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptH02);

    /*Cidade H03*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeH03);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popH03);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaH03);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibH03);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptH03);

    /*Cidade H04*/

    printf("Insira o nome de uma cidade: \n");
    scanf("%s", &cidadeH04);

    printf("Insira a Populacao da cidade: \n");
    scanf("%d", &popH04);

    printf ("Insira a Area da cidade: \n");
    scanf ("%f", &areaH04);
    
    printf ("Insira o Pib da cidade: \n");
    scanf ("%f", &pibH04);

    printf ("Insira quantos Pontos Turiscos tem a cidade: \n");
    scanf ("%d", &NptH04);

    /*----------------------------------------------------------*/

    /*Resultados Estado A e suas Cidades*/

    printf ("---------------- \n");

    printf("Estado A: %s \n", estadoA);
    printf("Cidade A01: %s \n", cidadeA01);
    printf("Populacao: %d \n", popA01);
    printf("Area: %f \n", areaA01);
    printf("Pib: %f \n", pibA01);
    printf("Pontos Turisticos %d \n", NptA01);

    printf ("---------------- \n");
    
    printf("Estado A: %s \n", estadoA);
    printf("Cidade A02: %s \n", cidadeA02);
    printf("Populacao: %d \n", popA02);
    printf("Area: %f \n", areaA02);
    printf("Pib: %f \n", pibA02);
    printf("Pontos Turisticos %d \n", NptA02);

    printf ("---------------- \n");
   
    printf("Estado A: %s \n", estadoA);
    printf("Cidade A03: %s \n", cidadeA03);
    printf("Populacao: %d \n", popA03);
    printf("Area: %f \n", areaA03);
    printf("Pib: %f \n", pibA03);
    printf("Pontos Turisticos %d \n", NptA03);

    printf ("---------------- \n");
   
    printf("Estado A: %s \n", estadoA);
    printf("Cidade A04: %s \n", cidadeA04);
    printf("Populacao: %d \n", popA04);
    printf("Area: %f \n", areaA04);
    printf("Pib: %f \n", pibA04);
    printf("Pontos Turisticos %d \n", NptA04);

    printf ("---------------- \n");

    /*Estado B e suas Cidades*/

    printf("Estado B: %s \n", estadoB);
    printf("Cidade B01: %s \n", cidadeB01);
    printf("Populacao: %d \n", popB01);
    printf("Area: %f \n", areaB01);
    printf("Pib: %f \n", pibB01);
    printf("Pontos Turisticos %d \n", NptB01);

    printf ("---------------- \n");

    printf("Estado B: %s \n", estadoB);
    printf("Cidade B02: %s \n", cidadeB02);
    printf("Populacao: %d \n", popB02);
    printf("Area: %f \n", areaB02);
    printf("Pib: %f \n", pibB02);
    printf("Pontos Turisticos %d \n", NptB02);

    printf ("---------------- \n");

    printf("Estado B: %s \n", estadoB);
    printf("Cidade B03: %s \n", cidadeB03);
    printf("Populacao: %d \n", popB03);
    printf("Area: %f \n", areaB03);
    printf("Pib: %f \n", pibB03);
    printf("Pontos Turisticos %d \n", NptB03);

    printf ("---------------- \n");

    printf("Estado B: %s \n", estadoB);
    printf("Cidade B04: %s \n", cidadeB04);
    printf("Populacao: %d \n", popB04);
    printf("Area: %f \n", areaB04);
    printf("Pib: %f \n", pibB04);
    printf("Pontos Turisticos %d \n", NptB04);

    printf ("---------------- \n");

    /*Estado C e suas Cidades*/

    printf("Estado C: %s \n", estadoC);
    printf("Cidade C01: %s \n", cidadeC01);
    printf("Populacao: %d \n", popC01);
    printf("Area: %f \n", areaC01);
    printf("Pib: %f \n", pibC01);
    printf("Pontos Turisticos %d \n", NptC01);

    printf ("---------------- \n");

    printf("Estado C: %s \n", estadoC);
    printf("Cidade C02: %s \n", cidadeC02);
    printf("Populacao: %d \n", popC02);
    printf("Area: %f \n", areaC02);
    printf("Pib: %f \n", pibC02);
    printf("Pontos Turisticos %d \n", NptC02);

    printf ("---------------- \n");

    printf("Estado C: %s \n", estadoC);
    printf("Cidade C03: %s \n", cidadeC03);
    printf("Populacao: %d \n", popC03);
    printf("Area: %f \n", areaC03);
    printf("Pib: %f \n", pibC03);
    printf("Pontos Turisticos %d \n", NptC03);

    printf ("---------------- \n");

    printf("Estado C: %s \n", estadoC);
    printf("Cidade C04: %s \n", cidadeC04);
    printf("Populacao: %d \n", popC04);
    printf("Area: %f \n", areaC04);
    printf("Pib: %f \n", pibC04);
    printf("Pontos Turisticos %d \n", NptC04);

    printf ("---------------- \n");

    /*Estado D e suas Cidades*/

    printf("Estado D: %s \n", estadoD);
    printf("Cidade D01: %s \n", cidadeD01);
    printf("Populacao: %d \n", popD01);
    printf("Area: %f \n", areaD01);
    printf("Pib: %f \n", pibD01);
    printf("Pontos Turisticos %d \n", NptD01);

    printf ("---------------- \n");

    printf("Estado D: %s \n", estadoD);
    printf("Cidade D02: %s \n", cidadeD02);
    printf("Populacao: %d \n", popD02);
    printf("Area: %f \n", areaD02);
    printf("Pib: %f \n", pibD02);
    printf("Pontos Turisticos %d \n", NptD02);

    printf ("---------------- \n");


    printf("Estado D: %s \n", estadoD);
    printf("Cidade D03: %s \n", cidadeD03);
    printf("Populacao: %d \n", popD03);
    printf("Area: %f \n", areaD03);
    printf("Pib: %f \n", pibD03);
    printf("Pontos Turisticos %d \n", NptD03);

    printf ("---------------- \n");

    printf("Estado D: %s \n", estadoD);
    printf("Cidade D04: %s \n", cidadeD04);
    printf("Populacao: %d \n", popD04);
    printf("Area: %f \n", areaD04);
    printf("Pib: %f \n", pibD04);
    printf("Pontos Turisticos %d \n", NptD04);

    printf ("---------------- \n");

    /*Estado E e suas cidades*/

    printf("Estado E: %s \n", estadoE);
    printf("Cidade E01: %s \n", cidadeE01);
    printf("Populacao: %d \n", popE01);
    printf("Area: %f \n", areaE01);
    printf("Pib: %f \n", pibE01);
    printf("Pontos Turisticos %d \n", NptE01);

    printf ("---------------- \n");

    printf("Estado E: %s \n", estadoE);
    printf("Cidade E02: %s \n", cidadeE02);
    printf("Populacao: %d \n", popE02);
    printf("Area: %f \n", areaE02);
    printf("Pib: %f \n", pibE02);
    printf("Pontos Turisticos %d \n", NptE02);

    printf ("---------------- \n");

    printf("Estado E: %s \n", estadoE);
    printf("Cidade E03: %s \n", cidadeE03);
    printf("Populacao: %d \n", popE03);
    printf("Area: %f \n", areaE03);
    printf("Pib: %f \n", pibE03);
    printf("Pontos Turisticos %d \n", NptE03);

    printf ("---------------- \n");

    printf("Estado E: %s \n", estadoE);
    printf("Cidade E04: %s \n", cidadeE04);
    printf("Populacao: %d \n", popE04);
    printf("Area: %f \n", areaE04);
    printf("Pib: %f \n", pibE04);
    printf("Pontos Turisticos %d \n", NptE04);

    printf ("---------------- \n");

    /*Estado F e suas Cidades*/

    printf("Estado F: %s \n", estadoF);
    printf("Cidade F01: %s \n", cidadeF01);
    printf("Populacao: %d \n", popF01);
    printf("Area: %f \n", areaF01);
    printf("Pib: %f \n", pibF01);
    printf("Pontos Turisticos %d \n", NptF01);

    printf ("---------------- \n");

    printf("Estado F: %s \n", estadoF);
    printf("Cidade F02: %s \n", cidadeF02);
    printf("Populacao: %d \n", popF02);
    printf("Area: %f \n", areaF02);
    printf("Pib: %f \n", pibF02);
    printf("Pontos Turisticos %d \n", NptF02);

    printf ("---------------- \n");

    printf("Estado F: %s \n", estadoF);
    printf("Cidade F03: %s \n", cidadeF03);
    printf("Populacao: %d \n", popF03);
    printf("Area: %f \n", areaF03);
    printf("Pib: %f \n", pibF03);
    printf("Pontos Turisticos %d \n", NptF03);

    printf ("---------------- \n");

    printf("Estado F: %s \n", estadoF);
    printf("Cidade F04: %s \n", cidadeF04);
    printf("Populacao: %d \n", popF04);
    printf("Area: %f \n", areaF04);
    printf("Pib: %f \n", pibF04);
    printf("Pontos Turisticos %d \n", NptF04);

    printf ("---------------- \n");

    /*Estado G e suas Cidades*/

    
    printf("Estado G: %s \n", estadoG);
    printf("Cidade G01: %s \n", cidadeG01);
    printf("Populacao: %d \n", popG01);
    printf("Area: %f \n", areaG01);
    printf("Pib: %f \n", pibG01);
    printf("Pontos Turisticos %d \n", NptG01);

    printf ("---------------- \n");

    printf("Estado G: %s \n", estadoG);
    printf("Cidade G02: %s \n", cidadeG02);
    printf("Populacao: %d \n", popG02);
    printf("Area: %f \n", areaG02);
    printf("Pib: %f \n", pibG02);
    printf("Pontos Turisticos %d \n", NptG02);

    printf ("---------------- \n");

    printf("Estado G: %s \n", estadoG);
    printf("Cidade G03: %s \n", cidadeG03);
    printf("Populacao: %d \n", popG03);
    printf("Area: %f \n", areaG03);
    printf("Pib: %f \n", pibG03);
    printf("Pontos Turisticos %d \n", NptG03);

    printf ("---------------- \n");

    printf("Estado G: %s \n", estadoG);
    printf("Cidade G04: %s \n", cidadeG04);
    printf("Populacao: %d \n", popG04);
    printf("Area: %f \n", areaG04);
    printf("Pib: %f \n", pibG04);
    printf("Pontos Turisticos %d \n", NptG04);

    printf ("---------------- \n");

    /*Estado H e suas Cidades*/

    printf("Estado H: %s \n", estadoH);
    printf("Cidade H01: %s \n", cidadeH01);
    printf("Populacao: %d \n", popH01);
    printf("Area: %f \n", areaH01);
    printf("Pib: %f \n", pibH01);
    printf("Pontos Turisticos %d \n", NptH01);

    printf ("---------------- \n");

    printf("Estado H: %s \n", estadoH);
    printf("Cidade H02: %s \n", cidadeH02);
    printf("Populacao: %d \n", popH02);
    printf("Area: %f \n", areaH02);
    printf("Pib: %f \n", pibH02);
    printf("Pontos Turisticos %d \n", NptH02);

    printf ("---------------- \n");

    printf("Estado H: %s \n", estadoH);
    printf("Cidade H03: %s \n", cidadeH03);
    printf("Populacao: %d \n", popH03);
    printf("Area: %f \n", areaH03);
    printf("Pib: %f \n", pibH03);
    printf("Pontos Turisticos %d \n", NptH03);

    printf ("---------------- \n");

    printf("Estado H: %s \n", estadoH);
    printf("Cidade H04: %s \n", cidadeH04);
    printf("Populacao: %d \n", popH04);
    printf("Area: %f \n", areaH04);
    printf("Pib: %f \n", pibH04);
    printf("Pontos Turisticos %d \n", NptH04);

    printf ("---------------- \n");


return 0;


}