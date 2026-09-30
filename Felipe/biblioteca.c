#include "biblioteca.h"

Operador soma(Operador op) {
    op.resultado = op.A + op.B;
    return op;
}

Operador sub(Operador op) {
    op.resultado = op.A - op.B;
    return op;
}

Operador mult(Operador op) {
    op.resultado = op.A * op.B;
    return op;
}

Operador div(Operador op) {
    op.resultado = op.A / op.B;
    return op;
}
