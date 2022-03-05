/******************************************************************************

Time complexity O(n^2)
Space Complexity O(n)

*******************************************************************************/

#include <iostream>

using namespace std;

void counter(int *arr, int arr_size)
{

    for (int i = 0; i < arr_size; i++)
    {
        int count = 0;
        if (arr[i] != -1)
        {
            int element = arr[i];
            for (int j = 0; j < arr_size; j++)
            {
                if (arr[j] == element)
                {
                    count++;
                    arr[j] = -1;
                }
            }
            cout << element << "frequency is " << count << endl;
        }
    }

    return;
}

int main()
{
    int arr_size;
    cout << "Enter arr1 length:  ";
    cin >> arr_size;
    int *arr = new int[arr_size];
    cout << "Enter array elements:   ";
    for (int i = 0; i < arr_size; i++)
    {
        int element;
        cin >> element;
        arr[i] = element;
    }

    counter(arr, arr_size);

    delete[] arr;
}

/******************************************************************************

Using Hash Map

Time complexity O(n)
Space Complexity O(n)

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void counter(int *arr, int arr_size)
{

    unordered_map<int, int> mp;
    for (int i = 0; i < arr_size; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < arr_size; i++)
    {
        if (mp[arr[i]] != -1)
        {
            cout << arr[i] << " frequency is " << mp[arr[i]] << endl;
            mp[arr[i]] = -1;
        }
    }

    return;
}

int main()
{
    int arr_size;
    cout << "Enter arr1 length:  ";
    cin >> arr_size;
    int *arr = new int[arr_size];
    cout << "Enter array elements:   ";
    for (int i = 0; i < arr_size; i++)
    {
        int element;
        cin >> element;
        arr[i] = element;
    }

    counter(arr, arr_size);

    delete[] arr;
}
