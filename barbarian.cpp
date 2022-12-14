/*********************************************************************
** Program name:barbarian.cpp
** Author: Kelly Usenko
** Date: 5/14/2018
** Description: Implementation of barbarian class
*********************************************************************/
#include "barbarian.hpp"


/******************************************************************
*                       Barbarian::Barbarian
* Default constructor
/******************************************************************/
Barbarian::Barbarian()
{
	this->attackAmnt = 0;
	this->attackRounds = 2;
	this->attackRange = 6;

	this->defenseAmnt = 0;
	this->defenseRounds = 2;
	this->defenseRange = 6;

	this->name = "Barbarian";
	this->armor = 0;
	this->strength = 12;

	this->healthStatus = ALIVE;
	this->charType = BARBARIAN;
	this->specialAbility = false;

	//create attack and defense die

	this->attackDie = new Die(attackRange);
	this->defenseDie = new Die(defenseRange);

}

/******************************************************************
*                       Barbarian::~Barbarian
* Destructor
/******************************************************************/

Barbarian::~Barbarian()
{

	//cout << "Barbarian Destructor" << endl;

	if (this->attackDie != NULL)
	{
		delete this->attackDie;
	}
	
	if (this->defenseDie != NULL)
	{
		delete this->defenseDie;
	}

}

void Barbarian::printSpecialAbility()
{
	//do nothing
}


/******************************************************************
*                       Barbarian::attack()
*
/******************************************************************/

/*
int Barbarian::attack()
{
	this->attackAmnt = 0; //reset

	//roll die and return combined total
	for (int i = 0; i < this->attackRounds; i++)
	{
		this->attackAmnt += this->attackDie->rollDie() ;
	}
	 //cout << "total attack: " << this->attackAmnt << endl;

	return this->attackAmnt;
}
*/


/******************************************************************
*                       Barbarian::defend(int attackerAmnt)
*
/******************************************************************/

/*
int Barbarian::defend(int attackerAmnt)
{
	//damage = attacker roll amount - defense roll - defense armor

	int inflictedDamage = 0;

	this->defenseAmnt = this->generateDefense();

	//take input of attack generated by oponent and adjust according to armor and special attributes
	inflictedDamage = attackerAmnt - this->defenseAmnt - this->armor;

	if (inflictedDamage > 0) // defense roll + armor did not deflect all damage
	{  
		//subtract amount from strength 
		this->strength = this->strength - inflictedDamage;

		//check if character is still alive
		if (this->strength <= 0)
		{
			//character is dead
			this->healthStatus = DEAD;
		}
	}
	else if (inflictedDamage <= 0) //character has more defense than attack
	{
		//do not change strength
	}

	return inflictedDamage;
}
*/




