#include <iostream>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n,c,a,b;
    int i=1;
    std::cin >> n >> c;
    a=c;
    for(int j=0; j < n; ++j){
        std::cin >> b;
        a-=b;
        if(a > 0)
            ++i;
    }
    std::cout << i;
    return 0;
}

