/******************************************************************************

Bubble Sort 

1. Swapping
2. Counter Shift

Bubble Sort	Best -> Ω(n) Average -> θ(n^2)	Worst -> O(n^2)
*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int arr[], int firstIndex, int secondIndex){
    int temp = arr[firstIndex];
    arr[firstIndex] = arr[secondIndex];
    arr[secondIndex] = temp;
    return;
}


void bubbleSort(int arr[],int size){
    
    if(size<=1){
        return;
    }
    for(int i = (size-1); i>0; i--){
        for(int j = 0; j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }
    
}

int main()
{
   int arr[] = {23,56,23,45,23,54,7,34,2,1,34,6,657,34,23,2,345,546,56,34};
   int size = sizeof(arr)/sizeof(arr[0]);
   
   bubbleSort(arr,size);
   
   
   for(int i = 0; i<size; i++){
       cout<< arr[i] << " ";
   }
}
