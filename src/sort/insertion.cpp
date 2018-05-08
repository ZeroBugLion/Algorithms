#include "sort.h"


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

