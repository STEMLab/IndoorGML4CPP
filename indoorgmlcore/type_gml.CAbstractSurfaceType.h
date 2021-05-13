#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSurfaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSurfaceType

#include "type_gml.CAbstractGeometricPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractSurfaceType : public ::indoorgmlcore::gml::CAbstractGeometricPrimitiveType
{
public:
	indoorgmlcore_EXPORT CAbstractSurfaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractSurfaceType(CAbstractSurfaceType const& init);
	void operator=(CAbstractSurfaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractSurfaceType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSurfaceType
