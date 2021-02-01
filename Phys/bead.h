#ifndef BEAD_H
#define BEAD_H
#include "vecd3d.h"
#include <qobject.h>
#define KbT 1
QT_BEGIN_NAMESPACE
namespace Physics {
class Bead;
}
QT_END_NAMESPACE

class Physics::Bead:public QObject
{
public:
    Bead(QObject*,VecD3d*,double D,int ID);
    void update(double dt);
    int ID;
    VecD3d _coords;
    double _D;
    VecD3d _force;
};

#endif // BEAD_H
