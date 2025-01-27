#include "putvoxels.h"

PutVoxels::PutVoxels(int x, int y, int z, float r, float g, float b, float a)
{
this->x=x; this->y=y; this->z=z; this->r=r; this->g=g; this->b=b; this->a=a;
}

void PutVoxels::draw(Scultor &t)
{
    t.setColor(r,g,b,a);
    t.putVoxels(x,y,z);
}
