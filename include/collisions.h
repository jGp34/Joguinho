#ifndef COLLISIONS_H
#define COLLISIONS_H

#include <string>
#include <glad/glad.h>

// Definimos uma estrutura que armazenará dados necessários para renderizar
struct SceneObject
{
    std::string  name;        // Nome do objeto
    size_t       first_index; // Índice do primeiro vértice dentro do vetor indices[] definido em BuildTrianglesAndAddToVirtualScene()
    size_t       num_indices; // Número de índices do objeto dentro do vetor indices[] definido em BuildTrianglesAndAddToVirtualScene()
    GLenum       rendering_mode; // Modo de rasterização (GL_TRIANGLES, GL_TRIANGLE_STRIP, etc.)
    GLuint       vertex_array_object_id; // ID do VAO onde estão armazenados os atributos do modelo
    glm::vec3    bbox_min;    // Axis-Aligned Bounding Box do objeto
    glm::vec3    bbox_max;
};


bool collisionSphereSphere(float radius1, float radius2, glm::vec4 pos1, glm::vec4 pos2);
bool collisionAABBsphere(glm::vec3 Min, glm::vec3 Max, glm::vec3 center, float radius);
bool collisionPointSphere(glm::vec3 point, glm::vec3 center, float radius);

#endif