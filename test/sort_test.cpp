#include "gtest/gtest.h"
#include "sort.h"

TEST(SORT,InsertionSort_OK)
{
    int arrayInput[6]={5,2,4,6,1,3};
    int arrayExpect[6]={1,2,3,4,5,6};

    PrintSequence(arrayInput,6);
    InsertionSort(arrayInput,6);
    PrintSequence(arrayInput,6);
    EXPECT_EQ(true,IsSequenceEqual(arrayInput,arrayExpect,6));
}

TEST(SORT,MergeSort_OK)
{
    int arrayInput[8]={2,4,5,7,1,2,3,6};
    int arrayExpect[8]={1,2,2,3,4,5,6,7};

    PrintSequence(arrayInput,8);
    MergeSort(arrayInput,0,7);
    PrintSequence(arrayInput,8);
    EXPECT_EQ(true,IsSequenceEqual(arrayInput,arrayExpect,8));
}


TEST(SORT,HeapSort_OK)
{
    int arrayInput[10]={16,14,10,8,7,9,3,2,4,1};
    int arrayExpect[10]={1,2,3,4,7,8,9,10,14,16};

    PrintSequence(arrayInput,10);
    HeapSort(arrayInput,10);
    PrintSequence(arrayInput,10);
    EXPECT_EQ(true,IsSequenceEqual(arrayInput,arrayExpect,10));
}



TEST(SORT,QuitSort_OK)
{
    int arrayInput[8]={2,8,7,1,3,5,6,4};
    int arrayExpect[8]={1,2,3,4,5,6,7,8};

    PrintSequence(arrayInput,8);
    QuitSort(arrayInput,0,7);
    PrintSequence(arrayInput,8);
    EXPECT_EQ(true,IsSequenceEqual(arrayInput,arrayExpect,8));
}





