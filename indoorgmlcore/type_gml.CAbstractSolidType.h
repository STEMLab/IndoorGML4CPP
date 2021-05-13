#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSolidType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSolidType

#include "type_gml.CAbstractGeometricPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractSolidType : public ::indoorgmlcore::gml::CAbstractGeometricPrimitiveType
{
public:
	indoorgmlcore_EXPORT CAbstractSolidType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractSolidType(CAbstractSolidType const& init);
	void operator=(CAbstractSolidType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractSolidType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSolidType
