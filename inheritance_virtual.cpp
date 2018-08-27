#include <iostream>
#include <string>

class base
{
    virtual void getName()
    {
        std::cout << "base is printing" << std::endl;
    }   
};

class derived: public base
{
public:

    derived()
    {
        getName();
    }
    virtual void getName()
    {
        std::cout << "derived is printing" << std::endl;
    }
};

int main()
{
    base b;
    derived d;
}

//derived is printing
