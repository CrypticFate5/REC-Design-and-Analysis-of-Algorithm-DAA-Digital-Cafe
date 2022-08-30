/*
 * Complete the 'itemsSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY items as parameter.
 */

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int key;
    int val;
    struct node *next;
};
typedef struct node Map;
void insert(Map *mpp, int key, int val)
{
    Map *newMap = malloc(sizeof(Map));
    newMap->key = key;
    newMap->val = val;
    newMap->next = NULL;
    Map *pos = mpp;
    if (pos->next != NULL)
    {
        while (pos->next != NULL)
        {
            pos = pos->next;
        }
        pos->next = newMap;
    }
    else
    {
        pos->next = newMap;
    }
}
void delete (Map *mpp, int val)
{
    Map *pos = mpp;
    while (pos != NULL && pos->next->val != val)
    {
        pos = pos->next;
    }
    Map *temp = pos->next;
    pos->next = temp->next;
    free(temp);
}
void incCount(Map *mpp, int key)
{
    Map *pos = mpp;
    while (pos != NULL && pos->key != key)
    {
        pos = pos->next;
    }
    pos->val = pos->val + 1;
}
int find(Map *mpp, int key)
{
    Map *pos = mpp;
    while (pos != NULL && pos->key != key)
    {
        pos = pos->next;
    }
    if (pos != NULL)
    {
        return 1;
    }
    return 0;
}
void sort(int items[], int items_count)
{
    for (int i = 0; i < items_count - 1; i++)
    {
        for (int j = 0; j < items_count - i - 1; j++)
        {
            if (items[j] > items[j + 1])
            {
                int temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}
Map *findVal(Map *mpp, int val)
{
    Map *pos = mpp;
    while (pos != NULL && pos->val != val)
    {
        pos = pos->next;
    }
    return pos;
}
int *itemsSort(int items_count, int *items, int *result_count)
{
    int *result = malloc((items_count) * sizeof(int));
    sort(items, items_count);
    Map *mpp = malloc(sizeof(Map));
    mpp->next = NULL;
    int c = 0;
    for (int i = 0; i < items_count; i++)
    {
        if (find(mpp, items[i]))
        {
            incCount(mpp, items[i]);
        }
        else
        {
            insert(mpp, items[i], 1);
            c++;
        }
    }
    int count[c];
    int k = 0;
    Map *pos = mpp->next;
    while (pos != NULL)
    {
        count[k] = pos->val;
        pos = pos->next;
        k++;
    }
    sort(count, c);
    int f = 0;
    for (int i = 0; i < c; i++)
    {
        Map *val = findVal(mpp, count[i]);
        int v = val->val;
        while (v != 0)
        {
            result[f] = val->key;
            f++;
            v--;
        }
        delete (mpp, val->val);
    }
    *result_count = items_count;
    return result;
}
// int main()
// {
//     int items_count;
//     scanf("%d", &items_count);
//     int items[items_count];
//     for (int i = 0; i < items_count; i++)
//     {
//         scanf("%d", &items[i]);
//     }
//     int *res;
//     res = itemsSort(items_count, items, res);
//     for (int i = 0; i < items_count; i++)
//     {
//         printf("%d\n", res[i]);
//     }
//     return 0;
// }
