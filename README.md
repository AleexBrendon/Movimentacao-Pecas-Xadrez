## Simulação de Movimentos de Peças de Xadrez em C

# Descrição

Este projeto consiste na implementação de um programa em linguagem C que simula o movimento das peças Torre, Bispo, Rainha e Cavalo, utilizando diferentes estruturas de controle, incluindo:

Estruturas de repetição (for, while, do-while)

Recursividade

Loops aninhados

Controle de fluxo com break e continue

O programa imprime no console a direção correspondente a cada casa percorrida pelas peças.

## Nível Básico

# Objetivo:

Implementar a movimentação individual das peças utilizando estruturas de repetição simples.

# Implementações:

Torre → for

Bispo → while

Rainha → do-while

# Conceitos aplicados:

Estruturas de repetição

Controle de variáveis inteiras

Impressão com printf

## Nível Intermediário

# Objetivo:

Adicionar a movimentação do Cavalo utilizando loops aninhados.

# Implementações:

Movimento em “L”

Uso obrigatório de:

Um for

Um while (ou do-while)

Impressão detalhada de cada etapa do movimento

# Conceitos aplicados:

Loops aninhados

Controle lógico de execução

Organização estrutural do código

## Nível Avançado

# Objetivo:

Aprimorar o programa utilizando recursividade e estruturas de controle mais complexas.

# Implementações:

Torre, Bispo e Rainha → funções recursivas

Bispo → recursividade + loops aninhados

Loop externo → movimento vertical

Loop interno → movimento horizontal

Cavalo → loops aninhados complexos

Uso de break e continue

Múltiplas variáveis e condições

# Conceitos aplicados:

Recursividade com condição de parada

Controle avançado de fluxo

Modularização com funções

Organização e legibilidade de código

# Requisitos Atendidos

Código eficiente

Sem validação de entrada (conforme especificação)

Uso exclusivo de variáveis inteiras

Impressão padronizada com printf

Código documentado e organizado

## Como Compilar

gcc xadrez.c -o xadrez
