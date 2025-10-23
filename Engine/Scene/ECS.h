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


template<typename component>
class ComponentManager{
    
    public:
    void add(EntityID e, const component& c);
    void remove(EntityID e); 
    component& get(EntityID e);

    private:
        std::unordered_map<EntityID, component> components;
        
};

