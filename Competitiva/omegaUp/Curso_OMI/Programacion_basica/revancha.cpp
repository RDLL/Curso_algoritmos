#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::vector<int> a;
    int n,b,prom;
    prom = 0;
    std::cin >> n;

    for(int i = 0; i< n; i++){
        std::cin >> b;
        prom += b;
        a.push_back(b);
    }

    std::cout << *std::min_element(a.begin(),a.end()) << ' ' << *std::max_element(a.begin(),a.end()) << ' ' << prom/n;
    return 0;
}
