#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeOrdinalReferenceSystemType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeOrdinalReferenceSystemType

#include "type_gml.CTimeReferenceSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeOrdinalReferenceSystemType : public ::indoorgmlcore::gml::CTimeReferenceSystemType
{
public:
	indoorgmlcore_EXPORT CTimeOrdinalReferenceSystemType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeOrdinalReferenceSystemType(CTimeOrdinalReferenceSystemType const& init);
	void operator=(CTimeOrdinalReferenceSystemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeOrdinalReferenceSystemType); }
	MemberElement<gml::CTimeOrdinalEraPropertyType, _altova_mi_gml_altova_CTimeOrdinalReferenceSystemType_altova_component> component;
	struct component { typedef Iterator<gml::CTimeOrdinalEraPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeOrdinalReferenceSystemType
