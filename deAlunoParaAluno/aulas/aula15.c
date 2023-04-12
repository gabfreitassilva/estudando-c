#include <stdio.h>

int main() {
    float media, nota1, nota2, nota3, nota4;

    printf("Digite as quatro notas do aluno: ");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media do aluno e de %.2f\n", media);

    if(media < 5) {
        printf("Reprovado!\n");
    } else if(media >= 5 && media < 7) {
        printf("Aluno necessita fazer prova final\n");
    } else {
        printf("Aprovado!\n");
    }

    return 0;
}