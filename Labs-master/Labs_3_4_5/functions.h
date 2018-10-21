#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
using BinaryOperation = int (*) (int,int);
using BinaryPredicate = bool (*) (int,int);
using UnaryPredicate = bool (*) (int);
namespace stu
{

int accumulate (int* first, int* last, int init, BinaryOperation op)
{
    for ( ; first < last; ++first)
    {
        init = op (init, *first);
    }
    return init;
}

int* search (int* first, int* last, BinaryPredicate pr)
{
    int* element = first++;
    for ( ; first < last; ++first)
    {
        if (pr(*first,*element))
        {
            element = first;
        }
    }
    return element;
}

int mul (int a, int b)
{
    return a * b;
}

int* find (int* first, int* last, int value)
{
    for ( ; first < last; ++first)
    {
        if (*first == value)
        {
            return first;
        }
    }
    return first;
}

int* find_if (int* first, int* last, UnaryPredicate upr)
{
    for ( ; first < last; ++first)
    {
        if (upr(*first))
        {
            return first;
        }
    }
    return first;
}

int* reverse_find (int* first, int* last, int value)
{
    for ( ; first > last-1; --first)
    {
        if (*first == value)
        {
            return first;
        }
    }
    return first;
}

int* reverse_find_if (int* first, int* last, UnaryPredicate upr)
{
    for ( ; first > last-1; --first)
    {
        if (upr(*first))
        {
            return first;
        }
    }
    return first;
}

int sum (int a, int b)
{
    return a+b;
}

}

#endif // FUNCTIONS_H_INCLUDED
