#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> parent;  // Vetor para usar no Union-Find

    // Função para encontrar o representante do conjunto
    int find(int x) {
        if (parent[x] != x)  // Se o nó não for seu próprio representante
            parent[x] = find(parent[x]);  // Compressão de caminho
        return parent[x];  // Retorna o representante do conjunto
    }

    // Função para unir os dois conjuntos
    void unite(int x, int y) {
        parent[find(x)] = find(y);  // União dos conjuntos
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string, int> emailToIndex;  // Mapeia os emails para índices
        unordered_map<string, string> emailToName;  // Mapeia os emails para o nome do usuário
        int emailCount = 0;  // Contador de e-mails

        // Mapeia emails para índices e nomes
        for (const auto& account : accounts) {
            const string& name = account[0];  // Nome do usuário (primeiro elemento da conta)
            for (int i = 1; i < account.size(); ++i) {  // Percorre todos os emails da conta
                const string& email = account[i];
                // Se o email ainda não foi mapeado, mapeia um novo índice
                if (emailToIndex.find(email) == emailToIndex.end()) {
                    emailToIndex[email] = emailCount++;
                    emailToName[email] = name;  // Atribui o nome ao email
                }
            }
        }

        parent.resize(emailCount);  // Redimensiona o vetor de pais
        for (int i = 0; i < emailCount; ++i)
            parent[i] = i;  // Inicializa cada email com seu próprio representante

        // Une os emails pertencentes à mesma conta
        for (const auto& account : accounts) {
            int firstEmailIndex = emailToIndex[account[1]];  // Pega o índice do primeiro email da conta
            for (int i = 2; i < account.size(); ++i) {  // Para cada email da conta
                unite(firstEmailIndex, emailToIndex[account[i]]);  // Une os emails
            }
        }

        // Agrupa emails que pertencem ao mesmo usuário (mesmo representante)
        unordered_map<int, vector<string>> components;  // Mapeia o representante para os emails
        for (const auto& [email, index] : emailToIndex) {
            int root = find(index);  // Encontra o representante do email
            components[root].push_back(email);  // Adiciona o email ao grupo do representante
        }

        // Constrói o resultado final
        vector<vector<string>> result;
        for (auto& [root, emails] : components) {
            sort(emails.begin(), emails.end());  // Ordena os emails lexicograficamente
            emails.insert(emails.begin(), emailToName[emails[0]]);  // Adiciona o nome ao início da lista de e-mails
            result.push_back(emails);  // Adiciona o grupo ao resultado final
        }

        return result;  // Retorna a lista de contas mescladas
    }
};
