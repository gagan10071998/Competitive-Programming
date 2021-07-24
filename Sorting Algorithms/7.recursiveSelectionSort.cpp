#include <iostream>

using namespace std;

void swap(int arr[], int firstIndex, int secondIndex){
    int temp = arr[firstIndex];
    arr[firstIndex] = arr[secondIndex];
    arr[secondIndex] = temp;
    return;
}


void selectionSort(int arr[],int size, int index){
    if(size<=1 || index==(size-1)){
        return;
    }
    
    int smallestElementIndex = index;
    for(int j = index+1; j<size; j++){
        if(arr[j]<arr[smallestElementIndex]){
            smallestElementIndex = j;
        }
    }
    if(smallestElementIndex!=index){
            swap(arr,smallestElementIndex, index);   
    }
    
    selectionSort(arr,size,index+1);
    
    return;
    
   
}

int main()
{
   int arr[] = {23,56,23,45,23,54,7,34,2,1,34,6,657,34,23,2,345,546,56,34};
   int size = sizeof(arr)/sizeof(arr[0]);
   
   selectionSort(arr,size, 0);
   
   
   for(int i = 0; i<size; i++){
       cout<< arr[i] << " ";
   }
}
