#ifndef __SORT_H__
#define __SORT_H__


bool IsSequenceEqual(int* sequenceLeft,int * sequenceRight,int sequenceLen);
void PrintSequence(int *sequence,int sequenceLen);


void InsertionSort(int *sequence,int sequenceLen);
void MergeSort(int *sequence,int from,int to);

void HeapSort(int *sequence,int sequenceLen);



#endif

