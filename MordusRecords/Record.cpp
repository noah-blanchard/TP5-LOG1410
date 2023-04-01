///////////////////////////////////////////////////////////
//  Record.cpp
//  Implementation of the Class Record
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Record.h"


Record::Record(std::string title)
	: m_properties(title)
{
}

Record* Record::clone() const
{
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
	Record* r = new Record(m_properties.getName());
	return r;
}

DateProperty& Record::addProperty(std::string name, int day, int month, int year)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
	BaseProperty& p = m_properties.addProperty(DateProperty(name, day, month, year));
	return dynamic_cast<DateProperty&>(p);
}

IntProperty& Record::addProperty(std::string name, int value)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
	BaseProperty& p = m_properties.addProperty(IntProperty(name, value));
	return dynamic_cast<IntProperty&>(p);
}

FloatProperty& Record::addProperty(std::string name, float value)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
	BaseProperty& p = m_properties.addProperty(FloatProperty(name, value));
	return dynamic_cast<FloatProperty&>(p);
}

SectionProperty& Record::addProperty(std::string name)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
	BaseProperty& p = m_properties.addProperty(SectionProperty(name));
	return dynamic_cast<SectionProperty&>(p);
}

StringProperty& Record::addProperty(std::string name, std::string value)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
	BaseProperty& p = m_properties.addProperty(StringProperty(name, value));
	return dynamic_cast<StringProperty&>(p);
}

URLProperty& Record::addProperty(std::string name, std::string displayText, std::string URL)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
	BaseProperty& p = m_properties.addProperty(URLProperty(name, displayText, URL));
	return dynamic_cast<URLProperty&>(p);
}

PropertyIterator Record::begin()
{
	// À compléter
	return m_properties.begin();
}

PropertyIterator Record::end()
{
	// À compléter
	return m_properties.end();
}

PropertyIterator_const Record::cbegin() const
{
	// À compléter
	return m_properties.cbegin();
}

PropertyIterator_const Record::cend() const
{
	return m_properties.cend();
}

void Record::deleteProperty(PropertyIterator_const child)
{
	m_properties.deleteProperty(child);
}

std::ostream& operator<<(std::ostream& o, const Record& rec)
{
	return o << rec.m_properties << std::endl;
}
