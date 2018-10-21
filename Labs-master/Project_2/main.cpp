#include <iostream>
/*#include "algorithms.h"
#include "binary_operations.h"
#include "predicates.h"
#include "tasks.h"*/

int main()

{
const int n = 8;
int arr[n]{ 4, -5, 6, 7, 8, 9, -10 };

int sum = 0;

for (int i = 0; i < n; ++i)
{
if (arr[i] < 0)
{
sum += arr[i];
}
}

int max = arr[n];
int min = arr[n];

for (int i = 0; i < n; i++)
{
if (arr[i] > max)
{
max = arr[i];
}
}

for (int i = 0; i < n; ++i)
{
if (arr[i] < min)
{
min = arr[i];
}
}

std::cout << sum << std::endl;
std::cout << max << std::endl;
std::cout << min << std::endl;
return 0;
}
/*{
    *int array[5] {10,2,3,4,5};
    int result = stu::count_if(array, array + 5, stu::is_positive);
    //std::cout << result << std::endl;
    task_15(array, 0, 5);
    return 0;*
}*/
