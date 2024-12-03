#ifndef MANDELBROT_H
#define MANDELBROT_H

#include "complexe.h"

/**
 * Fonction qui calcule la vitesse de divergence de la suite de Mandelbrot.
 */
int mandelbrot (complexe_t z0, complexe_t c, double seuil, int maxit);

#endif // MANDELBROT_H
