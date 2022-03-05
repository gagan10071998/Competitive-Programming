/******************************************************************************

Time Complexity is O(n+m)
Space Complexity is O(n+m)

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int *arr1, int *arr2, int *resultArray, int arr1_size, int arr2_size)
{
    int arr1_index = 0;
    int arr2_index = 0;
    int resultArray_index = 0;
    while (arr1_index < arr1_size && arr2_index < arr2_size)
    {
        if (arr1[arr1_index] < arr2[arr2_index])
        {
            resultArray[resultArray_index] = arr1[arr1_index];
            arr1_index++;
            resultArray_index++;
        }
        else if (arr1[arr1_index] > arr2[arr2_index])
        {
            resultArray[resultArray_index] = arr2[arr2_index];
            arr2_index++;
            resultArray_index++;
        }
        else
        {
            resultArray[resultArray_index] = arr1[arr1_index];
            resultArray_index++;
            resultArray[resultArray_index] = arr2[arr2_index];
            arr1_index++;
            arr2_index++;
            resultArray_index++;
        }
    }

    while (arr1_index < arr1_size)
    {
        resultArray[resultArray_index] = arr1[arr1_index];
        arr1_index++;
        resultArray_index++;
    }

    while (arr2_index < arr2_size)
    {
        resultArray[resultArray_index] = arr2[arr2_index];
        arr2_index++;
        resultArray_index++;
    }

    return;
}

int main()
{
    int arr1_size;
    int arr2_size;
    cout << "Enter arr1 length:  ";
    cin >> arr1_size;
    int *arr1 = new int[arr1_size];
    cout << "Enter array elements";
    for (int i = 0; i < arr1_size; i++)
    {
        int element;
        cin >> element;
        arr1[i] = element;
    }
    cout << "Enter arr2 length:  ";
    cin >> arr2_size;
    int *arr2 = new int[arr2_size];
    for (int i = 0; i < arr2_size; i++)
    {
        int element;
        cin >> element;
        arr2[i] = element;
    }
    int *resultArray = new int[arr1_size + arr2_size];

    merge(arr1, arr2, resultArray, arr1_size, arr2_size);
    for (int i = 0; i < (arr1_size + arr2_size); i++)
    {
        cout << resultArray[i];
    }

    delete[] arr1;
    delete[] arr2;
    delete[] resultArray;
}
