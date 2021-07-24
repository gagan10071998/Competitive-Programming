/******************************************************************************

Insertion Sort 


Insertion Sort	Best -> Ω(n) Average -> θ(n^2)	Worst -> O(n^2)
*******************************************************************************/

#include <iostream>

using namespace std;


void insertionSort(int arr[],int size){
    
    if(size<=1){
        return;
    }
    
    for(int i = 1; i<size; i++){
        int temp = arr[i];
        int swapIndex = i;
        for(int j = (i-1); j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
                swapIndex = j;
            }
            else{
                break;
            }
        }
        arr[swapIndex] = temp;
    }
    
}

int main()
{
   int arr[] = {23,56,23,45,23,54,7,34,2,1,34,6,657,34,23,2,345,546,56,34};
   int size = sizeof(arr)/sizeof(arr[0]);
   
   insertionSort(arr,size);
   
   
   for(int i = 0; i<size; i++){
       cout<< arr[i] << " ";
   }
}
