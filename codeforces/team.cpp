#include <iostream>

int main(){
    int n;
    int p, v, t;
    int c{0};
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cin >> p >> v >> t;
        if((p && t && v) || (p && t) || (p && v) || (t && v)){
            c++;
        }
    }
    std::cout << c;
    return 0;
}