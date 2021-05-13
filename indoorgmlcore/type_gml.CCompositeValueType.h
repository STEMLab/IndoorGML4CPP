#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeValueType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeValueType

#include "type_gml.CAbstractGMLType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCompositeValueType : public ::indoorgmlcore::gml::CAbstractGMLType
{
public:
	indoorgmlcore_EXPORT CCompositeValueType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCompositeValueType(CCompositeValueType const& init);
	void operator=(CCompositeValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCompositeValueType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCompositeValueType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CValuePropertyType, _altova_mi_gml_altova_CCompositeValueType_altova_valueComponent> valueComponent;
	struct valueComponent { typedef Iterator<gml::CValuePropertyType> iterator; };
	MemberElement<gml::CValueArrayPropertyType, _altova_mi_gml_altova_CCompositeValueType_altova_valueComponents> valueComponents;
	struct valueComponents { typedef Iterator<gml::CValueArrayPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeValueType
