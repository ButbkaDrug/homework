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

    int maxPullups = 10;

    public:

    void printAge(){

        std::cout << "I am " << age + 5 << " years old.\n";
    }

    void printMaxPullups(){

        std::cout << "I can do " << maxPullups << " pullups!\n";
    }
};

class Girl : public Person{

    int maxRunDistance = 5;

    public:

    void printAge(){

        std::cout << "I am " << age - 2 << " years old.\n";
    }

    void printMaxRunDistance(){

        std::cout << "I can run a " << maxRunDistance << "km\n";
    }
};

int main(){

    Boy dimka;

    dimka.sayHello();
    dimka.printName();
    dimka.printAge();
    dimka.printMaxPullups();

    Girl valya;

    valya.printAge();
    valya.printMaxRunDistance();

    return 0;
}
