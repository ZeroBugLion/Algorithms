#include "sort.h"
#include <iostream>
using namespace std;
#define INT_MAX 0x7fffffff



bool IsSequenceEqual(int* sequenceLeft,int * sequenceRight,int sequenceLen)
{
    for(int iTmp = 0;iTmp < sequenceLen;iTmp ++)
    {
        if(sequenceLeft[iTmp] != sequenceRight[iTmp])
        {
            return false;
        }
    }
    return true;
}

void PrintSequence(int *sequence,int sequenceLen)
{
    cout<<"sequence with len:"<<sequenceLen<<endl;
    for(int iTmp = 0;iTmp < sequenceLen;iTmp ++)
    {
        cout<<sequence[iTmp]<<",";
    }
    cout<<endl;
}


void InsertionSort(int *sequence,int sequenceLen)
{
    for (int iTmp = 1; iTmp < sequenceLen; iTmp++)
    {
        int key = sequence[iTmp];
        int jTmp = iTmp - 1;
        while (jTmp >= 0 && sequence[jTmp] > key)
        {
            sequence[jTmp + 1] = sequence[jTmp];
            jTmp --;
        }
        sequence[jTmp + 1] = key;
    }
}

void Merge(int *sequence,int from,int mid,int to)
{
    int lenOne = mid - from;
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
        sequenceTwo[iTmp] = sequence[mid + iTmp];
    }
    sequenceTwo[lenTwo] = INT_MAX;
    
    int posOne = 0;
    int posTwo = 0;
    for (int iTmp = from;iTmp<to;iTmp++)
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
    if (to - from > 1)
    {
        int mid = (from + to)/2;
        MergeSort(sequence,from,mid);
        MergeSort(sequence,mid,to);
        Merge(sequence,from,mid,to);
    }
}


void HeapSort(int *sequence,int sequenceLen)
{
    
}



