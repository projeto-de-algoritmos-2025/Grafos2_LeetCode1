# LeetCode

**Número da Lista**: X<br>
**Conteúdo da Disciplina**: Grafos 2<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 22/2015186  |  Manoela Silvestre Garcia Chaves |
| 22/2029243  |  Victor Hugo dos Santos Bernardes |

## Sobre 
Para essa entrega, a dupla escolheu fazer exercícios da plataforma LeetCode: dois difíceis e dois médios. 

## Screenshots
### [847. Shortest Path Visiting All Nodes (Difícil)](https://leetcode.com/problems/shortest-path-visiting-all-nodes/description/)

Modelei o problema como um grafo não direcionado em que cada nó representa um estado de visitação e as arestas entre os nós representam a transição entre estados com um custo unitário. Primeiramente, utilizei o algoritmo de Dijkstra com bitmask para calcular o menor número de passos necessários para visitar todos os nós do grafo. A cada passo, considerei o nó atual e a bitmask dos nós visitados, atualizando o custo total e expandindo os vizinhos. Para garantir a eficiência, utilizei uma fila de prioridade (min-heap) para sempre expandir o estado com o menor custo acumulado.

![Exercício 847](../Grafos2_LeetCode1/assets/exercicio_847_leet.png)

## Instalação 
**Linguagem**: xxxxxx<br>
**Framework**: (caso exista)<br>
Descreva os pré-requisitos para rodar o seu projeto e os comandos necessários.

## Uso 
Explique como usar seu projeto caso haja algum passo a passo após o comando de execução.

## Outros 
Quaisquer outras informações sobre seu projeto podem ser descritas abaixo.




