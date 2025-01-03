#ifndef GAME_H
#define GAME_H

#include <stdbool.h>

// Estrutura para armazenar siglas e seus significados
typedef struct {
  const char *sigla;
  const char *significado;
} Sigla;

int carregar_siglas(Sigla siglas[], int max);
int selecionar_sigla(const Sigla siglas[], int total, int *index);
bool validar_resposta(const char *resposta, const char *significado);
void atualizar_contador(int *acertos, int *erros, bool correto);

#endif
