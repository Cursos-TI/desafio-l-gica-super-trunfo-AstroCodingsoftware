#include <stdio.h>

int main(){
    char firstState, secondState, firstCityName[20], secondCityName[20];            //(Pega estado 1 e estado 2), definindo-os com uma letra de A a H, (e pega o nome do estado).
    char codeLetter[2][4] = {"A01", "B02"};                                         //Define o codigo da carta para cada opção.
    int firstPopulation,secondPopulation, firstTouristPoints, secondTouristPoints;  //Pega população dessa cidade e os pontos turisticos.
    float firstCityZone,secondCityZone, pib_1, pib_2;                               //Pega area da cidade em km, e o pib dessa cidade.

    //PEGANDO DADOS DO USER

    printf("Carta 1\n1. Defina o Estado com uma letra de (A e B)\nEstado [1]: ");
    scanf(" %c", &firstState);                                                      //Pegando Letra do estado 1.
    printf("Estado [2]: ");
    scanf(" %c", &secondState);                                                     //Pegando letra do estado 2.
    printf("Nome da Cidade [1]: ");
    scanf("%s", firstCityName);                                                     //Pega o nome da cidade 1.
    printf("Nome da cidade [2]: ");
    scanf("%s", secondCityName);                                                    //Pega nome da cidade 2.
    printf("População da cidade [1]: ");
    scanf("%d", &firstPopulation);                                                  //Pega pupulação da cidade 1.
    printf("População da cidade [2]: ");
    scanf("%d", &secondPopulation);                                                 //Pega pupulação da cidade 2.
    printf("Área (em km²) cidade [1]: ");
    scanf("%f", &firstCityZone);                                                    //Pega o tamnho da cidade 1.
    printf("Área (em km²) cidade [2]: ");
    scanf("%f", &secondCityZone);                                                   //Pega o tamnho da cidade 2.
    printf("PIB cidade [1]: ");
    scanf("%f", &pib_1);                                                            //Pega o PIB da cidade 1.
    printf("PIB cidade [2]: ");
    scanf("%f", &pib_2);                                                            //Pega o PIB da cidade 2.
    printf("Pontos turisticos da cidade [1]: ");
    scanf("%d", &firstTouristPoints);                                               //Pega os pontos turistivos da cidade 1.
    printf("Pontos turisticos da cidade [2]: ");
    scanf("%d", &secondTouristPoints);                                              //Pega os pontos turistivos da cidade 2.

    printf("==========================>><<==================================\n\n");  

    //MOSTRANDO DADOS AO USER

    printf("CARTA 1: 🃏\n\n");
    printf("🗽 Estado %c\n👨‍💻 Codigo: %s\n🔤 Nome da cidade: %s\n🙋 População: %d Abitantes\n🅰️ Área(em km²) %.2f km²\n💸 PIB %.3f$ (Bilhoes de reais)\n🚏 Pontos turisticos: %d\n\n", firstState, codeLetter[0], firstCityName, firstPopulation, firstCityZone, pib_1, firstTouristPoints);
    printf("CARTA 2: 🃏\n\n");
    printf("🗽 Estado %c\n👨‍💻 Codigo: %s\n🔤 Nome da cidade: %s\n🙋 População: %d Abitantes\n🅰️ Área(em km²) %.2f km²\n💸 PIB %.3f$ (Bilhoes de reais)\n🚏 Pontos turisticos: %d\n\n", secondState, codeLetter[1], secondCityName, secondPopulation, secondCityZone, pib_2, secondTouristPoints);

    return 0; //Programa finalizado!
}
