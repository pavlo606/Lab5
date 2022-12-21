#pragma once
#include <list>
#include "Musician.h"


class MusicFestival
{
    private:
        int max_price;

    public:
        MusicFestival();
        MusicFestival(int max_price, std::list<Musician*> musicians_in);

        void add_musician(std::string name_in, int price_in, int age_in);
        void remove_musicians(std::string name);
        void print_musicians();

        int total_price;
        std::list<Musician*> musicians;
};