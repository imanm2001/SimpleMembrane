#ifndef VECD3D_H
#define VECD3D_H
#define det(x1,x2,y1,y2) x1*y2-x2*y1
#include <math.h>
#include <QVector3D>
#include <iostream>
namespace Physics {


class VecD3d
{

public:
    double _coords[3];
    VecD3d();
    VecD3d(double x,double y,double z);
    VecD3d(double[3]);
    VecD3d(VecD3d*);
    VecD3d(QVector3D*);
    void setValues(VecD3d*);
    void setValues(double,double,double);
    double len();
    double dot(VecD3d*);
    void cross(VecD3d*,VecD3d*);
    void zero();
    void add(double x,double y,double z);
    void add(VecD3d);
    void subVec(VecD3d*,VecD3d*);
    void sub(double x,double y,double z);
    void sub(VecD3d*);
    void multConst(double);
    void nomilize();
    void print();
    void debug();
    ~VecD3d();
};
}

#endif // VECD3D_H
