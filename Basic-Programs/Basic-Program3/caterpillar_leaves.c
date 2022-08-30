// k caterpillars are eating their way through n leaves. Each caterpillar falls from leaf to leaf in a unique sequence. All caterpillars start at a twig in position 0 and fall onto the leaves at positions between 1 and n.  Each caterpillar i has an associated 'jump-number' ai. A caterpillar with jump number j eats leaves at positions that are multiples of j. It will proceed in the order j, 2j, 3j, ... till it reaches the end of the leaves, then it stops and builds a cocoon.

// Input Format
// The first line of the input is an integer n, total number of leaves. The second line of the input is an integer k, total number of caterpillars. Each of the next k lines contains a single integer ai.

// Constraints
// ·       1 ≤ n ≤ 2 x 109
// ·       1 ≤ k ≤ 18
// ·       2 ≤ ai ≤ 22, 0 ≤ i < k

// Output Format
// The function should return the number of uneaten leaves

#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = 1;
    }
    while (k != 0)
    {
        int l;
        scanf("%d", &l);
        for (int i = l; i <= n; i += l)
        {
            arr[i] = 0;
        }
        k--;
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 1)
        {
            c++;
        }
    }
    printf("%d", c);
}