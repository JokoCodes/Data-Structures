#pragma once
#ifndef PARTY_
#define PARTY_

#include <vector>
template<class IClass> 

class Party {
public:
	Party();
	Party(const IClass& character);
	void addCharacter(const IClass& character);
	void setPartyMember(const IClass& character);
	std::vector <IClass> getParty();


private: 
	std::vector<IClass> m_party;
	IClass m_member;
};
#endif // !PARTY_
