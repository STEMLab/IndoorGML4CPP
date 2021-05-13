#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTopologyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTopologyType

#include "type_gml.CAbstractGMLType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractTopologyType : public ::indoorgmlcore::gml::CAbstractGMLType
{
public:
	indoorgmlcore_EXPORT CAbstractTopologyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractTopologyType(CAbstractTopologyType const& init);
	void operator=(CAbstractTopologyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractTopologyType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTopologyType
