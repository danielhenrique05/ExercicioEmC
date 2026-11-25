float media_turma(int n, Aluno** turmas, char turma) {
    int i, quantidade = 0;
    float soma = 0;

    for (i = 0; i < n; i++) {
        if (turmas[i]->turma == turma) {
            soma += (turmas[i]->p1 +
                     turmas[i]->p2 +
                     turmas[i]->p3) / 3;

            quantidade++;
        }
    }

    if (quantidade == 0) {
        return 0;
    }

    return soma / quantidade;
}