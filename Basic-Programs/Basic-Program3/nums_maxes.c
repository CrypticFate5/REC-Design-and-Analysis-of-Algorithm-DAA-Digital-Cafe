// Given two arrays of positive integers, for each element in the second array, find the total number of elements in the first array which are less than or equal to that element.  Store the values determined in an array.
// For example, if the first array is [1, 2, 3] and the second array is [2, 4], then there are 2 elements in the first array less than or equal to 2. There are 3 elements in the first array which are less than or equal to 4. We can store these answers in an array, answer = [2, 3].

// Program Description
// The program must return an array of m positive integers, one for each maxes[i] representing the total number of elements nums[j] satisfying nums[j] ≤ maxes[i] where 0 ≤ j < n and 0 ≤ i < m, in the given order.

// The program has the following:

// nums[nums[0],...nums[n-1]]:  first array of positive integers

// maxes[maxes[0],...maxes[n-1]]:  second array of positive integers

// Constraints
// ·       2 ≤ n, m ≤ 105
// ·       1 ≤ nums[j] ≤ 109, where 0 ≤ j < n.
// ·       1 ≤ maxes[i] ≤ 109, where 0 ≤ i < m.

// Input Format For Custom Testing

// Input from stdin will be processed as follows and passed to the program.

// The first line contains an integer n, the number of elements in nums.
// The next n lines each contain an integer describing nums[j] where 0 ≤ j < n.
// The next line contains an integer m, the number of elements in maxes.
// The next m lines each contain an integer describing maxes[i] where 0 ≤ i < m.

#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &m);
    int maxes[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &maxes[i]);
    }
    for (int i = 0; i < m; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (maxes[i] >= nums[j])
            {
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}