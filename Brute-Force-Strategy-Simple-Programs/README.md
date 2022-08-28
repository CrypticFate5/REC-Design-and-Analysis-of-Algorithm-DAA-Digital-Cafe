# Brute Force Strategy- Simple Programs
---
## 🌟 Problem 1: Finding Duplicates
### ❓ Question:  
 
Given a read only array of n + 1 integers between 1 and n, find one number that repeats.

Input Format:

First Line - Number of elements

n Lines - n Elements

Output Format:
Element x - That is repeated
### 💻 Code:
    include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("%d", arr[i]);
                    return 0;
                }
            }
        }
        return 0;
    }

### 🧐 Explanation:

- First we take the size of array and declare the array.
- Then we iterate over the array by taking each element(index i) and by comparing it throughout the array(index j).
- If the choosen element is equal to the iterating element, then we print that element and terminate the program.

---
## 🌟 Problem 2: Bubble Sort
### ❓ Question:  
 
Bubble sort is one of the easiest and brute force sorting algorithms. It is used to sort elements in either ascending or descending order.

Write a program to implement the bubble sort Algorithm. Get the number of elements as in input in the first line and then get the numbers as input. Display the numbers in ascending order as output.

### 💻 Code:

    #include <stdio.h>
    void bubbleSort(int *arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        bubbleSort(arr, n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }
### 🧐 Explanation:

- The function bubbleSort, takes an array and an integer which is the size of the array.
- We iterate from 0 to n-1 in the first for loop. The reason to choose to go upto n-1 is because when n-1 passes are done, the array would be sorted and there is no need of sorting the array again to set the last element in last position of array.
- Then we iterate from 0 to n-i-1 in the second for loop. The reason here to choose n-i-1 is after every i'th pass, the greatest element would be set at n-i th position, so we go from 0 to n-i-1 th position.
- Then we check the corresponding elements (arr[j] and arr[j+1]) and if the next element is smaller than it's previous one, we swap it.
- And finally we call the funtion in main by taking appropriate inputs from the user.

---