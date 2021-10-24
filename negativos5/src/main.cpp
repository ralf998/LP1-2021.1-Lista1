#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int n=0;
    int x;
    for (int i=0;i<SIZE;i++) {
        std::cin>>x;
        if (x<0) {
            n++;
        }
    }
    std::cout<<n;

    return 0;
}
