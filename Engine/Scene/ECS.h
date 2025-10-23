#pragma once
#include <string>
#include <cinttypes>
#include <unordered_map>

struct Entity{
    uint32_t EnityID;
    std::string name;
};


class EntityManager{
    
    public:

    Entity create(const std::string& name) ;
    void kill();




};


class ComponentManager{

};

