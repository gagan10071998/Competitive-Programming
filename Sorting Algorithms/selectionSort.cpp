/******************************************************************************

Selection Sort 

1. Selection
2. Swapping
3. Counter Shift

Selection Sort	Best -> Ω(n^2)	Average -> θ(n^2)	Worst -> O(n^2)

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int unsortedArray[size];
    
    for(int x = 0; x<size; x++){
        cin >> unsortedArray[x];
    }
    
    for(int x = 0; x<size; x++){
        for(int y = (x+1); y<size; y++){
            if(unsortedArray[x] > unsortedArray[y]){ // Swapping
                int LowestElement = unsortedArray[x];
                unsortedArray[x] = unsortedArray[y];
                unsortedArray[y] = LowestElement;
                continue;
            }
            else{
                continue;
            }
        }
    }
    
    for(int x = 0; x<size; x++){
        cout << unsortedArray[x] << " ";
    }
    
    return 0;
}
