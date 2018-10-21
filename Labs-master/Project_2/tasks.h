#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED
#include <iostream>
#include "algorithms.h"
#include "binary_operations.h"
#include "predicates.h"

void task_1 (int* first, int* last)
    {
        int temp1 = stu::accumulate (first, last, 0, sum_positive);
        std::cout << temp1 << std::endl;
        std::cout << stu::accumulate (first, last, 1, mul_negative);
    }

void task_15 (int* array, int first, int last)
    {
        std::cout << stu::average(array + first, array + last) << std::endl;
        std::cout << stu::find_index(array, first, last, stu::less) << std::endl;
        std::cout << stu::find_index(array, first, last, stu::greater) << std::endl;
    }

#endif // TASKS_H_INCLUDED
