#include "ECS.h"
#include <iostream> //for debugging


Entity EntityManager::create(const std::string& name){

    std::unordered_map<std::string, uint32_t> entity;
    
    if(entity.size() == 0){
        uint32_t EntityID = 0;
        entity.insert({name, EntityID});
    }

    else {
        uint32_t EntityID = entity.size();
        entity.insert({name, EntityID});
    }
};



void EntityManager::kill(){};
