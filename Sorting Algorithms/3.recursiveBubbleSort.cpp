/******************************************************************************

Recursive Bubble Sort 


Recursive Bubble Sort	Best -> Ω(n) Average -> θ(n^2)	Worst -> O(n^2)
*******************************************************************************/

#include <iostream>

using namespace std;

void bubbleSort(int unsortedArray[], int size)
{
    if (size == 1)
        return;

    for (int y = 0; y < (size - 1); y++)
    {
        if (unsortedArray[y] > unsortedArray[y + 1])
        {
            int LowestElement = unsortedArray[y + 1];
            unsortedArray[y + 1] = unsortedArray[y];
            unsortedArray[y] = LowestElement;
        }
        else
        {
            continue;
        }
    }

    bubbleSort(unsortedArray, size - 1);
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

    bubbleSort(unsortedArray, size);

    for (int x = 0; x < size; x++)
    {
        cout << unsortedArray[x] << " ";
    }

    return 0;
}
