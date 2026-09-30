#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

typedef struct {
    double A;
    double B;
    double resultado;
} Operador;

Operador soma(Operador op);
Operador sub(Operador op);
Operador mult(Operador op);
Operador div(Operador op);

#endif
