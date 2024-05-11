# **Assignment 1 - Graphs(Classes and namespaces)**

## **Overview**

    This is a C++ program that provides implementations of various graph algorithms.
    The program includes functions for checking graph connectivity, finding shortest paths, detecting cycles,
    determining bipartiteness, and identifying negative cycles.

## **Files**

    Graph.hpp: Defines the Graph class, which represents a graph using an adjacency matrix.
    Algorithms.hpp: Defines the Algorithms class, which contains implementations of various graph algorithms.
    Graph.cpp: Implements the functions of the Graph class.
    Algorithms.cpp: Implements the functions of the Algorithms class.
    demo.cpp: The main class that contains some example usage of the graph algorithms class.
    test.cpp: Contains unit tests for the graph algorithms implemented in the program. 
    Makefile: Provides commands to build, run, and clean the project.

## **Graph Representation**

    The Graph class implements graph representation using an adjacency matrix,
    where graph[i][j] represents the weight of the edge from vertex i to vertex j.
    A weight of 0 indicates no edge between the vertices.

## **The Algorithms**
    
    The Algorithms class contains static public methods, some of which utilize static private methods within the class:
    
    isConnected(g): Check if the graph is connected by running BFS from each vertex in the graph(using the private method "BFS") . 
    If BFS from any vertex in the graph fails to find a path to every other vertex, the algorithm returns 0; otherwise, it returns 1.
    
    shortestPath(g, start, end): Find the shortest path between two vertices using the Bellman-Ford algorithm.
    If the algorithm detects a negative cycle in the graph, it returns "Negative Cycle".
    If the algorithm fails to find a path from start to end, it returns "-1"; otherwise, it returns a string representing the path between the two vertices.
    
    isContainsCycle(g): Check if the graph contains a cycle by running DFS from each vertex in the graph and examining for back edges
    (using the private recursive method"hasCycleDFS"). To identify a cycle in a graph, we must search within each connected component.
    If DFS from some vertex detects a cycle, the algorithm returns a string representing the cycle path; otherwise, it returns "0".

    isBipartite(g): Determine if the graph is bipartite and partition it into two sets if possible.
    To determine bipartiteness, the algorithm utilizes BFS, coloring vertices while traversing the graph.
    If adjacent vertices with the same color are found, the graph is not bipartite, and the algorithm returns "0".
    Otherwise, it constructs(using the privte method "buildPartition") the partition and returns a string representing the two sets.
    
    negativeCycle(g): Find a negative cycle in the graph using the Bellman-Ford algorithm.
    The algorithm initializes distances and parents, then iterates through vertices to relax edges.
    If a negative cycle is detected, it constructs and returns a string representing the cycle path.
    If no negative cycle exists, it returns "No negative cycle".
