#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// DEFININDO A STRUCT ALUNO
typedef struct {
    int matricula;
    char nome[50];
    float media;
} Aluno;

// FUNÇÃO PARA ADICIONAR UM NOVO ALUNO
void adicionarAluno(Aluno **alunos, int *numAlunos){
    *alunos = (Aluno*) realloc(*alunos, (*numAlunos + 1) * sizeof(alunos));

    //ENTRADA DOS DADOS DO NOVO ALUNO
    puts("Coloque a matrícula\n");
    scanf("%d", &(*alunos)[*numAlunos].matricula);

    puts("Coloque o nome\n")
    scanf("%c", (*alunos)[*numAlunos].nome);

    puts("Coloque a média de notas")
    scanf("%f", &(*alunos)[*numAlunos].media);

    (*numAlunos)++;
    printf("Aluno adicionado com sucesso\n");
}

// FUNÇÃO PARA MOSTRAR ALUNOS
void listarAlunos(Aluno *aluno, int numAlunos){
    if(numAlunos == 0){
        puts("Nenhum aluno cadastrado.\n");
        return;
    }else{
        for(int i == 0; i < numAlunos, i++){
            printf("Matrícula: %d; Nome: %c; Media: %.2f\n", aluno[i].matricula, aluno[i].nome, aluno[i].media);
        }
    }
}

// FUNÇÃO PARA REMOVER ALUNOS PELA MATRÍCULA
void removerAlunos(Aluno **alunos, int *numAlunos, int *matricula){
    int posicao = -1;

    for(int i = 0, i < *numAlunos, i++){
        if((*alunos)[i].matricula == matricula){
            posicao = 1;
            break;
        }
    }

    if(posicao == -1){
        puts("Aluno não encontrado\n")
        return;
    }

    for()
}