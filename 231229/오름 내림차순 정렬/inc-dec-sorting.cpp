#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

int main() {
    int n;
    int arr[100];
    std::cin >> n;

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::sort(arr, arr+n);
    for(int i=0; i<n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    std::sort(arr, arr+n, std::greater<int>());
    for(int i=0; i<n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}