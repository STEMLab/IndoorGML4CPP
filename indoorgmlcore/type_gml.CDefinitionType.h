#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionType

#include "type_gml.CDefinitionBaseType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDefinitionType : public ::indoorgmlcore::gml::CDefinitionBaseType
{
public:
	indoorgmlcore_EXPORT CDefinitionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDefinitionType(CDefinitionType const& init);
	void operator=(CDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CDefinitionType_altova_remarks> remarks;
	struct remarks { typedef Iterator<xs::CstringType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionType
