#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    /*codigo*/
    for (int n=0;n<SIZE/2;n++) {
        std::swap(arr[n], arr[SIZE-n-1]);
    }
}
