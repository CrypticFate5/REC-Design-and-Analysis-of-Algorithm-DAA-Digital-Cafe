/*
 * Complete the 'isPower' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
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
int *isPower(int arr_count, int *arr, int *result_count)
{
    int *result = malloc(arr_count * sizeof(int));
    *result_count = 0;
    for (int i = 0; i < arr_count; i++)
    {
        int n = arr[i];
        if ((n & (n - 1)) == 0)
        {
            result[*result_count] = 1;
        }
        else
        {
            result[*result_count] = 0;
        }
        (*result_count)++;
    }
    return result;
}
