/******************************************************************************

Time Complexity O(n);
Space Complexity O(1);

*******************************************************************************/

#include <iostream>

using namespace std;

int removeDuplicates(int *arr, int arr_size)
{
    if (arr_size == 0 || arr_size == 1)
    {
        return arr_size;
    }

    int element = arr[0];
    int j = 1;
    int i = 1;

    while (j < arr_size)
    {
        if (arr[j] != element)
        {
            arr[i] = arr[j];
            element = arr[j];
            i++;
        }
        else
        {
            j++;
        }
    }

    return i;
}

int main()
{
    int arr_size;
    cout << "Enter arr1 length:  ";
    cin >> arr_size;
    int *arr = new int[arr_size];
    cout << "Enter array elements";
    for (int i = 0; i < arr_size; i++)
    {
        int element;
        cin >> element;
        arr[i] = element;
    }

    int new_size = removeDuplicates(arr, arr_size);
    for (int i = 0; i < new_size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
}
