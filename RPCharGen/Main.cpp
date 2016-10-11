#include <iostream>
#include "Generator.h"
#include "GLFW\glfw3.h"

using namespace std;




int main() try
{
	
	float my_angle = 0.0f;

	Generator generator;
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();

	int some_guy = 5;
	int some_girl = 6;
	int *some_pointer;
	some_pointer = &some_guy;
	//some_pointer = &some_girl;
	*some_pointer = 10;
	std::cout << some_guy << std::endl;
	std::cout << some_girl << std::endl;



	system("pause");

	GLFWwindow *gen_window;

	/* Initialize GLFW library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	gen_window = glfwCreateWindow(512, 512, "Hello World", NULL, NULL);
	if (!gen_window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(gen_window);

	

	//std::cout << "SKILLS: " << std::endl;
	//for(Skill s : skills)
	//{
	//	std::cout << s << std::endl;
	//	std::cout << "" <<std::endl;
	//	//std::cout <h< "   An elf would have a bonus of +" << Elf.stat_modifiers[s.stat]/2 << " due to their +" << Elf.stat_modifiers[s.stat] << " " << s.stat << " bonus." << std::endl;
	//}
	//
	//std::cout << "CLASSES: " << std::endl;
	//for(CharClass c :char_classes)
	//{
	//	std::cout << c << std::endl;
	//	std::cout << "" <<std::endl;
	//}

	//auto wep = PickRandom(weapons);
	//std::cout << "We start with a " << wep.name << " (" << wep.damage << "). We swing it an an orc, and do " << wep.damage.roll() << " damage!" << std::endl;

	
	return EXIT_SUCCESS;
	

}
catch(const std::exception & e)
{
	std::cerr << "Caught exception: " << e.what() << std::endl;
	return EXIT_FAILURE;
}