#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <iostream>

namespace ariel
{
    class Graph
    {
    private:
        std::vector<std::vector<int>> adjMatrix;

    public:
        Graph() = default;
        void loadGraph(std::vector<std::vector<int>> &graph);
        void printGraph();
        std::vector<std::vector<int>> &getAdjMatrix();
        size_t getNumOfVertices();
        int getWeight(size_t start, size_t end);
    };
}
#endif