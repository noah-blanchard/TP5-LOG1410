///////////////////////////////////////////////////////////
//  StringProperty.cpp
//  Implementation of the Class StringProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "StringProperty.h"


StringProperty::StringProperty(std::string name, std::string value)
	: BaseProperty(name), m_value(value)
{
}

StringProperty* StringProperty::clone() const
{
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
	StringProperty* p = new StringProperty(getName(), m_value);
	return p;
}

std::string StringProperty::getValueAsString() const
{
	// � comp�ter
	return m_value;
}

std::ostream& StringProperty::printToStream(std::ostream& o) const
{
	// � comp�ter
	indent(o);
	o << getName() << ": " << getValueAsString() << std::endl;
	return o;
}
