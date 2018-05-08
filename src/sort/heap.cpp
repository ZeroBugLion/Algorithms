#include "sort.h"
#include <iostream>
using namespace std;
#define INT_MAX 0x7fffffff


#define PARENT(i)   ((i)/2)
#define LEFT(i)     ((i)*2)
#define RIGHT(i)    ((i)*2 + 1)

void MaxHeapify(int *sequence,int heapSize,int i)
{
    int left = LEFT(i);
    int right = RIGHT(i);
    int largest = i;
    if (left <= heapSize && sequence[left] > sequence[i])
    {
        largest = left;
    }
    if (right <= heapSize && sequence[right] > sequence[largest])
    {
        largest = right;
    }
    if(largest != i)
    {
        EXCHANGE(sequence[i],sequence[largest]);
        MaxHeapify(sequence, heapSize, largest);
    }
    
}

void BuildMaxHeap(int *sequence,int sequenceLen,int& heapSize)
{
    heapSize = sequenceLen - 1;
    for(int iTmp = (sequenceLen - 1) / 2;iTmp >= 0;iTmp--)
    {
        MaxHeapify(sequence, heapSize, iTmp);
    }
}

void HeapSort(int *sequence,int sequenceLen)
{
    int heapSize = 0;
    BuildMaxHeap(sequence,sequenceLen,heapSize);
    for(int iTmp = sequenceLen -  1;iTmp >= 1;iTmp--)
    {
        EXCHANGE(sequence[0],sequence[iTmp]);
        heapSize--;
        MaxHeapify(sequence, heapSize, 0);
    }
}



