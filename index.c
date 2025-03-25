#include <stdio.h>

// Estruturando variaveis

typedef struct
{
    char firstState, secondState, firstCityName[20], secondCityName[20]; //(Pega estado 1 e estado 2), definindo-os com uma letra de A a H, (e pega o nome do estado).
    int firstPopulation, secondPopulation, firstTouristPoints, secondTouristPoints; // Pega população dessa cidade e os pontos turisticos.
    float firstCityZone, secondCityZone, pib_1, pib_2;                              // Pega area da cidade em km, e o pib dessa cidade.
    float desityPopulation_1, densityPopulation_2, PIB_per_Capita_1, PIB_per_Capita_2; // calcula pib e população por hab/km²
} exportVariable;

// Pedindo dados do User

void requireData(exportVariable *data)
{
    printf("Carta 1\n1. Defina o Estado com uma letra de (A e B)\nEstado [1]: ");
    scanf(" %c", &data->firstState); // Pegando Letra do estado 1.
    printf("Estado [2]: ");
    scanf(" %c", &data->secondState); // Pegando letra do estado 2.
    
    printf("Nome da Cidade [1]: ");
    scanf("%s", &data->firstCityName); // Pega o nome da cidade 1.
    printf("Nome da cidade [2]: ");
    scanf("%s", data->secondCityName); // Pega nome da cidade 2.

    printf("População da cidade [1]: ");
    scanf("%d", &data->firstPopulation); // Pega pupulação da cidade 1.
    printf("População da cidade [2]: ");
    scanf("%d", &data->secondPopulation); // Pega pupulação da cidade 2.

    printf("Área (em km²) cidade [1]: ");
    scanf("%f", &data->firstCityZone); // Pega o tamnho da cidade 1.
    printf("Área (em km²) cidade [2]: ");
    scanf("%f", &data->secondCityZone); // Pega o tamnho da cidade 2.

    printf("PIB cidade [1]: ");
    scanf("%f", &data->pib_1); // Pega o PIB da cidade 1.
    printf("PIB cidade [2]: ");
    scanf("%f", &data->pib_2); // Pega o PIB da cidade 2.

    printf("Pontos turisticos da cidade [1]: ");
    scanf("%d", &data->firstTouristPoints); // Pega os pontos turistivos da cidade 1.
    printf("Pontos turisticos da cidade [2]: ");
    scanf("%d", &data->secondTouristPoints); // Pega os pontos turistivos da cidade 2.
}

void calculation(exportVariable *resulted, exportVariable *data)
{
    resulted->desityPopulation_1 = (data->firstPopulation / data->firstCityZone);   // calcula a medida Populacional da cidade 1.
    resulted->densityPopulation_2 = (data->secondPopulation / data->secondCityZone); // calcula a medida Populacional da cidade 2.
    resulted->PIB_per_Capita_1 = (data->pib_1 / data->firstPopulation);              // calcula a medida Populacional do pib da cidade 1.
    resulted->PIB_per_Capita_2 = (data->pib_2 / data->secondPopulation);             // calcula a medida Populacional do pib da cidade 2.
}

void exitData(exportVariable *resulted, exportVariable *data)
{
    char codeLetter[2][4] = {"A01", "B02"}; // exibe o codigo da carta
    printf("CARTA 1: 🃏\n\n");
    printf("🗽 Estado %c\n👨‍💻 Codigo: %s\n🔤 Nome da cidade: %s\n🙋 População: %d Habitantes\n🅰️ Área(em km²) %.2f km²\n💸 PIB %.2f$ (Bilhoes de reais)\n🚏 Pontos turisticos: %d\n🙎‍♂️ Densidade Populacional: %.3f hab/km²\n💹 PIB per Capita: %.3f$\n\n", data->firstState, codeLetter[0], data->firstCityName, data->firstPopulation, data->firstCityZone, data->pib_1, data->firstTouristPoints, resulted->desityPopulation_1, resulted->PIB_per_Capita_1);
    printf("CARTA 2: 🃏\n\n");
    printf("🗽 Estado %c\n👨‍💻 Codigo: %s\n🔤 Nome da cidade: %s\n🙋 População: %d Habitantes\n🅰️ Área(em km²) %.2f km²\n💸 PIB %.2f$ (Bilhoes de reais)\n🚏 Pontos turisticos: %d\n🙎‍♂️ Densidade Populacional: %.2f hab/km²\n💹 PIB per Capita: %.3f$\n\n", data->secondState, codeLetter[0], data->secondCityName, data->secondPopulation, data->secondCityZone, data->pib_2, data->secondTouristPoints, resulted->densityPopulation_2, resulted->PIB_per_Capita_2);
}

int main()
{
    exportVariable data;
    exportVariable resulted;
    requireData(&data);
    calculation(&resulted, &data);
    exitData(&resulted, &data);
    return 0;
}