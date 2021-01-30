//
// Created by Alvin on 1/29/2021.
//

#ifndef UNTITLED_ENTITY_H
#define UNTITLED_ENTITY_H


class Entity {
    private:
        int maxHealth;
        int * ptr;
    public:
        Entity(int);
        Entity(const Entity&);

        void ShowPropertyValues();
};


#endif //UNTITLED_ENTITY_H
