#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.
    if (n==0) {return { -1, -1 };}
    int b, s, bp, sp;
    s=V[0], b=V[0];
    bp=0, sp=0;
    for (int a=1;a<n;a++) {
        if (s>V[a]) {
            s=V[a];
            sp=a;
        } else if (b<=V[a]) {
            b=V[a];
            bp=a;
        }
    }

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return { sp, bp };
}
