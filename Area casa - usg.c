#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");


    double altura_sala, largura_sala, altura_cozinha, largura_cozinha, altura_quarto, largura_quarto;
    double  area_casa;

    printf("BEM VINDO AO PROGRAMA SUA CASA M², POR FAVOR SIGA AS INSTRUÇÕES A SEGUIR\n");
    printf("=========================================================================\n");
    printf("Digite a altura da sala:");
    scanf("%lf", &altura_sala);
    printf("Digite a largura da sala:");
    scanf("%lf", &largura_sala);

    printf("Digite a altura da cozinha:");
    scanf("%lf", &altura_cozinha);
    printf("Digite a largura da cozinha:");
    scanf("%lf", &largura_cozinha);

    printf("Digite a altura da quarto:");
    scanf("%lf", &altura_quarto);
    printf("Digite a largura da quarto:");
    scanf("%lf", &largura_quarto);

    area_casa = (altura_sala * largura_sala) + (altura_cozinha * largura_cozinha) + (altura_quarto * largura_quarto);

    printf("Sua casa possui um total de  %.2lf M²", area_casa);
    return 0;
}
