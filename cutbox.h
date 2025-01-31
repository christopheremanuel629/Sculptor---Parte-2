/***
    PROJETO SCULPTO 3D - PARTE 2
    ALUNO: CHRISTOPHER EMANUEL DE LIMA GOMES

***/

#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"

class CutBox : public FiguraGeometrica
{
    int x0; int x1; int y0; int y1; int z0; int z1;
public:
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    ~CutBox(){};
    void draw(Scultor &t);
};

#endif // CUTBOX_H
