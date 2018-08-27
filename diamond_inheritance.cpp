#include <iostream>
#include <string>

class base
{
public: 
    std::string d_name;
    virtual void getName()
    {
        std::cout << "base is printing:" << d_name << std::endl;
    }   
};

class derived1: public base
{  
    virtual void getName()
    {
        std::cout << "derived1 is printing" << std::endl;
    }   
};

class derived2: public base
{
    virtual void getName()
    {
        std::cout << "derived2 is printing" << std::endl;
    }   
};

class derived: public derived1, public derived2
{
    public:
    void getMyName()
    {
        std::cout << "get my name: " << d_name << std::endl;
    }
};

int main()
{
    base b;
    derived1 d1;
    derived2 d2;
    derived d;
    d.getMyName();
}

/*
 In member function 'void derived::getMyName()':
36:41: error: reference to 'd_name' is ambiguous
8:17: note: candidates are: std::string base::d_name
8:17: note:                 std::string base::d_name
*/
