#include "ECS.h"
#include <iostream> //for debugging




Entity EntityManager::create(const std::string& name){

    Entity e;
    e.entityName = name;
    e.entityID = NextID++;

    entities[name] = e.entityID;
    
    return e;
};



void EntityManager::kill(const std::string& name){

    entities.erase(name);
    

};
