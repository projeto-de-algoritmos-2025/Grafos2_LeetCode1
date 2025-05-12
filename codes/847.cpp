#include <vector>
#include <queue>
#include <tuple>
#include <climits>

using namespace std;

class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();  // Número de nós no grafo
        int final_state = (1 << n) - 1;  // Máscara de estado final (todos os nós foram visitados)

        // dist[node][mask] = menor custo para chegar ao nó 'node' com a lista (máscara) de nós visitados 'mask'
        vector<vector<int>> dist(n, vector<int>(1 << n, INT_MAX));
        
        // Fila de prioridade (min-heap) onde a prioridade é dada plelo menor custo
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq; // Armazenando tuplas (custo, nó, máscara)

        // Começa de cada nó
        for (int i = 0; i < n; ++i) {
            dist[i][1 << i] = 0;  // Custo para começar de cada nó = 0
            pq.emplace(0, i, 1 << i);  // Adiciona à fila (custo = 0, nó = i, máscara de visita = 1 << i)
        }

        // Executa o algoritmo até encontrar o menor caminho que visita todos os nós
        while (!pq.empty()) {
            // Extrai o nó com o menor custo até o momento
            auto [cost, node, mask] = pq.top();
            pq.pop();

            // Se a máscara atual for igual à máscara final, retorna o custo
            if (mask == final_state) {
                return cost;
            }

            // Percorre todos os vizinhos do nó atual
            for (int neighbor : graph[node]) {
                // Calcula a nova máscara com o vizinho incluído
                int next_mask = mask | (1 << neighbor);
                int next_cost = cost + 1;  // O custo para visitar o próximo nó aumenta em 1

                // Se o custo para visitar o vizinho com a nova máscara for menor, atualiza a distância
                if (dist[neighbor][next_mask] > next_cost) {
                    dist[neighbor][next_mask] = next_cost;
                    pq.emplace(next_cost, neighbor, next_mask);  // Adiciona o vizinho à fila de prioridade
                }
            }
        }

        return -1; // Se não for possível visitar todos os nós, retorna -1
    }
};
