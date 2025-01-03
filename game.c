#include "game.h"
#include "<string.h>"
#include "<stdlib.h>"

#define TOTAL_SIGLAS 16

// Definição das siglas
static const Sigla todas_siglas[TOTAL_SIGLAS] = {
  {"PROC", "Processor"},
  {"PIO", "Programmable Input/Output}"},
  {"XIP", "Execute In Place"},
  {"PHY", "Physical Layer"},
  {"SRAM", "Static Random Access Memory"},
  {"ROM", "Read-Only Memory"},
  {"SIO", "Single-Cycle IO"},
  {"ADC", "Analog-to-Digital Converter"},
  {"UART", "Universal Asynchronous Receiver-Trasmitter"},
  {"SPI", "Serial Peripheral Interface"},
  {"I2C", "Inter-Integrated Circuit"},
  {"USB", "Universal Serial Bus"},
  {"DMA", "Direct Memory Access"},
  {"IRQ", "Interrupt Request"},
  {"RTC", "Real-Time Clock"},
  {"SWD", "Serial Wire Debug"}
};

// Carregar siglas no array fornecido
int carregar_siglas(Sigla siglas[], int max) {
  int count = max < TOTAL_SIGLAS ? max : TOTAL_SIGLAS;
  for (int i = 0; i < count; i++) {
    siglas[i] = todas_siglas[i];
  }
  return count;
}

// Selecionar sigla aleatória
int selecionar_sigla(const Sigla siglas[], int total, int *index) {
  if (total <= 0) return -1;
  *index = rand() % total;
  return 0;
}

// Validar a resposta do usuário
bool validar_resposta(const char *resposta, const char *significado) {
  return strcmp(resposta, significado) == 0;
}

// Atualizar os contadores de acertos e erros
void atualizar_contador(int *acertos, int *erros, bool correto) {
  if (correto) {
    (*acertos)++;
  } else {
    (*erros)++;
  }
}
