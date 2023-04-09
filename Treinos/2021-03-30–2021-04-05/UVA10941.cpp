#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vacas, carros, portasAbertas, totalPortas;
    double probabilidade;
    while (scanf("%d %d %d", &vacas, &carros, &portasAbertas) != EOF)
    {
        totalPortas = vacas + carros;
        probabilidade = 1.0 * (totalPortas - 1) * carros / (totalPortas * (totalPortas - portasAbertas - 1));
        printf("%.5lf\n", probabilidade);
    }
    return 0;
}