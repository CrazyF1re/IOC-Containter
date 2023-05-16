#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <iprocessor.h>
#include <ioccontainer.h>



class IntelProcessor:public IProcessor
{
public:
    IntelProcessor(){}
    IntelProcessor(std::string version, ProcessorType type, double speed):IProcessor(version,type,speed)
    {

    }
};

class AMDProcessor:public IProcessor
{
public:
    AMDProcessor(){}
    AMDProcessor(std::string version, ProcessorType type, double speed):IProcessor(version,type,speed)
    {

    }
};


class Computer
{
    IOCContainer injector;
public:
    Computer(){}
    void SetProc(std::string version, ProcessorType type, double speed)
    {
        if (version == "AMD")
        {
            injector.RegisterInstance<IProcessor,AMDProcessor>();
        }
        else if (version == "Intel")
        {
            injector.RegisterInstance<IProcessor,IntelProcessor>();
        }
        injector.GetObject<IProcessor>()->SetProcessor(version, type,  speed);
    }
    void Info()
    {
        injector.GetObject<IProcessor>()->GetInfo();
    }

};








//написать похожий класс для амд
//написать Iprocessor + добавить в класс компьютер как атрибут


#endif // COMPUTER_H
