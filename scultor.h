#ifndef SCULPTOR_H
#define SCULPTOR_H
#include "Voxels.h"
#include <string>
 
class Sculptor {
private:
    Voxels ***v;
    int nx, ny, nz; 
    float r, g, b, a; 

public:
    Sculptor(int _nx, int _ny, int _nz);
    ~Sculptor();
    void setColor(float r, float g, float b, float a);   
    void putVoxels(int x, int y, int z);
    void cutVoxels(int x, int y, int z);
    int getx();
    int gety();
    int getz();

    void writeOFF(const std::string &filename);
};

#endif // SCULPTOR_H
