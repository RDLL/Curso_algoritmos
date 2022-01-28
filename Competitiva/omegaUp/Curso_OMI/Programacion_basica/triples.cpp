#include <iostream>
#include <vector>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    std::vector<int> a;
    int n;
    bool x = 0;
    std::cin >> n;
    int v[n];
    for(int i = 0; i < n; ++i){
        std::cin >> v[i];
        if(v[i]%3 == 0){
            a.push_back(i+1);
            x = 1;
        }
    }
    if(x){
        std::cout << a.size() << '\n';
        for(std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
            std::cout << *it << ' ';
    }else std::cout << "No hay triples.";
    return 0;
}
