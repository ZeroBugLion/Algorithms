#include "sort.h"


int Partition(int *sequence,int from,int to)
{
    int pivot = sequence[to];
    int i = from - 1;
    for(int iTmp = from;iTmp <= to - 1;iTmp++)
    {
        if(sequence[iTmp] <= pivot)
        {
            i++;
            EXCHANGE(sequence[i],sequence[iTmp]);
        }
    }
    EXCHANGE(sequence[i + 1],sequence[to]);
    return i + 1;
}


void QuitSort(int *sequence,int from,int to)
{
    if (from < to)
    {
        int mid = Partition(sequence,from,to);
        QuitSort(sequence,from,mid -1);
        QuitSort(sequence,mid + 1,to);
    }

}




