/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    // TODO: Adicione aqui seu código.
    int x1,y1,x2,y2,x3,y3;
    while (cin>>std::ws>>x1>>y1>>x2>>y2>>x3>>y3) {
        Ponto r1, r2, p;
        r1={x1,y1};
        r2={x2,y2};
        p={x3,y3};
        location_t a=pt_in_rect(r1, r2, p);
        if (a==BORDER) {cout<<"border\n";}
        else if (a==OUTSIDE) {cout<<"outside\n";}
        else {cout<<"inside\n";}
    }

    return 0;
}
