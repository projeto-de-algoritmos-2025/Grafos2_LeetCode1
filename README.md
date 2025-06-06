# LeetCode

**Número da Lista**: 2<br>
**Conteúdo da Disciplina**: Grafos 2<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 22/2015186  |  Manoela Silvestre Garcia Chaves |
| 22/2029243  |  Victor Hugo dos Santos Bernardes |

## Sobre 
Para essa entrega, a dupla escolheu fazer exercícios da plataforma LeetCode: dois de nível difícil e dois de nível médio. 

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

### [721. Accounts Merge (Médio)](https://leetcode.com/problems/accounts-merge/description/)

Modelei o problema como um grafo onde cada e-mail é um nó, e há uma conexão (aresta) entre e-mails que aparecem juntos em uma conta. Foi utilizado a estrutura de Union-Find (inspirada no algoritmo de Kruskal) para unir e-mails de uma mesma conta, agrupando-os por componentes conectados. Após unificar todos os e-mails relacionados, foi agrupado os conjuntos resultantes, ordenando os e-mails e adicionando o nome do usuário correspondente a cada grupo, formando assim a lista final de contas mescladas.

![exercicio_721_leet](https://github.com/user-attachments/assets/9f3c6a51-c388-4f8e-851e-0c9c689f3da7)

### Gravação dos exercícios

<p align="center">
  <a href="https://youtu.be/_PWidBimUPY" target="_blank">
    <img src="https://img.youtube.com/vi/_PWidBimUPY/0.jpg" alt="Assista à explicação dos exercícios" width="700" />
  </a>
</p>

<p align="center">
  Disponível em: <a href="https://youtu.be/_PWidBimUPY" target="_blank">https://youtu.be/_PWidBimUPY</a>
</p>

## Instalação 
**Linguagem**: Python e C++<br>

## Uso 
O LeetCode é uma plataforma online usada para praticar algoritmos e estruturas de dados. Cada problema fornece uma descrição, exemplos e um editor de código com uma estrutura pré-definida (geralmente uma classe Solution com um método a ser implementado). O usuário pode escrever sua solução diretamente no editor e usar o botão "Run Code" para testar com os exemplos fornecidos ou "Submit" para validar a solução contra todos os casos de teste do sistema. A plataforma suporta diversas linguagens de programação e oferece feedback automático sobre desempenho e correção.





