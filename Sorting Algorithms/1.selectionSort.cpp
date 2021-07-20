/******************************************************************************

Selection Sort 

1. Selection
2. Swapping
3. Counter Shift

Selection Sort	Best -> Ω(n^2)	Average -> θ(n^2)	Worst -> O(n^2)

*******************************************************************************/
#include <iostream>

using namespace std;

void swap(int arr[], int indexOne, int indexTwo){
           int temp = arr[indexOne];
           arr[indexOne] = arr[indexTwo];
           arr[indexTwo] = temp;
           return ;
}

void selectionSort(int arr[],int size){
   if(size <= 1){
       return;
   }
   else if(size==2){
       if(arr[1]<arr[0]){
           swap(arr,1,0);
           return ;
       }
       return;
   }
   for(int startIndex = 0; startIndex<(size-1); startIndex++){
       for(int iterator = (startIndex+1);iterator<size;iterator++){
           if(arr[iterator] < arr[startIndex]){
                swap(arr,iterator,startIndex);
           }
       }
   }
   return;
}


int main()
{
    int a[] = {10,2,11,3,5,7,54,123,23,9,24,45};
    int size = sizeof(a)/sizeof(a[0]);
    selectionSort(a,size);
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    return 0;
}
