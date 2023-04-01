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
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
	URLProperty* p = new URLProperty(getName(), m_displayText, m_URL);
	return p;
}

std::string URLProperty::getValueAsString() const
{
	// À compéter
	return m_URL;
}

std::ostream& URLProperty::printToStream(std::ostream& o) const
{
	// À compéter
	indent(o);
	o << getName() << ": " << getValueAsString() << std::endl;
	return o;
}