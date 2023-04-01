///////////////////////////////////////////////////////////
//  URLProperty.cpp
//  Implementation of the Class URLProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "URLProperty.h"


URLProperty::URLProperty(std::string name, std::string displayText, std::string URL)
	: BaseProperty(name), m_displayText(displayText), m_URL(URL)
{
}

URLProperty* URLProperty::clone() const
{
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
	URLProperty* p = new URLProperty(getName(), m_displayText, m_URL);
	return p;
}

std::string URLProperty::getValueAsString() const
{
	// � comp�ter
	return m_URL;
}

std::ostream& URLProperty::printToStream(std::ostream& o) const
{
	// � comp�ter
	indent(o);
	o << getName() << ": " << getValueAsString() << std::endl;
	return o;
}