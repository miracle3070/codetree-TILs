#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

int main() {
    int n;
    std::string arr[100];

    std::cin >> n;
    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::sort(arr, arr+n);
    for(int i=0; i<n; i++)
        std::cout << arr[i] << std::endl;
    return 0;
}