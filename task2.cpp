#include <string>
#include <array>
#include <iostream>

class Person{

    public:

        std::string name = "Dimka";
        int age = 4;

        void sayHello(){

            std::cout << "Hello, everyone" << std::endl;
        }

        void printAge(){

            std::cout << "I am " << age << " years old.";
        }

        void printName(){

            std::cout << "My Name is " << name << std::endl;
        }

};

class Boy : public Person{


    public:

    void printAge(){

    }

};

class Girl : public Person{


    public:

    void printAge(){

    }

};

int main(){

    Boy dimka;

    dimka.sayHello();
    dimka.printName();
    dimka.printAge();

    Girl valya;

    valya.printAge();

    return 0;
}
