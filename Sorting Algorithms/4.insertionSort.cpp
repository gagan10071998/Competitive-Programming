/******************************************************************************

Insertion Sort 


Insertion Sort	Best -> Ω(n) Average -> θ(n^2)	Worst -> O(n^2)
*******************************************************************************/

#include <iostream>

using namespace std;
void insertionSort(int unsortedArray[], int size)
{

    if (size <= 1)
    {
        return;
    }

    insertionSort(unsortedArray, size - 1);

    int LowestElement = unsortedArray[size - 1];
    int indexer = size - 1;
    for (int y = (size - 2); y >= 0; y--)
    {
        if (unsortedArray[y] > LowestElement)
        {
            unsortedArray[indexer] = unsortedArray[y];
            unsortedArray[y] = LowestElement;
            indexer = y;
        }
        else
        {
            continue;
        }
    }
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

    for (int x = 1; x < size; x++)
    {
        int LowestElement = unsortedArray[x];
        int indexer = x;
        for (int y = (x - 1); y >= 0; y--)
        {
            if (unsortedArray[y] > LowestElement)
            {
                unsortedArray[indexer] = unsortedArray[y];
                unsortedArray[y] = LowestElement;
                indexer = y;
            }
            else
            {
                continue;
            }
        }
    }

    for (int x = 0; x < size; x++)
    {
        cout << unsortedArray[x] << " ";
    }

    return 0;
}
