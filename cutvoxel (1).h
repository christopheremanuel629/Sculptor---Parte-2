#ifndef CUTVOXELS_H
#define CUTVOXELS_H

#include "figurageometrica.h"

class CutVoxels:public FiguraGeometrica
{
    int x; int y; int z;
public:
    CutVoxels(int x, int y, int z);
    ~CutVoxels(){};
    void draw(Scultor &t);
};

#endif // CUTVOXEL_H
