#pragma once
#include <string>
#include <cinttypes>

struct Entity{

    
};


class EntityManager{

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

