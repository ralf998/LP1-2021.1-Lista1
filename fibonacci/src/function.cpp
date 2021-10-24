#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
    std::vector<unsigned int> f;
    if (n<=1) {
        return std::vector<unsigned int>{f};
    }
    f.push_back(1);
    int a=1;
    int c=0;
    while(a<n) {
        f.push_back(a);
        a=a+f[c];
        c++;
    }

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return std::vector<unsigned int>{f};
}
