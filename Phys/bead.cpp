#include "bead.h"

Physics::Bead::Bead(QObject* p,VecD3d* coord,double D,int id):QObject(p),ID(id),_coords(coord),_D(D){
    _force.zero();
}
void Physics::Bead::update(double dt){
    _coords._coords[0]+=_force._coords[0]*dt*_D;
    _coords._coords[1]+=_force._coords[1]*dt*_D;
    _coords._coords[2]+=_force._coords[2]*dt*_D;
    _force.zero();
}
