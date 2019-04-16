# CopaDoMundo

A Nlogônia é atualmente um dos países com maior crescimento econômico no mundo, e seus governantes
têm se esforçado para que o país seja mais conhecido e respeitado internacionalmente.
Recentemente a Nlogônia foi escolhida para ser a sede da Copa do Mundo de Futebol Amador, e está se preparando para receber os milhares de torcedores que o evento atrai.
Como parte da preparação para a Copa, o governo planeja realizar uma reforma em todo o sistema de transporte intermunicipal, que é hoje composto de uma malha de rodovias e ferrovias, cada rodovia ou ferrovia interligando um par de cidades. Com as rodovias e ferrovias existentes já é possível viajar entre qualquer par de cidades (possivelmente passando por outras cidades no caminho), mas o governo quer oferecer melhores condições de transporte para os visitantes e a população. Como não há recursos para reformar todas as rodovias e ferrovias, o governo quer escolher um conjunto de rodovias e ferrovias para ser reformado, e já realizou um estudo para estabelecer o custo de reforma de cada rodovia e ferrovia. A escolha deve obedecer aos seguintes critérios:

1. ao final da reforma, deve ser possível viajar entre qualquer par de cidades (possivelmente passando por outras cidades) utilizando apenas rodovias ou ferrovias reformadas;
2. para priorizar o transporte público, dentre as escolhas que satisfazem a restrição 1, deve-se escolher uma que minimize o número de rodovias reformadas;
3. dentre as escolhas que satisfazem as restrições 1 e 2, deve-se escolher uma que minimize o custo total.

Você foi contratado para escrever um programa que, conhecidos os custos de reforma de cada rodovia e ferrovia, determine o menor custo possível para a reforma, obedecidos os critérios estabelecidos.

Entrada

A primeira linha da entrada contém três inteiros N, F e R, indicando respectivamente o número de cidades, de ferrovias e de rodovias. As cidades são identificadas por inteiros de 1 a N. Cada uma das F linhas seguintes descreve uma ferrovia e contém três inteiros A, B e C, onde A e B representam cidades e C representa o custo da reforma da ferrovia que interliga A e B. Cada uma das R linhas seguintes descreve uma rodovia e contém três inteiros I, J e K, onde I e J representam cidades e K representa o custo da reforma da rodovia que interliga I e J.

Restrições
2  < N < 100;  1< F <N(N – 1)/2;  1< R < N(N – 1)/2
1< A <B < N e 1 < I < J < N
1 < C < 1000 e 1 < K < 1000

Informações sobre a pontuação
Para um conjunto de casos de testes totalizando 20 pontos, 2 < N < 6.
