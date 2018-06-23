#include <iostream>
 
int main()
{
    int n;
 
    std::cout << "N: "; 
    std::cin >> n;
 
    int sum = 0;
    for (int i = 0, tmp; i < n; ++i, sum += tmp)
        std::cin >> tmp;
 
    std::cout << "result: " << (double)sum / (double)n << std::endl;
 
    return 0;
}