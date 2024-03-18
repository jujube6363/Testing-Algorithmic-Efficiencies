#include <stdio.h>
void printArray(int arr[]){
    for(int i=0; i<5; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[5]);
}

int BinarySearch(int array[], int length, int target){
    int low = 0;
    int high = length-1;
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(target<array[mid]){
            high = mid-1;
        }
        else if(target>array[mid]){
            low = mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int* InsertionSort(int Array[]){
    //printArray(Array);
    for(int i=1; i<6; i++){
        int key = Array[i];
        //printf("This is my key: %d\n", key);
        int j = i - 1;
        while(j>=0 && Array[j]>key){
            //printf("This is array j+1: %d\n", Array[j+1]);
            //printf("This is array j: %d\n", Array[j]);
            Array[j+1] = Array[j];
            j = j-1;

            printArray(Array);
            //printf("This is j now: %d\n", j);
        }
        Array[j+1] = key;
        //printArray(Array);
    }
    printArray(Array);
}

void SelectionSort(int Array[], int length){
    //printArray(Array);
    int startingindex = 0;
    while(startingindex<length){
        int min = Array[startingindex];
        int mindex = startingindex;
        for(int i=startingindex+1; i<length; i++){
            if(Array[i]<min){
                min = Array[i];
                mindex = i;
            }
        }
        int temp = Array[startingindex];
        Array[startingindex] = Array[mindex];
        Array[mindex] = temp;
        startingindex++;
    }
    printArray(Array);
}

int main(void){
    int Array[6] = {5, 4, 3, 2, 1, 0};
    printArray(Array);
    InsertionSort(Array);
    printArray(Array);
    //printf("%d", BinarySearch(Array, 6, 3));

}