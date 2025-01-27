#include "cutvoxels.h"

CutVoxel::CutVoxels(int x, int y, int z)
{
    this->x=x; this->y=y; this->z=z;
}

void CutVoxels::draw(Scultor &t)
{
    t.cutVoxels(x,y,z);
}
