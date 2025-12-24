#pragma once
#include <string>
#include <cinttypes>
#include <unordered_map>
#include <memory>
#include <typeindex>

using EntityID = uint32_t;

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


template<typename T>
class ComponentManager{
    
    public:
    void add(EntityID e, const T& c){
        components[e] = c;
    };

    void remove(EntityID e){
        components.erase(e);
    }; 

    component& get(EntityID e){
        return components.at(e);
    };

 
    private:
        std::unordered_map<EntityID, T> components;
        
};

class Registry {
public:
    Entity createEntity(const std::string& name) { return entityManager.create(name); }

    template<typename T>
    void addComponent(EntityID id, const T& component) {
        getManager<T>().add(id, component);
    }

    template<typename T>
    T& getComponent(EntityID id) {
        return getManager<T>().get(id);
    }

private:
    EntityManager entityManager;
    std::unordered_map<std::type_index, std::shared_ptr<void>> managers;

    template<typename T>
    ComponentManager<T>& getManager() {
        auto type = std::type_index(typeid(T));
        if (!managers.contains(type))
            managers[type] = std::make_shared<ComponentManager<T>>();
        return *std::static_pointer_cast<ComponentManager<T>>(managers[type]);
    }
};
