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
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
	Record* rp = new Record(m_properties.getName());
	return rp;
}

DateProperty& Record::addProperty(std::string name, int day, int month, int year)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	BaseProperty& bp = m_properties.addProperty(DateProperty(name, day, month, year));
	return dynamic_cast<DateProperty&>(bp);
}

IntProperty& Record::addProperty(std::string name, int value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	BaseProperty& bp = m_properties.addProperty(IntProperty(name, value));
	return dynamic_cast<IntProperty&>(bp);
}

FloatProperty& Record::addProperty(std::string name, float value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	BaseProperty& bp = m_properties.addProperty(FloatProperty(name, value));
	return dynamic_cast<FloatProperty&>(bp);
}

SectionProperty& Record::addProperty(std::string name)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	BaseProperty& bp = m_properties.addProperty(SectionProperty(name));
	return dynamic_cast<SectionProperty&>(bp);
}

StringProperty& Record::addProperty(std::string name, std::string value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	BaseProperty& bp = m_properties.addProperty(StringProperty(name, value));
	return dynamic_cast<StringProperty&>(bp);
}

URLProperty& Record::addProperty(std::string name, std::string displayText, std::string URL)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	BaseProperty& bp = m_properties.addProperty(URLProperty(name, displayText, URL));
	return dynamic_cast<URLProperty&>(bp);
}

PropertyIterator Record::begin()
{
	// � compl�ter
	return m_properties.begin();
}

PropertyIterator Record::end()
{
	// � compl�ter
	return m_properties.end();
}

PropertyIterator_const Record::cbegin() const
{
	// � compl�ter
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
	// need to show every property of m_properties donc il faut un for
	// d'abord on met le nom de la section
	/*o << rec.m_properties << std::endl;
	for (auto it = rec.cbegin(); it != rec.cend(); ++it)
	{
		o << *it << std::endl;
	}
	return o;*/
}
