#pragma once

#include "IClass.h"
#include "IRace.h"

class CharacterFactory
{
	public:
		CharacterFactory() {}

		enum enumOfTypeCharacter { RogueType, WizardType, FighterType, ClericType };

		IClass* CreateCharacter(enumOfTypeCharacter, IRace* race);

		virtual ~CharacterFactory() {

		}

};

		