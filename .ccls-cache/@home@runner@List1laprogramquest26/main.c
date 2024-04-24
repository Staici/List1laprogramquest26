#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    // Recebe as coordenadas dos dois pontos
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calcula a distância usando a fórmula fornecida
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // Imprime o resultado
    printf("A distância entre os dois pontos é: %.2f\n", distancia);

    return 0;
}
