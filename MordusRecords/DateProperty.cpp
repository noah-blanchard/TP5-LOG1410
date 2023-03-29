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
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
	BaseProperty* bp = new DateProperty(getName(), m_date.getDay(), m_date.getMonth(), m_date.getYear());
	return bp;
}

std::string DateProperty::getValueAsString() const 
{
	// � comp�ter
	return m_date.toString();
}

std::ostream& DateProperty::printToStream(std::ostream& o) const
{
	indent(o);
	return o << getName() << " : " << getValueAsString();
}
