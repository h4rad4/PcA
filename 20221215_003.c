# include <stdio.h>

// Faça um Programa que converta metros para centímetros.

int main()
{
    float m, cm;

    printf("Input the value in meters: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("%.1fm = %.2fcm", m, cm);
    
    return 0;
}
