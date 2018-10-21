#include <iostream>
#include "predicates.h"
#include "functions.h"
int task1_2 (int* first, int* last)
{
    int* min_element = stu::search(first, last, stu::less);
    int* max_element = stu::search(first, last, stu::greater);
    return stu::accumulate(min_element, max_element, 1, stu::mul)  ;
}

int task2_2 (int* first, int* last)
{
    int* first_null = stu::find (first, last, 0);
    int* last_null = stu::reverse_find(last-1, first, 0);
    return stu::accumulate(first_null, last_null, 0, stu::sum);
}

int task3_2 (int* first, int* last)
{
    int* end = stu::reverse_find_if(last-1, first, stu::is_positive);
    return stu::accumulate(first, end, 0, stu::sum);
}
int main()
{
    int arr[5]{-3,2,4,-5,-1};
    std::cout << task3_2(arr, arr+5) << std::endl;
    return 0;
}
