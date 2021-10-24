/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    // TODO: Adicione seu código aqui.
    int m, n;
    while(cin>>m>>n) {
        int r=m;
        if (n>0) {
            for (int x=m+n-1;x>m;x--) {
                r=r+x;
            }
        }
        else if (n<0) {
            for (int x=m+n+1;x<m;x++) {
                r=r+x;
            }
        }
        cout<<r<<endl;
    }

    return 0;
}
