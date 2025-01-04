#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "game.h"

#define MAX_SIGLAS 16
#define MAX_TENTATIVAS 5

int main() {
  // Inicializar as siglas e o estado do jogo
  Sigla siglas[MAX_SIGLAS];
  int total_siglas = carregar_siglas(siglas, MAX_SIGLAS);

  if (total_siglas == 0) {
    printf("Erro ao carregar siglas. Encerrando o jogo. \n");
    return 1;
  }

  int acertos = 0, erros = 0;
  int tentativas = 0;

  printf("Bem-vindo ao jogo das siglas!\n");
  printf("Você terá %d tentativas. Boa sorte!\n\n", MAX_TENTATIVAS);

  srand((unsigned int)time(NULL));

  while (tentativas < MAX_TENTATIVAS) {
    int index;
    if (selecionar_sigla(siglas, total_siglas, &index) != 0) {
        printf("Erro ao selecionar sigla.\n");
        return 1;
    }

    printf("Digite o significado da sigla: %s\n", siglas[index].sigla);

    // Obter resposta do usuário
    char resposta[256];
    printf("Resposta: ");
    fgets(resposta, sizeof(resposta), stdin);

    // Remover o caractere de nova linha do final da string
    resposta[strcspn(resposta, "\n")] = '\0';

    // Validar resposta
    bool correto = validar_resposta(resposta, siglas[index].significado);
    if (correto) {
        printf("Correto!\n");
    } else {
        printf("Errado! O significado correto é: %s\n", siglas[index].significado);
    }

    // Atualizar contadores
    atualizar_contador(&acertos, &erros, correto);
    tentativas++;


    printf("Placar: %d acerto(s), %d erro(s).\n\n", acertos, erros);
  }

printf("Fim do jogo! Você acertou %d de %d.\n", acertos, MAX_TENTATIVAS);
return 0;
}
