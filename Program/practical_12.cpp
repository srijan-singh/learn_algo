// Fibonacci with Memo

#include <iostream>
#include <unordered_map>

using std::unordered_map;

typedef unordered_map<int, long> Memo;

long long fib(int value, Memo memo = {})
{
    if(memo.count(value) != 0)
    {
        return memo[value];
    }

    //Base Case/Termination Case
    
    // fib(1) = 1 and fib(0) = 1
    if(value <= 1)
    {
        return 1;
    }

    // fib(n) = fib(n-1) + fib(n-2)
    memo[value] = fib(value-1, memo) + fib(value-2, memo);

    return memo[value]; 
}

int main()
{
    std::cout<<fib(36);
    return 0;
}