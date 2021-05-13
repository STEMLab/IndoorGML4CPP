#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionProxyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionProxyType

#include "type_gml.CDefinitionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDefinitionProxyType : public ::indoorgmlcore::gml::CDefinitionType
{
public:
	indoorgmlcore_EXPORT CDefinitionProxyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDefinitionProxyType(CDefinitionProxyType const& init);
	void operator=(CDefinitionProxyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDefinitionProxyType); }
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CDefinitionProxyType_altova_definitionRef> definitionRef;
	struct definitionRef { typedef Iterator<gml::CReferenceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionProxyType
