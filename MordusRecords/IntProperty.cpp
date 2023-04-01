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
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
	IntProperty* p = new IntProperty(getName(), m_value);
	return p;
}

std::string IntProperty::getValueAsString() const
{
	// � comp�ter
	return std::to_string(m_value);
}

std::ostream& IntProperty::printToStream(std::ostream& o) const
{
	// � comp�ter
	indent(o);
	o << getName() << ": " << getValueAsString() << std::endl;
	return o;
}