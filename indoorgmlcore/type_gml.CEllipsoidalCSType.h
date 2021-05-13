#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEllipsoidalCSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEllipsoidalCSType

#include "type_gml.CAbstractCoordinateSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CEllipsoidalCSType : public ::indoorgmlcore::gml::CAbstractCoordinateSystemType
{
public:
	indoorgmlcore_EXPORT CEllipsoidalCSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEllipsoidalCSType(CEllipsoidalCSType const& init);
	void operator=(CEllipsoidalCSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CEllipsoidalCSType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEllipsoidalCSType
