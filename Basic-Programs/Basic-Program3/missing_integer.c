// You are given a sequence of n-1 distinct positive integers, all of which are less than or equal to a integer ‘n’. You have to find the integer that is missing from the range [1,2, . . . n]. Solve the question without using arrays.

// Input Format:
//  One line containing the integer ‘n’ where 2<=n<=10,000
//  First line is followed by a sequence of ‘n-1’ distinct positive integers. Note that the sequence may not be in any particular order.

// Output Format:
// One line containing the missing number

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int actual_sum = n * (n + 1) / 2, given_sum = 0;
    while (n != 1)
    {
        int k;
        scanf("%d", &k);
        given_sum += k;
        n--;
    }
    printf("%d", actual_sum - given_sum);
}