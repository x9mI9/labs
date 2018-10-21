#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
using BinaryPredicate = bool (*) (int, int);
using BinaryOperation = int(*)(int,int);
using UnaryPredicate = bool (*) (int);
namespace stu
{
int accumulate(int* first, int* last, int temp)
{
    for (; first != last; ++first)
    {
        temp += *first;
        //temp = temp + *first;
    }
    return temp;
}

int accumulate (int* first, int* last, int temp, BinaryOperation op)
{
    for (; first != last; ++first)
    {
        temp = op (temp, *first);
    }
    return temp;
}

int average (int* first, int* last)
{
    int temp = stu::accumulate (first, last, 0);
    return temp / (last-first);
}

int count_if (int* first, int* last, UnaryPredicate pr)
{
    int result = 0;
    for (; first != last; ++first)
    {
        if (pr(*first))
        {
            ++result;
        }
    }
    return result;
}

bool all_of (int* first, int* last, UnaryPredicate pr)
{
    for (; first != last; ++first)
    {
        if (!pr(*first))
        {
            return false;
        }
    }
    return true;
}

int find_index (int* array, int first, int last, BinaryPredicate pr)
{
    int element = array[first];
    int index = first;
    for (; first != last; ++first)
    {
        if (pr(array[first], element))
        {
            element = array[first];
            index = first;
        }
    }
    return index;
}
}
#endif // ALGORITHMS_H_INCLUDED
