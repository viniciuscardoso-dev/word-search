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


