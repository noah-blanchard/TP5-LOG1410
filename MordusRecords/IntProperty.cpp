///////////////////////////////////////////////////////////
//  IntProperty.cpp
//  Implementation of the Class IntProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "IntProperty.h"

IntProperty::IntProperty(std::string name, int i)
	: BaseProperty(name), m_value(i)
{
}

IntProperty* IntProperty::clone() const
{
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
	IntProperty* ip = new IntProperty(getName(), m_value);
	return ip;
}

std::string IntProperty::getValueAsString() const
{
	// À compéter
	return std::to_string(m_value);
}

std::ostream& IntProperty::printToStream(std::ostream& o) const
{
	// À compéter
	indent(o);
	return o << getName() << " : " << getValueAsString();
}