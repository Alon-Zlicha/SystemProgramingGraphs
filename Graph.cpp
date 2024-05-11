#include "Graph.hpp"
#include <stdexcept>

namespace ariel
{
    void Graph::loadGraph(std::vector<std::vector<int>> &matrix)
    {
        if (matrix.size() != matrix[0].size())
        {
            throw std::invalid_argument("Invalid graph: The graph is not a square matrix.");
        }
        this->adjMatrix = matrix;
    }
    void Graph::printGraph()
    {
        int edgeCount = 0;
        for (size_t i = 0; i < this->adjMatrix.size(); i++)
        {
            for (size_t j = 0; j < this->adjMatrix.size(); j++)
            {
                if (this->adjMatrix[i][j] != 0)
                {
                    edgeCount++;
                }
            }
        }
        std::cout << "Graph with " << this->getNumOfVertices() << " vertices and " << edgeCount << " edges." << std::endl;
    }
    std::vector<std::vector<int>> &Graph::getAdjMatrix()
    {
        return this->adjMatrix;
    }
    size_t Graph::getNumOfVertices()
    {
        return this->adjMatrix.size();
    }
    int Graph::getWeight(size_t start, size_t end)
    {
        return this->adjMatrix[start][end];
    }
}