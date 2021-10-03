/*
intro to OOP in C++
https://youtu.be/_bYFu9mBnr4?t=30311
OOP in c++ has got specifics you should know

overview
-------------------------
structs
https://youtu.be/_bYFu9mBnr4?t=30488
structs by convention are used for smaller things, classes for larger stuff
c++ structs and classes are pretty similar


class members
    data members, ie variables in a class
    methods
    constructors

Encapsulation
    hide the inner details of a class
    have public interface to interact with any instance of a class

Inheritance
    classes can inheirit stuff from other classes

Polymorphism
    classes can be interpreted as their parent class

-------------------------


intro to structs
https://youtu.be/_bYFu9mBnr4?t=30640

as stated above, diff b/t structs and class is mostly conventional
    structs usually for smaller things, classes for larger 
there are some differences in access modifiers
    public
    private
    protected

public members can be accessed from outside class instance
private members will not be visible and can only be set/get through that instance
protected members will extend down to any class/struct that inheirits from it

the only diff b/t structs and class is
    struct members are by default public
    class members are by default private
otherwise, they're both pass by value, they can both contain methods and data members, they can both use inheiritance 
-it is possbible to change the access modifiers of members by declaring private: or public:
-in other languages, structs and classes are much different

in c++, people by convention use PODS:
    Plain Old Data Structs
    meaning data members, trying to avoid functonality & methods


*/