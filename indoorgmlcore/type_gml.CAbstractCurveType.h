#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCurveType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCurveType

#include "type_gml.CAbstractGeometricPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractCurveType : public ::indoorgmlcore::gml::CAbstractGeometricPrimitiveType
{
public:
	indoorgmlcore_EXPORT CAbstractCurveType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractCurveType(CAbstractCurveType const& init);
	void operator=(CAbstractCurveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractCurveType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCurveType
