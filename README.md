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
### [1489. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree (Difícil)](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/description/)

O problema foi resolvido usando o algoritmo de Kruskal em conjunto com a estrutura Union-Find para construir a Árvore Geradora Mínima (MST). A solução calcula o peso mínimo da MST original e, em seguida, testa cada aresta: se removê-la aumenta o custo ou impede a construção da MST, ela é considerada crítica; se forçá-la a entrar na MST ainda resulta no mesmo custo mínimo, ela é considerada pseudo-crítica. Essa abordagem eficiente permite identificar corretamente o papel de cada aresta na formação da MST.

![1489](https://github.com/user-attachments/assets/0264e4c1-560d-4c0d-9da1-0034c6c84666)

### [847. Shortest Path Visiting All Nodes (Difícil)](https://leetcode.com/problems/shortest-path-visiting-all-nodes/description/)

Modelei o problema como um grafo não direcionado em que cada nó representa um estado de visitação e as arestas entre os nós representam a transição entre estados com um custo unitário. Primeiramente, utilizei o algoritmo de Dijkstra com bitmask para calcular o menor número de passos necessários para visitar todos os nós do grafo. A cada passo, considerei o nó atual e a bitmask dos nós visitados, atualizando o custo total e expandindo os vizinhos. Para garantir a eficiência, utilizei uma fila de prioridade (min-heap) para sempre expandir o estado com o menor custo acumulado.

![exercicio_847_leet](https://github.com/user-attachments/assets/6baf3416-a5d5-4f2f-851f-f78979a14839)

### [743. Network Delay Time (Médio)](https://leetcode.com/problems/network-delay-time/description/)

O problema foi resolvido utilizando o algoritmo de Dijkstra, que encontra o caminho mínimo de um único nó para todos os outros em um grafo com pesos não negativos. Representamos o grafo como uma lista de adjacência e usamos uma fila de prioridade (heap) para sempre processar o nó com a menor distância conhecida. As distâncias mínimas do nó de origem para os demais foram armazenadas em um dicionário, sendo atualizadas conforme encontramos caminhos mais curtos. Ao final, retornamos o maior tempo entre todas as distâncias mínimas, ou -1 se houver algum nó inalcançável.

![743](https://github.com/user-attachments/assets/1571851f-6b49-4664-9e75-30354e9d2a4d)

## Instalação 
**Linguagem**: Python e C++<br>
**Framework**: (caso exista)<br>
Descreva os pré-requisitos para rodar o seu projeto e os comandos necessários.

## Uso 
Explique como usar seu projeto caso haja algum passo a passo após o comando de execução.

## Outros 
Quaisquer outras informações sobre seu projeto podem ser descritas abaixo.




