//
// Created by Alvin on 1/29/2021.
//
#include <iostream>
#include "Entity.h"

int main()
{
    Entity e(99);
    Entity cpy(e);
    e.ShowPropertyValues();
    std::cout << "-------" << std::endl;
    cpy.ShowPropertyValues();
}


