#include "mandelbrot.h"

int mandelbrot(complexe_t z0, complexe_t c, double treshold, int max) {
    complexe_t zn = z0;
    int iterations = 0;

    while (module(zn) <= treshold && iterations < max) {
        complexe_t zn_squared;
        multiplier(&zn_squared, zn, zn);
        ajouter(&zn, zn_squared, c);
        iterations++;
    }

    return iterations;
}