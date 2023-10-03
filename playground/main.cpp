
#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

#include <GLFW/glfw3.h>


int main()
{
	glm::vec3 v{ 1, 2, 3 };

	glfwInit();

	std::cout << "Hello GLM: " << glm::to_string(v) << std::endl;
	return 0;
}
