#include <iostream>

using namespace std;

void swap(int arr[], int indexOne, int indexTwo){
           int temp = arr[indexOne];
           arr[indexOne] = arr[indexTwo];
           arr[indexTwo] = temp;
           return ;
}

void selectionSort(int arr[], int size, int startIndex, int iterator){
   
   if(startIndex == (size-2)){
       if(arr[iterator]<arr[startIndex]){
           swap(arr,iterator,startIndex);
           return ;
       }
       return;
   }
   
   selectionSort(arr, size, startIndex+1,iterator+1);
   
   for(;iterator<size;iterator++){
       if(arr[iterator]<arr[startIndex]){
           swap(arr,iterator,startIndex);
          startIndex++;
       }
   }
   
   return;
}


int main()
{
    int a[] = {10,2,11,3,5,7,54,123,23,9,24,45};
    int size = sizeof(a)/sizeof(a[0]);
    selectionSort(a,size,0,1);
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    return 0;
}
