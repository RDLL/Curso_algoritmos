#include <iostream>
#include <tuple>
#include <algorithm>
#include <utility>
#include <cmath>

using par = std::pair<int,int>;

par captura(){
    par a;
    std::cin >> a.first;
    std::cin >> a.second;
    return a;
}

int area(par a,par b){
    int c;
    c = abs(a.first - b.first);
    c *= abs(a.second - b.second);
    return c;
}


int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    using par = std::pair<int, int>;
  
    par a = captura();
    par b = captura();
    par c = captura();
    par d = captura();

    if(a.first > c.first && b.first > d.first){
        swap(a,c);
        swap(b,d);
    }

    std::cout << a.first << '\t' << a.second << '\n' << c.first << '\t' << c.second << '\n';
    std::cout << area(a,b) + area(c,d) - area(b,c);

    return 0;
}
