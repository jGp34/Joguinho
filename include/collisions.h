#ifndef COLLISIONS_H
#define COLLISIONS_H

#include <string>
#include <glad/glad.h>


bool collisionSphereSphere(float radius1, float radius2, glm::vec4 pos1, glm::vec4 pos2);
bool collisionAABBsphere(glm::vec3 Min, glm::vec3 Max, glm::vec3 center, float radius);
bool collisionPointPlane(glm::vec3 point, glm::vec3 normal, glm::vec3 pointPlane);

#endif