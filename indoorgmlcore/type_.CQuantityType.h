#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CQuantityType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CQuantityType

#include "type_gml.CMeasureType.h"


namespace indoorgmlcore
{

class CQuantityType : public ::indoorgmlcore::gml::CMeasureType
{
public:
	indoorgmlcore_EXPORT CQuantityType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CQuantityType(CQuantityType const& init);
	void operator=(CQuantityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CQuantityType); }
	indoorgmlcore_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_altova_CQuantityType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CQuantityType
