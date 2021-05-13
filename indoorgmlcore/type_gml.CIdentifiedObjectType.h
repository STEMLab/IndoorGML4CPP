#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CIdentifiedObjectType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CIdentifiedObjectType

#include "type_gml.CDefinitionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CIdentifiedObjectType : public ::indoorgmlcore::gml::CDefinitionType
{
public:
	indoorgmlcore_EXPORT CIdentifiedObjectType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CIdentifiedObjectType(CIdentifiedObjectType const& init);
	void operator=(CIdentifiedObjectType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CIdentifiedObjectType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CIdentifiedObjectType
