///////////////////////////////////////////////////////////
//  StringProperty.h
//  Implementation of the Class StringProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_236E4063_8FD8_4779_8199_EE5A41CADFEE__INCLUDED_)
#define EA_236E4063_8FD8_4779_8199_EE5A41CADFEE__INCLUDED_

#include "BaseProperty.h"

class StringProperty : public BaseProperty
{

public:
	StringProperty(std::string name, std::string value);
	virtual ~StringProperty() = default;
	virtual StringProperty* clone() const;

	virtual std::string getValueAsString() const;
	std::ostream& printToStream(std::ostream& o) const;

private:
	std::string m_value;

};
#endif // !defined(EA_236E4063_8FD8_4779_8199_EE5A41CADFEE__INCLUDED_)
