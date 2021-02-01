#include <QCoreApplication>
#include "Phys/bead.h"
#include "Phys/vecd3d.h"
#include "iostream"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Physics::Bead *bead=new Physics::Bead(nullptr,new Physics::VecD3d(),1,0);
    // Write your code here
    std::cout<<"Membrane simulation"<<std::endl;

    return a.exec();
}
