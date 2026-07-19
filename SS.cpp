#include <iostream>

int FI_GetSmallestIdx(int *IA_Arr, int I_Len, int I_Start = 0)
{
    int I_SmallestIdx = I_Start;
    for (size_t SzT_Idx = I_Start; SzT_Idx < I_Len; SzT_Idx++)
    {
        if (IA_Arr[SzT_Idx] < IA_Arr[I_SmallestIdx])
        {
            I_SmallestIdx = SzT_Idx;
        }
    }
    return I_SmallestIdx;
}

void F_SelectionSort(int* IA_Arr, int I_Len)
{
    for (size_t SzT_Idx = 0; SzT_Idx < I_Len - 1; SzT_Idx++)
    {
        int I_MinIdx = FI_GetSmallestIdx(IA_Arr, I_Len, SzT_Idx + 1);
        
        int I_Temp = IA_Arr[I_MinIdx];
        IA_Arr[I_MinIdx] = IA_Arr[SzT_Idx];
        IA_Arr[SzT_Idx] = I_Temp;
    }
}

void F_PrintArray(int *IA_Arr, int I_Len, bool B_Nl = false)
{
    for (size_t SzT_Idx = 0; SzT_Idx < I_Len; SzT_Idx++) // Bruh
    {
        std::cout << IA_Arr[SzT_Idx] << (B_Nl ? "\n" : " ");
    }
    std::cout << "\n";
}

int main(int argc, char const *argv[])
{
    int IA_Arr[] = {156, 141, 35, 94, 88, 61, 111};
    int I_Len = sizeof(IA_Arr) / sizeof(IA_Arr[0]);
    F_PrintArray(IA_Arr, I_Len);
    F_SelectionSort(IA_Arr, I_Len);
    F_PrintArray(IA_Arr, I_Len);

    return 0;
}