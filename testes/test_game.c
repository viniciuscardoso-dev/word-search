#include "unity.h"
#include "game.h"

// Teste carregar siglas
void test_carregar_siglas(void) {
  Sigla siglas[16];
  int total = carregar_siglas(siglas, 16);
  TEST_ASSERT_EQUAL(16, total);
  TEST_ASSERT_EQUAL_STRING("Processor", siglas[0].significado);
}

// Teste selecionar sigla
void test_selecionar_sigla(void) {
  Sigla siglas[16];
  carregar_siglas(siglas, 16);
  int index;
  TEST_ASSERT_EQUAL(0, selecionar_sigla(siglas, 16, &index));
  TEST_ASSERT_GREATER_OR_EQUAL(0, index);
  TEST_ASSERT_LESS_THAN(16, index);
}

// Teste validar resposta
void test_validar_resposta(void) {
  TEST_ASSERT_TRUE(validar_resposta("Processor", "Processor"));
  TEST_ASSERT_FALSE(validar_resposta("Processor", "Program"));
}

// Teste atualizar contador
void test_atualizar_contador(void) {
  int acertos = 0, erros = 0;
  atualizar_contador(&acertos, &erros, true);
  TEST_ASSERT_EQUAL(1, acertos);
  TEST_ASSERT_EQUAL(0, erros);

  atualizar_contador(&acertos, &erros, false);
  TEST_ASSERT_EQUAL(1, acertos);
  TEST_ASSERT_EQUAL(1, erros);
}


int main(void) {
  UNITY_BEGIN();

  RUN_TEST(test_carregar_siglas);
  RUN_TEST(test_selecionar_sigla);
  RUN_TEST(test_validar_resposta);
  RUN_TEST(test_atualizar_contador);

  return UNITY_END();
}
