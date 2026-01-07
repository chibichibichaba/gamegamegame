#pragma once

#include "ECS.h"
#include "I_components.h"
#include "./Renderer/Renderer.h"

using EntityID = uint32_t;

class SpriteSystem {



    public:

    void update(Renderer& renderer,
        ComponentManager<SpriteComponent>& spriteManager,
        ComponentManager<TextureComponent>& textureManager,
        ComponentManager<PositionComponent>& positionManager){


       for (const auto& [entity, _] : spriteManager.all()) {
        if (!positionManager.has(entity)) continue;

        auto& spriteComp = spriteManager.get(entity);
        auto& pos = positionManager.get(entity);

        spriteComp.sprite.setPosition(pos.x, pos.y);
    }
    
 
}
};

class PhysicsSystem{};

class InputSystem{};

