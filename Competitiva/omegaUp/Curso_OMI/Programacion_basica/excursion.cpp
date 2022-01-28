#include <iostream>
#include <map>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    std::map<int,int> e;
    int n,p;
    std::cin >> n >> p;
    int a;
    int pr[p];
    for(int i = 0; i < n; ++i){
        std::cin >> a;
        e.insert(std::pair<int,int>(i,a));
    }
    for(int i = 0; i < p; ++i)
        std::cin >> pr[i];
    for(int i = 0; i < p ; ++i)
        std::cout << e.find(pr[i]-1)->second <<'\n';
    return 0;

}
