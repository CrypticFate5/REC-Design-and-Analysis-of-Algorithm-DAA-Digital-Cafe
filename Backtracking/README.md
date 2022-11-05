# Backtracking
---
## 🌟 Problem 1: 
### ❓ Question:

 Hamiltonian Path in an undirected graph is a path that visits each vertex exactly once. A Hamiltonian cycle (or Hamiltonian circuit) is a Hamiltonian Path such that there is an edge (in the graph) from the last vertex to the first vertex of the Hamiltonian Path. Determine whether a given graph contains Hamiltonian Cycle or not. If it contains, then prints the path. Following are the input and output of the required function.

Input:  
First the number of vertices in the graph V.  
Next A 2D array graph[V][V] where V is the number of vertices in graph and graph[V][V] is adjacency matrix representation of the graph.  
A value graph[i][j] is 1 if there is a direct edge from i to j, otherwise graph[i][j] is 0.

Output:  
An array path[V] that should contain the Hamiltonian Path. path[i] should represent the ith vertex in the Hamiltonian Path.  
The code should also return false if there is no Hamiltonian Cycle in the graph.


### 💻 Code:
    
    #include <stdio.h>
    #include <string.h>

    int help(int k, int n, int *vis, int c, int graph[][n])
    {
        if (c == n - 1)
        {
            if (graph[k][0] == 1)
            {
                int l = 0;
                for (int i = 0; i < n; i++)
                {
                    if (vis[i] != -1)
                        l++;
                }
                if (l == n)
                    return 1;
            }
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == -1 && graph[k][i] == 1)
            {
                if (k == 0)
                    vis[k] = 0;
                c++;
                vis[i] = c;
                if (help(i, n, vis, c, graph))
                    return 1;
                c--;
                vis[i] = -1;
            }
        }
        return 0;
    }
    int main()
    {
        int n;
        scanf("%d", &n);
        int graph[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &graph[i][j]);
            }
        }
        int vis[n];
        memset(vis, -1, sizeof(vis));
        int path[n];
        int j = 0;
        if (help(0, n, vis, 0, graph))
        {
            printf("The hamiltonian cycle is ");
            for (int i = 0; i < n; i++)
            {
                path[vis[i]] = j;
                j++;
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d ", path[i]);
            }
            printf("0");
        }
        else
        {
            printf("The hamiltonian cycle does not exist");
        }
        return 0;
    }

### ⌚🚀 Complexity:

- Time Complexity: O(n<sup>n</sup>)
- Space Complexity: O(n<sup>2</sup>)+O(n)+O(n)

### 🧐 Explanation:

-

---
## 🌟 Problem 2: 
### ❓ Question:

A proper coloring of a graph is an assignment of colors to the vertices of the graph so that no two adjacent vertices have the same color. Given an undirected graph and a number m, determine if the graph can be coloured with at most m colours such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment of colors to all vertices.

Input:  
An integer V is the number of vertices in the graph.  
An integer m is the maximum number of colors that can be used.  
A 2D array graph[V][V] where V is the number of vertices in graph and graph[V][V] is an adjacency matrix representation of the graph.  
A value graph[i][j] is 1 if there is a direct edge from i to j, otherwise graph[i][j] is 0.

Output:  
An array color[V] that should have numbers from 1 to m. color[i] should represent the color assigned to the ith vertex. The code should also return false if the graph cannot be colored with m colors.

### 💻 Code:
    


### ⌚🚀 Complexity:

- Time Complexity: 
- Space Complexity: 
### 🧐 Explanation:

-

---


## 🌟 Problem 3: 
### ❓ Question:

Subset sum problem is to find subset of elements that are selected from a given set whose sum adds up to a given number K. Given a set of non-negative numbers and the value K, determine if there is a subset of numbers whose sum value is equal to K. It is assumed that the input set is unique (no duplicates are presented).

Input:  
An integer which is equal to the number of input non-negative integers.  
An integer which is equal to sum value.  
The set of non-negative integers

Output:  
True/False - Saying whether the subset exists or not.


### 💻 Code:
    
    #include <stdio.h>

    int help(int *set, int n, int k, int j)
    {
        if (k == 0 || j == n)
        {
            if (k == 0)
                return 1;
            return 0;
        }
        if (help(set, n, k - set[j], j + 1))
            return 1;
        if (help(set, n, k, j + 1))
            return 1;
        return 0;
    }
    int main()
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int set[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &set[i]);
        }
        if (help(set, n, k, 0))
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        return 0;
    }


### ⌚🚀 Complexity:

- Time Complexity: O(2<sup>n</sup>)
- Space Complexity: O(n)+O(n)

### 🧐 Explanation:

-

---


