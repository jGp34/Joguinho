#define NOMINMAX
#include <glm/glm.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>

#include <string>
#include <glad/glad.h>
#include <iostream>

#include "collisions.h"



// colisão esfera x esfera utilizada entre os inimigos e projéteis do jogador
bool collisionSphereSphere(float radius1, float radius2, glm::vec4 pos1, glm::vec4 pos2)
{
    float distance = glm::distance(glm::vec3(pos1), glm::vec3(pos2));
    return distance < radius1 + radius2;

}


// colisão AABB x esfera utilizada entre o dragão e os inimigos
bool collisionAABBsphere(glm::vec3 Min, glm::vec3 Max, glm::vec3 center, float radius)
{
    float x = glm::max(Min.x, glm::min(center.x, Max.x));
    float y = glm::max(Min.y, glm::min(center.y, Max.y));
    float z = glm::max(Min.z, glm::min(center.z, Max.z));

    float distance = glm::distance(glm::vec3(x, y, z), center);
    
    return distance < radius;
}



// colisao ponto x plano utilizada entre os projéteis e a parede no final do jogo e os inimigos
bool collisionPointPlane(glm::vec3 point, glm::vec3 normal, glm::vec3 pointPlane){
    glm::vec3 v = point - pointPlane;
    float distance = glm::dot(v, normal);
    return distance < 0;
}


