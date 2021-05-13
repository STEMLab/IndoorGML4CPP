#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeComplexType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeComplexType

#include "type_gml.CAbstractTimeObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractTimeComplexType : public ::indoorgmlcore::gml::CAbstractTimeObjectType
{
public:
	indoorgmlcore_EXPORT CAbstractTimeComplexType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractTimeComplexType(CAbstractTimeComplexType const& init);
	void operator=(CAbstractTimeComplexType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractTimeComplexType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeComplexType
