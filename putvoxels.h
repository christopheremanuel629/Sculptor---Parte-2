#ifndef PUTVOXELS_H
#define PUTVOXELS_H
#include "figurageometrica.h"
#include "scultor.h"

class PutVoxels: public FiguraGeometrica
{
int x, y, z;
public:
    PutVoxels(int x, int y, int z, float r, float g, float b, float a);
    ~PutVoxels(){};
    void draw(Scultor &t);
};

#endif // PUTVOXELS_H
