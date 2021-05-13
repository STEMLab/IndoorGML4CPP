#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeometricPrimitiveType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeometricPrimitiveType

#include "type_gml.CAbstractGeometryType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractGeometricPrimitiveType : public ::indoorgmlcore::gml::CAbstractGeometryType
{
public:
	indoorgmlcore_EXPORT CAbstractGeometricPrimitiveType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractGeometricPrimitiveType(CAbstractGeometricPrimitiveType const& init);
	void operator=(CAbstractGeometricPrimitiveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractGeometricPrimitiveType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeometricPrimitiveType
