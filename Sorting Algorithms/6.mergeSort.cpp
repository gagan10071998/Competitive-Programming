/******************************************************************************

Recursive Merge Sort 


Recursive Merge Sort    Best -> Ω(n log(n))	 Average -> θ(n log(n))	Worst -> O(n log(n))

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int unsortedArray[], int start, int mid, int end)
{

    int i = start;
    int j = mid + 1;
    int k = end;

    int arr[(end - start) + 1];
    int indexer = 0;
    while (i <= mid && j <= end)
    {
        if (unsortedArray[i] >= unsortedArray[j])
        {
            arr[indexer] = unsortedArray[j];
            indexer++;
            j++;
        }
        else
        {
            arr[indexer] = unsortedArray[i];
            indexer++;
            i++;
        }
    }

    if (i > mid)
    {
        while (j <= end)
        {
            arr[indexer] = unsortedArray[j];
            indexer++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            arr[indexer] = unsortedArray[i];
            indexer++;
            i++;
        }
    }
    indexer = 0;
    for (int x = start; x <= end; x++)
    {
        unsortedArray[x] = arr[indexer];
        indexer++;
    }
}

void mergeSort(int unsortedArray[], int start, int end)
{
    if (start == end)
    {
        return;
    }

    int half = (start + end) / 2;
    mergeSort(unsortedArray, start, half);
    mergeSort(unsortedArray, half + 1, end);

    merge(unsortedArray, start, half, end);
}

int main()
{
    int size;
    cin >> size;
    int unsortedArray[size];

    for (int x = 0; x < size; x++)
    {
        cin >> unsortedArray[x];
    }

    mergeSort(unsortedArray, 0, size - 1);

    for (int x = 0; x < size; x++)
    {
        cout << unsortedArray[x] << " ";
    }

    return 0;
}
