#include "Party.h"
#include <iostream>
#include <vector>

using namespace std;

template<class IClass>

Party<IClass>::Party() {

}


template<class IClass>
Party<IClass>::Party(const IClass& character) : m_member(character) {

}

template<class IClass>
void Party<IClass>::addCharacter(const IClass& character) {
	m_party.push_back(character);
}

template<class IClass>
void Party<IClass>::setPartyMember(const IClass& character){

	m_member = character;
}

template<class IClass>
std::vector<IClass> Party<IClass>::getParty() {
	return m_party;
}