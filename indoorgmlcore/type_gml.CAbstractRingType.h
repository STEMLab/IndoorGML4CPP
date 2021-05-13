#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractRingType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractRingType

#include "type_gml.CAbstractCurveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractRingType : public ::indoorgmlcore::gml::CAbstractCurveType
{
public:
	indoorgmlcore_EXPORT CAbstractRingType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractRingType(CAbstractRingType const& init);
	void operator=(CAbstractRingType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractRingType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractRingType
