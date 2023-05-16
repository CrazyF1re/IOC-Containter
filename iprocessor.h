#ifndef IPROCESSOR_H
#define IPROCESSOR_H

#include <iostream>
enum ProcessorType
{ x86 = 86,
   x64 = 64
};

class IProcessor
{
protected:
    std::string Version;
    ProcessorType Type;
    double Speed;
public:
    IProcessor(){}
    IProcessor(std::string version, ProcessorType type, double speed):Version(version),Type(type),Speed(speed){}
    void SetProcessor(std::string version, ProcessorType type, double speed)
    {
        Version = version;
        Type = type;
        Speed = speed;
    }
    void GetInfo()
    {
        std::cout << "Processor for " << Version << " Speed: " << Speed << " Type: x" << Type << "\n";
    }
    virtual ~IProcessor(){}


};
#endif // IPROCESSOR_H
