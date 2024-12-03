#include "complexe.h"
#include <math.h>


double reelle (complexe_t complexNumber) {
    return complexNumber.realPart;
}


double imaginaire (complexe_t complexNumber) {
    return complexNumber.imaginaryPart;
}


void set_reelle (complexe_t *complexNumber, double newRealPart) {
    complexNumber -> realPart = newRealPart;
}


void set_imaginaire (complexe_t *complexNumber, double newImaginaryPart) {
    complexNumber -> imaginaryPart = newImaginaryPart;
}


void init (complexe_t *complexNumber, double newRealPart, double newImaginaryPart) {
    complexNumber -> realPart = newRealPart;
    complexNumber -> imaginaryPart = newImaginaryPart;
}


void copie (complexe_t *result, complexe_t complexNumber) {
    result -> realPart = complexNumber.realPart;
    result -> imaginaryPart = complexNumber.imaginaryPart;
}


void conjugue (complexe_t *result, complexe_t conjugateComplex) {
    result -> realPart = conjugateComplex.realPart;
    result -> imaginaryPart = -conjugateComplex.imaginaryPart;
}


void ajouter (complexe_t *result, complexe_t firstComplex, complexe_t secondComplex) {
    result -> realPart = firstComplex.realPart + secondComplex.realPart;
    result -> imaginaryPart = firstComplex.imaginaryPart + secondComplex.imaginaryPart;
}


void soustraire (complexe_t *result, complexe_t firstComplex, complexe_t secondComplex) {
    result -> realPart = firstComplex.realPart - secondComplex.realPart;
    result -> imaginaryPart = firstComplex.imaginaryPart - secondComplex.imaginaryPart;
}


void multiplier (complexe_t *result, complexe_t firstComplex, complexe_t secondComplex) {
    result -> realPart = firstComplex.realPart * secondComplex.realPart - firstComplex.imaginaryPart * secondComplex.imaginaryPart;
    result -> imaginaryPart = firstComplex.realPart * secondComplex.imaginaryPart + firstComplex.imaginaryPart * secondComplex.realPart;
}


void echelle (complexe_t *result, complexe_t complexNumber, double factor) {
    result -> realPart = complexNumber.realPart * factor;
    result -> imaginaryPart = complexNumber.imaginaryPart * factor;
}


void puissance (complexe_t *result, complexe_t complexNumber, int exponant) {
    complexe_t tmpComplex = complexNumber;
    *result = complexNumber;

    for (int i = 0; i < exponant; i++) {
        multiplier (result, *result, tmpComplex);
    }
}


double module_carre (complexe_t complexNumber) {
    return complexNumber.realPart * complexNumber.realPart + complexNumber.imaginaryPart * complexNumber.imaginaryPart;
}


double module (complexe_t complexNumber) {
    return sqrt (module_carre (complexNumber));
}


double argument (complexe_t complexNumber) {
    return atan2 (complexNumber.imaginaryPart, complexNumber.realPart);
}