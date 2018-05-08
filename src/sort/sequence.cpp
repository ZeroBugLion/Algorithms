#include "sort.h"
#include <iostream>
using namespace std;

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



