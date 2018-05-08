#include "sort.h"
#define INT_MAX 0x7fffffff


void Merge(int *sequence,int from,int mid,int to)
{
    int lenOne = mid - from + 1;
    int* sequenceOne = new int[lenOne + 1];
    for (int iTmp = 0; iTmp < lenOne; iTmp++)
    {
        sequenceOne[iTmp] = sequence[from + iTmp];
    }
    sequenceOne[lenOne] = INT_MAX;
    
    int lenTwo = to - mid;
    int* sequenceTwo = new int[lenTwo + 1];    
    for (int iTmp = 0; iTmp < lenTwo; iTmp++)
    {
        sequenceTwo[iTmp] = sequence[mid + iTmp + 1];
    }
    sequenceTwo[lenTwo] = INT_MAX;
    
    int posOne = 0;
    int posTwo = 0;
    for (int iTmp = from;iTmp<= to;iTmp++)
    {
        if(sequenceOne[posOne] <= sequenceTwo[posTwo])
        {
            sequence[iTmp] = sequenceOne[posOne];
            posOne ++;
        }
        else
        {
            sequence[iTmp] = sequenceTwo[posTwo];
            posTwo ++;
        }
    }
}


void MergeSort(int *sequence,int from,int to)
{
    if (from < to)
    {
        int mid = (from + to)/2;
        MergeSort(sequence,from,mid);
        MergeSort(sequence,mid + 1,to);
        Merge(sequence,from,mid,to);
    }
}




