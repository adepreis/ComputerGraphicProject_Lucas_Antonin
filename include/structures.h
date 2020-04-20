#ifndef  STRUCTURES_INC
#define  STRUCTURES_INC

//GML library
#include <glm/glm.hpp>

struct Material
{
	glm::vec3 color = glm::vec3(0.0f, 0.0f, 1.0f);
	float kd = 0.5f;
	float ka = 0.5f;
	float ks = 1.0f;
	float alpha = 500.0f;

	Material() {}

	Material(glm::vec3 c) {
		color = c;
	}
};

struct Light
{
public:
	//glm::vec3 direction;
	glm::vec3 pos;

	glm::vec3 color;

	Light(glm::vec3 p, glm::vec3 c) {
		pos = p;
		color = c;
	}
};

#endif