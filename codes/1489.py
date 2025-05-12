class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))
    
    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, x, y):
        rootX, rootY = self.find(x), self.find(y)
        if rootX == rootY:
            return False
        self.parent[rootY] = rootX
        return True

class Solution:
    def findCriticalAndPseudoCriticalEdges(self, n, edges):
        # Adiciona o índice original a cada aresta
        indexed_edges = [edge + [i] for i, edge in enumerate(edges)]
        # Ordena as arestas pelo peso
        indexed_edges.sort(key=lambda x: x[2])

        # Função para construir MST com opção de incluir ou excluir uma aresta específica
        def kruskal(n, edges, include=None, exclude=None):
            uf = UnionFind(n)
            weight = 0
            if include:
                u, v, w, _ = include
                if uf.union(u, v):
                    weight += w
            for u, v, w, idx in edges:
                if idx == exclude:
                    continue
                if uf.union(u, v):
                    weight += w
            # Verifica se todos os nós estão conectados
            roots = set(uf.find(i) for i in range(n))
            return weight if len(roots) == 1 else float('inf')

        # Peso da MST padrão
        min_weight = kruskal(n, indexed_edges)
        critical, pseudo_critical = [], []

        for u, v, w, idx in indexed_edges:
            # Verifica se a aresta é crítica
            if kruskal(n, indexed_edges, exclude=idx) > min_weight:
                critical.append(idx)
            # Verifica se a aresta é pseudo-crítica
            elif kruskal(n, indexed_edges, include=[u, v, w, idx]) == min_weight:
                pseudo_critical.append(idx)

        return [critical, pseudo_critical]
