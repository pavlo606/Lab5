#include "Musician.h"
#include <string>

Musician::Musician()
{
    this->name = "Rammstein";
    this->age = 59;
    this->price = 100000;
}

Musician::Musician(std::string name_in, int price_in, int age_in)
{
    this->name = name_in;
    this->age = age_in;
    this->price = price_in;
}

int Musician::get_age()
{
    return age;
}

int Musician::get_price()
{
    return price;
}

std::string Musician::get_name()
{
    return name;
}