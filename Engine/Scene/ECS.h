#pragma once
#include <string>
#include <cinttypes>
#include <unordered_map>

struct Entity{
    uint32_t entityID;
    std::string entityName;
};


class EntityManager{
    
    public:

    Entity create(const std::string& name) ;
    void kill(const std::string& name);


    private:
    std::unordered_map<std::string, uint32_t> entities;
    uint32_t NextID = 0;


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

