#pragma once
#include <string>

class Musician
{
    private:
        std::string name;
        int age;
        int price;

    public:
        Musician();
        Musician(std::string name_in, int price_in, int age_in);
        std::string getName();
        int getAge();
        int getPrice();
    
};
