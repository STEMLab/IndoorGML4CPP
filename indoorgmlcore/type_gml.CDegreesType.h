#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDegreesType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDegreesType

#include "type_gml.CDegreeValueTypeType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDegreesType : public ::indoorgmlcore::gml::CDegreeValueTypeType
{
public:
	indoorgmlcore_EXPORT CDegreesType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDegreesType(CDegreesType const& init);
	void operator=(CDegreesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDegreesType); }
	indoorgmlcore_EXPORT void operator=(const unsigned __int64& value);
	MemberAttribute<string_type,_altova_mi_gml_altova_CDegreesType_altova_direction, 1, 6> direction;	// direction CdirectionType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDegreesType
