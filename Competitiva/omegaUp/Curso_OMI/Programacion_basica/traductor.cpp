#include <iostream>
#include <map>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    std::map<int,int> e;
    int d,w;
    std::cin >> d >> w;
    int a,b;
    int pr[w];
    for(int i = 0; i < d; ++i){
        std::cin >> a >> b;
        e.insert(std::pair<int,int>(a,b));
    }
    for(int i = 0; i < w; ++i)
        std::cin >> pr[i];
    for(int i = 0; i < w ; ++i)
        if(e.count(pr[i]))
            std::cout << e.find(pr[i])->second <<'\n';
        else
            std::cout << "c?\n";
    return 0;
}
