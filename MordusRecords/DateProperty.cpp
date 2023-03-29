///////////////////////////////////////////////////////////
//  DateProperty.cpp
//  Implementation of the Class DateProperty
//  Created on:      11-mars-2023 10:47:25
//  Original author: franc
///////////////////////////////////////////////////////////

#include "DateProperty.h"

DateProperty::DateProperty(std::string name, int day, int month, int year)
	: BaseProperty(name), m_date(day,month,year)
{
}

BaseProperty* DateProperty::clone() const 
{
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
	BaseProperty* bp = new DateProperty(getName(), m_date.getDay(), m_date.getMonth(), m_date.getYear());
	return bp;
}

std::string DateProperty::getValueAsString() const 
{
	// À compéter
	return m_date.toString();
}

std::ostream& DateProperty::printToStream(std::ostream& o) const
{
	indent(o);
	return o << getName() << " : " << getValueAsString();
}
