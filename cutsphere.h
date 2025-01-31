/***
    PROJETO SCULPTO 3D - PARTE 2
    ALUNO: CHRISTOPHER EMANUEL DE LIMA GOMES

***/

#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"

class CutSphere : public FiguraGeometrica
{
    int xcenter; int ycenter; int zcenter; int radius;
public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void draw(Scultor &t);
    ~CutSphere(){};
};

#endif // CUTSPHERE_H
