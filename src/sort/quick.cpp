#include "sort.h"


int Partition(int *sequence,int from,int to)
{
    int pivot = sequence[to - 1];
    int i = from;
    for(int iTmp = from;iTmp < to - 2;iTmp++)
    {
        if(sequence[iTmp] <= pivot)
        {
            i = i + 1;
            EXCHANGE(sequence[i],sequence[iTmp]);
        }
    }
    EXCHANGE(sequence[i + 1],sequence[to - 1]);
    return i + 1;
}


void QuitSort(int *sequence,int from,int to)
{
    if (from < to)
    {
        int mid = Partition(sequence,from,to);
        QuitSort(sequence,from,mid);
        QuitSort(sequence,mid + 1,to);
    }

}




