#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
enum ProcessorType
{ x86,
   x64
};

class IProcessor
{

};

class IntelProcessor
{
    std::string Version;
    ProcessorType Type;
    double Speed;
public:
    IntelProcessor(ProcessorType Type);//different constructors
    IntelProcessor(double speed,ProcessorType Type,std::string version);
    void get_Info();
    void setType(ProcessorType);
    void setVersion(std::string version);
    void setSpeed(double speed);
};


class AMDProcessor
{
    std::string Version;
    ProcessorType Type;
    double Speed;
public:
    AMDProcessor(ProcessorType Type);//different constructors
    AMDProcessor(double speed,ProcessorType Type,std::string version);
    void get_Info();
    void setType(ProcessorType);
    void setVersion(std::string version);
    void setSpeed(double speed);
};

class Computer
{
public:
    IntelProcessor* GetProcessor(double speed, ProcessorType type, std::string version)
    {
       return new IntelProcessor(speed, type, version);
    }
};




//написать похожий класс для амд
//написать Iprocessor + добавить в класс компьютер как атрибут


#endif // COMPUTER_H
