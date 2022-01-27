#include <iostream>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    std::string pl;
    int j=0;
    int aux=0;
    std::cin >> pl;


    for(int i = pl.length()-1; i >= 0; --i){
        if(pl[i]!=pl[j])
            aux++;
        ++j;
    }
    
    if(aux == 0)
        std::cout << "Si";
    else
        std::cout << "No";
    return 0;
}
