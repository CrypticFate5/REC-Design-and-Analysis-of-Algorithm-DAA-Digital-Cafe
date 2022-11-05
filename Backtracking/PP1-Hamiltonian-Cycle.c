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
            {
                return 1;
            }
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