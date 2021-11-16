#include <iostream>

#define N_MAX 64
int m[N_MAX];

void f(int i, int n) {
    if(i<n) {
        for(int v=0;v<n;++v) {
            bool g =1;
            for(int x=0;x<i;++x)
                if(m[x]==v) {
                    g=0;
                    break;
                }
            if(g) {
                m[i] = v;
                f(i+1,n);
            }
        }
    }
    else{
        for (int j=0;j<n;++j)
            std::cout << m[j] << " ";
        std::cout << "\n";
    }
}

int main() {
    f(0,5);
    return 0;
}
