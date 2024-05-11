#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include "Graph.hpp"
#include <stack>
namespace ariel
{
    class Algorithms
    {
    public:
        static int isConnected(Graph &g);
        static std::string shortestPath(Graph &g, size_t start, size_t end);
        static std::string isContainsCycle(Graph &g);
        static std::string isBipartite(Graph &g);
        static std::string negativeCycle(Graph &g);

    private:
        static void BFS(Graph &g, std::vector<bool> &visited, std::vector<bool> &hasPathToAll, size_t start);
        static bool hasCycleDFS(Graph &g, std::vector<bool> &visited, std::vector<bool> &recStack, std::stack<size_t> &path, size_t current, size_t parent);
        static std::string buildPartition(std::vector<int> &colors);
    };
}
#endif