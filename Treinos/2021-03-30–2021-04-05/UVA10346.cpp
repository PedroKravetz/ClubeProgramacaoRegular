#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cigarros, bitucas, soma;
    while (scanf("%d %d", &cigarros, &bitucas) != EOF)
    {
        soma = 0;
        while (cigarros > 0)
        {
            soma += cigarros;
            cigarros = cigarros / bitucas;
        }
        printf("%d\n", soma);
    }
    return 0;
}