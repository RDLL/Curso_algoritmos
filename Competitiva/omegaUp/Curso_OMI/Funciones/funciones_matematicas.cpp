#include <iostream>
#include <cmath>
#include <iomanip>
#include <map>

float abs(float a){
    if(a < 0)
        return -1*a;
    else
        return a;
}

float max(float a, float b){
    if(a > b)
        return a;
    else return b;
}

float min(float a, float b){
    if(a < b)
        return a;
    else return b;
}

float sroot(float a){
    return sqrt(a);
}

float pot(float a, float b){
    return pow(a,b);
} 

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    std::multimap<int,float> r;
    int a,b;
    float c,d;
    std::cin >> a;
    for(int i = 0; i < a; ++i){
        std::cout << "introducir b" << '\n';
        std::cin >> b;
        if(b == 1 || b == 4)
            std::cin >> c;
        else
            std::cin >> c >> d;
        switch (b) {
            case 1:
                r.insert(std::pair<int,float>(1,abs(c)));
                break;
            case 2:
                r.insert(std::pair<int,float>(2,max(c,d)));
                break;
            case 3:
                r.insert(std::pair<int,float>(3,min(c,d)));
                break;
            case 4:
                r.insert(std::pair<int,float>(4,sroot(c)));
                break;
            case 5:
                r.insert(std::pair<int,float>(5,pot(c,d)));
                break;
        }
    }
    for(std::multimap<int,float>::iterator it = r.begin(); it != r.end(); ++it){
        if((*it).first == 4)
            std::cout << std::setprecision(2) << std::fixed << (*it).second <<'\n';
        else std::cout << (int)(*it).second << '\n';;
    }
}

