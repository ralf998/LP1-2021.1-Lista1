/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
    int x;
    float n=0;
    std::array<int, 5> y{0};
    while(cin>>x) {
        n++;
        if (x>=0 && x<25) {
            y[0]++;
        }
        else if (x>=25 && x<50) {
            y[1]++;
        }
        else if (x>=50 && x<75) {
            y[2]++;
        }
        else if (x>=75 && x<100) {
            y[3]++;
        }
        else {
            y[4]++;
        }
    }
    for (int a=0;a<5;a++) {
        std::cout<<setprecision(4)<<y[a]*100/n<<endl;
    }

    return 0;
}
