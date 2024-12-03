#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct {
    double realPart;
    double imaginaryPart;
} complexe_t;


double reelle (complexe_t complexNumber);


double imaginaire (complexe_t complexNumber);


/* Must have reelle (complexe_t complex) = newRealPart */
void set_reelle (complexe_t *complexNumber, double newRealPart);


/* Must have ImaginaryPart (complexe_t complex) = newImaginaryPart */
void set_imaginaire (complexe_t *complexNumber, double newImaginaryPart);


/* Must have reelle (complexe_t complex) = newRealPart and ImaginaryPart (complexe_t complex) = newImaginaryPart */
void init (complexe_t *complexNumber, double newRealPart, double newImaginaryPart);


/* Must have reelle (result) = reelle (complexNumber) and ImaginaryPart (result) = ImaginaryPart (complexNumber) */
void copie (complexe_t *result, complexe_t complexNumber);


/* Must have reelle (result) = reelle (conjugateComplex) and ImaginaryPart (result) = - ImaginaryPart (conjugateComplex) */
void conjugue (complexe_t *result, complexe_t conjugateComplex);


/* Must have reelle (result) = reelle (firstComplex) + reelle (secondComplex) and ImaginaryPart (result) =  ImaginaryPart (firstComplex) + ImaginaryPart (secondComplex) */
void ajouter (complexe_t *result, complexe_t firstComplex, complexe_t secondComplex);


/* Must have reelle (result) = reelle (firstComplex) - reelle (secondComplex) and ImaginaryPart (result) =  ImaginaryPart (firstComplex) - ImaginaryPart (secondComplex) */
void soustraire (complexe_t *result, complexe_t firstComplex, complexe_t secondComplex);


/* Must have reelle (result) = reelle (firstcomplex) * reelle (secondComplex) - imaginaire (firstComplex) * imaginaire (secondComplex) */
void multiplier (complexe_t *result, complexe_t firstComplex, complexe_t secondComplex);


/* Must have reelle (result) = factor * reelle (complex) */
void echelle (complexe_t *result, complexe_t complexNumber, double factor);


void puissance (complexe_t *result, complexe_t complexNumber, int exponant);


/* Must have module_carre (complexNumber) = reelle (complexNumber) ** 2 + imaginaire (complexNumber) ** 2 */
double module_carre (complexe_t complexNumber);


/* Must have module (complexNumber) = sqrt (module (complexNumber)) */
double module (complexe_t complexNumber);


double argument (complexe_t complexNumber);

#endif