#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCategoryType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCategoryType

#include "type_gml.CCodeType.h"


namespace indoorgmlcore
{

class CCategoryType : public ::indoorgmlcore::gml::CCodeType
{
public:
	indoorgmlcore_EXPORT CCategoryType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCategoryType(CCategoryType const& init);
	void operator=(CCategoryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCategoryType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_altova_CCategoryType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCategoryType
