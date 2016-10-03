#include <iostream>
#include "Generator.h"
//#include "Dice.h"

using namespace std;




int main() try
{

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

	
	Generator generator;
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	generator.CreateCharacter();
	
	system("pause");
	return EXIT_SUCCESS;

}
catch(const std::exception & e)
{
	std::cerr << "Caught exception: " << e.what() << std::endl;
	return EXIT_FAILURE;
}