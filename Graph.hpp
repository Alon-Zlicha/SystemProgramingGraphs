/*2564 alonz1414@gmail.com*/
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
        void loadGraph(std::vector<std::vector<int>> &graph);
        void printGraph();
        std::vector<std::vector<int>> &getAdjMatrix();
        size_t getNumOfVertices();
        int getWeight(size_t start, size_t end);
    };
}
#endif