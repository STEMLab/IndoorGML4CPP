#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCylindricalCSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCylindricalCSType

#include "type_gml.CAbstractCoordinateSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCylindricalCSType : public ::indoorgmlcore::gml::CAbstractCoordinateSystemType
{
public:
	indoorgmlcore_EXPORT CCylindricalCSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCylindricalCSType(CCylindricalCSType const& init);
	void operator=(CCylindricalCSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCylindricalCSType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCylindricalCSType
