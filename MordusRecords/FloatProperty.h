///////////////////////////////////////////////////////////
//  FloatProperty.h
//  Implementation of the Class FloatProperty
//  Created on:      11-mars-2023 10:47:25
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_1D553DAB_1EA2_4bf8_81C7_F3D305D864FB__INCLUDED_)
#define EA_1D553DAB_1EA2_4bf8_81C7_F3D305D864FB__INCLUDED_

#include "BaseProperty.h"

class FloatProperty : public BaseProperty
{

public:
	FloatProperty(std::string name, float f);
	virtual ~FloatProperty() = default;
	virtual FloatProperty* clone() const;

	virtual std::string getValueAsString() const;
	std::ostream& printToStream(std::ostream& o) const;

private:
	float m_value;

};
#endif // !defined(EA_1D553DAB_1EA2_4bf8_81C7_F3D305D864FB__INCLUDED_)
