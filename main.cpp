#include <QCoreApplication>

#include "computer.h"
int IOCContainer::s_nextTypeId = 115094801;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Computer testComputer;
    testComputer.SetProc("AMD",ProcessorType::x64,50);
    testComputer.Info();
    testComputer.SetProc("Intel",ProcessorType::x86,2600);
    testComputer.Info();
//std::string version, ProcessorType type, double speed

}
