/******************************************************************************

Selection Sort 

1. Selection
2. Swapping
3. Counter Shift

Selection Sort	Best -> Ω(n^2)	Average -> θ(n^2)	Worst -> O(n^2)

*******************************************************************************/
#include <iostream>

using namespace std;

void swap(int arr[], int firstIndex, int secondIndex){
    int temp = arr[firstIndex];
    arr[firstIndex] = arr[secondIndex];
    arr[secondIndex] = temp;
    return;
}


void selectionSort(int arr[],int size){
    if(size<=1){
        return;
    }
    for(int i = 0; i<(size-1); i++){
       int smallestElementIndex = i;
       for(int j = i+1; j<size; j++){
           if(arr[j]<arr[smallestElementIndex]){
               smallestElementIndex = j;
           }
       }
       if(smallestElementIndex!=i){
            swap(arr,smallestElementIndex, i);   
       }
   }
   return;
   
}

int main()
{
   int arr[] = {23,56,23,45,23,54,7,34,2,1,34,6,657,34,23,2,345,546,56,34};
   int size = sizeof(arr)/sizeof(arr[0]);
   
   selectionSort(arr,size);
   
   
   for(int i = 0; i<size; i++){
       cout<< arr[i] << " ";
   }
}
