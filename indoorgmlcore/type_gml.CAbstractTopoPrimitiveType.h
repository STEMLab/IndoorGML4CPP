#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTopoPrimitiveType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTopoPrimitiveType

#include "type_gml.CAbstractTopologyType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractTopoPrimitiveType : public ::indoorgmlcore::gml::CAbstractTopologyType
{
public:
	indoorgmlcore_EXPORT CAbstractTopoPrimitiveType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractTopoPrimitiveType(CAbstractTopoPrimitiveType const& init);
	void operator=(CAbstractTopoPrimitiveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractTopoPrimitiveType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTopoPrimitiveType
