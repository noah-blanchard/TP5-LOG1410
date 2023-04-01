///////////////////////////////////////////////////////////
//  LinkManager.cpp
//  Implementation of the Class LinkManager
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "LinkManager.h"

LinkManager::LinkManager()
{
}

Link& LinkManager::addLink(std::string linkType, const Record& rec1, const Record& rec2, bool bidirectional)
{
	// � compl�ter: ajouter un nouveau lien en construisant un lien qui sera copi�
	// 	            ins�rer la copie dans le conteneur STL
	//              retourner la r�f�rence � la copie qui vient d'�tre cr��e
	m_links.push_back(LinkPtr(new Link(linkType, rec1, rec2, bidirectional)));
	return *m_links.back();
}

Link& LinkManager::addLink(const Link& link)
{
	// � compl�ter: ajouter un nouveau lien en clonant le lien qui est pass� en param�tre
	// 	            ins�rer la copie dans le conteneur STL
	//              retourner la r�f�rence � la copie qui vient d'�tre cr��e
	m_links.push_back(LinkPtr(link.clone()));
	return *m_links.back();
}


LinkIterator LinkManager::begin()
{
	// � compl�ter
	return m_links.begin();
}

LinkIterator LinkManager::end()
{
	// � compl�ter
	return m_links.end();
}

LinkIterator_const LinkManager::cbegin() const
{
	// � compl�ter
	return m_links.cbegin();
}

LinkIterator_const LinkManager::cend() const
{
	// � compl�ter
	return m_links.cend();
}

void LinkManager::deleteLink(LinkIterator_const child)
{
	// � compl�ter
	m_links.erase(child);
}

LinkIterator LinkManager::findLinkName(std::string name)
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le nom d'un des 2 enregistrement correspond au nom pass� en param�tre
	for (auto it = begin(); it != end(); ++it)
	{
		if ((it)->getRecord1().getTitle() == name || (it)->getRecord2().getTitle() == name)
		{
			return it;
		}
	}
	return end();

}

LinkIterator_const LinkManager::findLinkName(std::string name) const
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le nom d'un des 2 enregistrement correspond au nom pass� en param�tre
	//               si aucun �l�ment ne correspond, retourner end()
	for (auto it = cbegin(); it != cend(); ++it)
	{
		if (it->getRecord1().getTitle() == name || (it)->getRecord2().getTitle() == name)
		{
			return it;
		}
	}
	return cend();
}

LinkIterator LinkManager::findLinkType(std::string linkType)
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le type correspond au type pass� en param�tre
	//               si aucun �l�ment ne correspond, retourner end()
	for (auto it = begin(); it != end(); ++it)
	{
		if ((it)->getLinkType() == linkType)
		{
			return it;
		}
	}
	return end();
}

LinkIterator_const LinkManager::findLinkType(std::string linkType) const
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le type correspond au type pass� en param�tre
	//               si aucun �l�ment ne correspond, retourner end()
	for (auto it = cbegin(); it != cend(); ++it)
	{
		if ((it)->getLinkType() == linkType)
		{
			return it;
		}
	}
	return cend();
}

