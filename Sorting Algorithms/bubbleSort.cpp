/******************************************************************************

Bubble Sort 

1. Swapping
2. Counter Shift

Bubble Sort	Best -> Ω(n) Average -> θ(n^2)	Worst -> O(n^2)
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int unsortedArray[size];

    for (int x = 0; x < size; x++)
    {
        cin >> unsortedArray[x];
    }

    for (int x = 0; x < (size - 1); x++)
    {
        int swap = false;
        for (int y = 0; y < (size - 1); y++)
        {
            if (unsortedArray[y] > unsortedArray[y + 1])
            {
                int LowestElement = unsortedArray[y + 1];
                unsortedArray[y + 1] = unsortedArray[y];
                unsortedArray[y] = LowestElement;
                swap = true;
            }
            else
            {
                continue;
            }
        }
        if (swap == false)
            break;
    }

    for (int x = 0; x < size; x++)
    {
        cout << unsortedArray[x] << " ";
    }

    return 0;
}
