// Given n complex products, each with name, price and weight, find out how many duplicates of the original product are present within the products. Here, a duplicate is a product with all parameters, i.e. name, price and weight, equal to some other product.
// Complete the code in the editor below. The program has to return a single integer denoting the number of duplicates within the products.

// It has the following:
//     names: string array of size n, where namesi denotes the name of the ith product
//     prices: int array of size n, where pricesi denotes the price of the ith product
//     weights: int array of size n, where weightsi denotes the weight of the ith product

// Constraints
// ·       1 ≤ n ≤ 105
// ·       namesi is non-empty, has at most 10 characters, and all its characters are lowercase english letters
// ·       1 ≤ pricesi, weightsi ≤ 1000

// Input Format Format for Custom Testing
// Input from stdin will be processed as follows and passed to the function:
// In the first line, there is a single integer n.
// Then, n lines follow. In the ith of them, there is a single string namesi
// In the next line, there is a single integer n.
// Then, n lines follow. In the ith of them, there is a single integer pricesi
// In the next line, there is a single integer n.
// Then, n lines follow. In the ith of them, there is a single integer weightsi

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char names[n][10];
    int prices[n];
    int weights[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &weights[i]);
    }
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) == 0 && prices[i] == prices[j] && weights[i] == weights[j])
            {
                c++;
                break;
            }
        }
    }
    printf("%d", c);
    return 0;
}