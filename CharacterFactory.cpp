#include "CharacterFactory.h"
#include "AllRaces.h"
#include "AllClasses.h"


IClass* CharacterFactory::CreateCharacter(enumOfTypeCharacter enumOfTypeClass, IRace* race) {
	IClass* retVal = nullptr;
	switch (enumOfTypeClass) {
	case RogueType:
		retVal = new Rogue(race);
		break;
	case WizardType:
		retVal = new Wizard(race);
		break;
	case FighterType:
		retVal = new Fighter(race);
		break;
	case ClericType:
		retVal = new Cleric(race);
		break;
	}
	return retVal;
}