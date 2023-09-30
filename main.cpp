#include <iostream>
#include <string>
#include "MusicFestival.h"


int main()
{

    MusicFestival mus(200000, {new Musician, new Musician("Kalush", 60000, 28)});
    mus.add_musician("Taylor Swift", 80000, 32);

    mus.print_musicians();

    mus.remove_musicians("Rammstein");
    mus.add_musician("Taylor Swift", 80000, 32);

    mus.print_musicians();

    return 0;
}