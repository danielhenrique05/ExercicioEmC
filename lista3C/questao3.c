struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};

typedef struct aluno Aluno;

void imprime_aprovados(int n, Aluno** turmas) {
    int i;
    float media;

    for (i = 0; i < n; i++) {
        media = (turmas[i]->p1 +
                 turmas[i]->p2 +
                 turmas[i]->p3) / 3;

        if (media >= 7.0) {
            printf("Matricula: %s\n", turmas[i]->matricula);
            printf("Nome: %s\n", turmas[i]->nome);
            printf("Turma: %c\n", turmas[i]->turma);
            printf("Media: %.2f\n\n", media);
        }
    }
}