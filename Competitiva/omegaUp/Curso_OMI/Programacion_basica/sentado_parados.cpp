#include <ios>
#include <iostream>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int r,s;
    int b,m;
    cin >> r >> s >> b;
    m = r*s;
    b > m ? cout << m << ' ' << b-m : b == 0 ? cout << 0 << ' ' << 0: cout << m <<' ' << 0; 
    return 0;
}

