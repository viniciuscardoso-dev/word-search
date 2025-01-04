# Jogo de Siglas em C

Este projeto implementa um jogo simples no qual o jogador deve identificar o significado completo de siglas exibidas na tela. Ele foi desenvolvido na linguagem C e inclui suporte para testes unitários usando a biblioteca Unity.

## Como Funciona o Jogo

1. O jogo exibe siglas relacionadas ao microcontrolador RP2040.
2. O jogador deve digitar o significado completo da sigla (case-sensitive).
3. A pontuação é atualizada em tempo real.
4. O jogo termina após um número definido de tentativas (5 por padrão).

## Requisitos do Sistema

- GCC (compilador C)
- Biblioteca Unity (para testes unitários)
- Ambiente Linux ou Windows com terminal

## Passo a Passo para Clonar, Compilar e Jogar

### 1. Clonar o Repositório

Use o comando abaixo para clonar o repositório:

```bash
git clone <URL_DO_REPOSITORIO>
cd <NOME_DO_REPOSITORIO>
```

### 2. Configurar o Ambiente

Certifique-se de que o GCC está instalado. No Linux, use:

```bash
sudo apt update
sudo apt install build-essential
```

No Windows, instale o MinGW ou um equivalente.

### 3. Clonar a Biblioteca Unity

Para realizar testes unitários, clone a biblioteca Unity:

```bash
git clone https://github.com/ThrowTheSwitch/Unity.git
```

Inclua os arquivos principais do Unity no projeto:

- `Unity/src/unity.c`
- `Unity/src/unity.h`

### 4. Compilar o Jogo

Para compilar o jogo, execute:

```bash
gcc -o jogo main.c game.c
```

### 5. Executar o Jogo

Inicie o jogo com o comando:

```bash
./jogols ~/Downloads
```

### 6. (Opcional) Executar os Testes Unitários

Compile e execute os testes unitários:

```bash
gcc -o test_game test_game.c game.c Unity/src/unity.c
./test_game
```

## Personalização

Você pode alterar o número de tentativas ou adicionar novas siglas editando os seguintes trechos no código:

- Para alterar o número de tentativas, modifique `#define MAX_TENTATIVAS` em `main.c`.
- Para adicionar novas siglas, edite o array `todas_siglas` em `game.c`.

## Contribuição

Contribuições são bem-vindas! Abra um pull request ou envie sugestões via issues no repositório.

## Licença

Este projeto está sob a licença MIT. Consulte o arquivo LICENSE para mais detalhes.




