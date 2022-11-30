#include "MusicFestival.h"
#include <iostream>

MusicFestival::MusicFestival()
{
    this->max_price = 100000;
    this->total_price = 0;
}

MusicFestival::MusicFestival(int max_price_in, std::list<Musician*> musicians_in)
{
    this->max_price = max_price_in;
    this->total_price = 0;
    for (Musician* m: musicians_in)
    {
        if (total_price + m->getPrice() <= max_price)
        {
            this->total_price += m->getPrice();
            this->musicians.push_front(m);

            std::cout << m->getName()  << " price - " << total_price << std::endl;
        } else 
        {
            std::cout << m->getName() << " is too expensive!" << std::endl;
        }
    }
}

void MusicFestival::add_musician(std::string name_in, int price_in, int age_in)
{
    if (total_price + price_in <= max_price)
    {
        this->total_price += price_in;
        this->musicians.push_front(new Musician(name_in, price_in, age_in));

        std::cout << name_in  << " price - " << total_price << std::endl;
    } else 
    {
        std::cout << name_in << " is too expensive!" << std::endl;
    }
}

void MusicFestival::remove_musicians(std::string name)
{
    for (Musician* m: musicians)
    {
        if (m->getName() == name)
        {
            this->total_price -= m->getPrice();
        }
    }
    musicians.remove_if([name](Musician* musician) -> bool {return musician->getName() == name; });
}

void MusicFestival::print_musicians()
{
    std::cout << "Printing Musicians" << std::endl;
    for (Musician* m: musicians)
    {
        std::cout << "name - " << m->getName() << std::endl;
        std::cout << "age - " << m->getAge() << std::endl;
        std::cout << "price - " << m->getPrice() << std::endl << std::endl;
    }
    std::cout << "Total price - " << total_price << "$" << std::endl << std::endl;
}
