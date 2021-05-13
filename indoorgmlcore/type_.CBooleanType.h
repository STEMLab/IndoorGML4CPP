#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CBooleanType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CBooleanType

#include "type_xs.CbooleanType.h"


namespace indoorgmlcore
{

class CBooleanType : public ::indoorgmlcore::xs::CbooleanType
{
public:
	indoorgmlcore_EXPORT CBooleanType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CBooleanType(CBooleanType const& init);
	void operator=(CBooleanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CBooleanType); }
	indoorgmlcore_EXPORT void operator=(const bool& value);

	MemberAttribute<string_type,_altova_mi_altova_CBooleanType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CBooleanType
