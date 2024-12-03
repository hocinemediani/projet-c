#include "mandelbrot.h"

int mandelbrot (complexe_t z0, complexe_t c, double seuil, int maxit) {
    complexe_t zn = z0;
    int iterations = 0;

    while (module (zn) <= seuil && iterations < maxit) {
        complexe_t znSquared;
        multiplier (&znSquared, zn, zn);
        ajouter (&zn, znSquared, c);
        iterations++;
    }

    return iterations;
}
