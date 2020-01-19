#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    double altura;
    double pesoIdeal;
    char sexo[1];
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Informe sua altura. Ex: 1,75\n");
    scanf("%lf", &altura);
    wprintf(L"Informe o sexo. M ou F\n");
    scanf("%s", sexo);
    if (strcmp(sexo, "M") == 0) {
        pesoIdeal = (72.7 * altura) - 58;
        wprintf(L"Por ser do sexo masculino, seu peso ideal é %lf kg", pesoIdeal);
    } else if (strcmp(sexo, "F") == 0) {
        pesoIdeal = (62.1 * altura) - 44.7;
        wprintf(L"Por ser do sexo feminino, seu peso ideal é %lf kg", pesoIdeal);
    } else {
        wprintf(L"Erro. Informe M para masculino ou F para feminino");
    }
    return 0;
}
