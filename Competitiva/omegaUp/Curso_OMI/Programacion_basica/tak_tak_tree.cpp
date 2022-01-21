#include <ios>
#include <iostream>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    int f;
    std:: cin >> f;
    int i = 0;
    while(f%11 != 1){
        f *= 2;
        i++;
    }
    std::cout << i << ' ' << f;
    return 0;
}
