#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int* a, const int* b) {
    return *a + *b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// La función [multiplicar] evalúa dos parámetros de tipo entero y retorna el producto de los mismos.
int multiplicar(int a, int b) {
    return a*b; /* TODO: implementar */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n & 1) == 0;
}
