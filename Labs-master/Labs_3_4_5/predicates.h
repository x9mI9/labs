#ifndef PREDICATES_H_INCLUDED
#define PREDICATES_H_INCLUDED
namespace stu
{

bool less (int a, int b)
{
    return a < b;
}

bool greater (int a, int b)
{
    return a > b;
}

bool is_positive (int a)
{
    return a % 2 == 0;
}

}
#endif // PREDICATES_H_INCLUDED
