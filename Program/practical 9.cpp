// Factorial with Memo

#include <iostream>
#include <unordered_map>

using std::unordered_map;

typedef unordered_map<int, long> Memo;

long long factorail(int value, Memo memo = {})
{
    if(memo[value] != NULL)
    {
        return memo[value];
    }

    //Base Case/Termination Case
    // 1! = 1 and 0! = 1
    if(value <= 1)
    {
        return 1;
    }
    // n! = n * (n-1)!

    memo[value] = value * factorail(value-1);

    return memo[value]; 
}

int main()
{
    std::cout<<factorail(14);
}