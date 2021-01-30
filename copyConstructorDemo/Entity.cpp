//
// Created by Alvin on 1/29/2021.
//

#include <iostream>
#include "Entity.h"

Entity::Entity(int maxHealth)
{
    // invariant: must be between 1 and 100
    if(maxHealth < 1 || maxHealth > 100)
    {
        maxHealth = 100;
    }
    this->maxHealth = maxHealth;

    this->ptr = &this->maxHealth;
}

Entity::Entity(const Entity & other)
{
    this->maxHealth = other.maxHealth;  // same for shallow vs deep copy (soft vs hard copy)
    //this->ptr = &this->maxHealth;   // this is "deep copy" -> keeps data consistent
    this->ptr = other.ptr;  // this is "soft copy"
}

void Entity::ShowPropertyValues()
{
    std::cout << "maxHealth: " << this->maxHealth << std::endl;
    std::cout << "ptr: " << this->ptr << std::endl;
    std::cout << "address of maxHealth: " << &this->maxHealth << std::endl;
}


