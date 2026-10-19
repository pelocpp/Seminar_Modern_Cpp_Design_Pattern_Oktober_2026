// =====================================================================================
// VirtualBaseClassDestructor.cpp // Virtual Base Class Destructor
// =====================================================================================

#include <memory>
#include <print>
#include <span>
#include <string>
#include <string_view>
#include <vector>

// Virtual Base Class Destructor

namespace VirtualBaseClassDestructor {

    class Base
    {
    public:
        virtual ~Base()  // <== add keyword 'virtual' in front of this line !!!
        {
            // do some important cleanup in class Base
            std::println("d'tor Base");
        }

        // some virtual methods
        virtual void doSomething() {}
    };

    class Derived : public Base
    {
    public:
        ~Derived()
        {
            // do some important cleanup in class Derived
            std::println("d'tor Derived");
        }
    };

    static void test01() {

        Base* b = new Derived();
        // use b
        delete b; // here's the problem!
    }
}

void main_virtual_base_class_destructor()
{
    using namespace VirtualBaseClassDestructor;
    test01();
}

// =====================================================================================
// End-of-File
// =====================================================================================
