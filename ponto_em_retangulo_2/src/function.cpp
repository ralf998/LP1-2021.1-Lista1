#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Adicione seu código aqui.
    if ((P.x>=IE.x && P.x<=SD.x)&&(P.y>=IE.y && P.y<=SD.y)) {
        if (P.x==IE.x || P.x==SD.x || P.y==IE.y || P.y==SD.y) {
            return location_t::BORDER;
        } else {
            return location_t::INSIDE;
        }
    } else {
        return location_t::OUTSIDE;
    }
}
