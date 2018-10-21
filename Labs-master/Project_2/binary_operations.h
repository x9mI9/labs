#ifndef BINARY_OPERATIONS_H_INCLUDED
#define BINARY_OPERATIONS_H_INCLUDED

int sum (int a, int b)
{
    return a+b;
}

int mul (int a, int b)
{
    return a*b;
}

int sum_positive (int temp, int array_element)
{
    if (array_element > 0)
    {
        return temp + array_element;
    }
    return temp;
}

int mul_negative (int temp, int array_element)
{
    if (array_element < 0)
    {
        return temp * array_element;
    }
    return temp;
}

#endif // BINARY_OPERATIONS_H_INCLUDED
