/*********************************************************************
** Program name:character.hpp
** Author: Kelly Usenko
** Date: 5/14/2018
** Description: Definition of character class
*********************************************************************/


#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "die.hpp"

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <climits>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::stoi;
using std::stod;


enum CharacterType {NOT_SET, BARBARIAN, VAMPIRE, BLUEMEN, MEDUSA, HARRY_POTTER};
enum CharacterStatus { DEAD, ALIVE }; 


class Character {
protected:
	string name;
	int attackAmnt;		// holds amount generated for current attack
	int attackRounds;	// represents how many die rolled per attack
	int attackRange;	// represents number of sides for attack die
	int defenseAmnt;	// holds amount generated for current defense
	int defenseRounds;	// represents how many die rolled to generate defense
	int defenseRange;	// represents number of sides on defense die
	Die* attackDie;		// Die to be rolled to generate attack amount
	Die* defenseDie;	// Die to be rolled to generate defense amount
	int armor;			// lessens impact of an attack
	int strength;		// represents health level of character
	bool specialAbility;// indicates if character has special ability
	CharacterType charType;
	CharacterStatus healthStatus;
	


public:
	Character();
	// Character(const &Character); Copy Constructor?
	virtual ~Character();			// Destructor
	string getName();
	virtual int generateDefense();	// rolls defense die

	int getStrength();
	int getArmor();
	CharacterStatus getHealthStatus();
	CharacterType getCharacterType();
	virtual int attack();			// must be implemented by derived classes
	virtual int defend(int attackerAmnt);	// must be implemented by derived classes
	int getAttackAmnt();	//return amount generated by attack roll
	int getDefenseAmnt();	//returns amount generated by defense roll
	virtual bool getSpecialAbilityInd();
	virtual void printSpecialAbility() = 0;
	virtual void printCharacterInfo();


};


#endif