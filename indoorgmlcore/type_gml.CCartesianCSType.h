#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCartesianCSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCartesianCSType

#include "type_gml.CAbstractCoordinateSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCartesianCSType : public ::indoorgmlcore::gml::CAbstractCoordinateSystemType
{
public:
	indoorgmlcore_EXPORT CCartesianCSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCartesianCSType(CCartesianCSType const& init);
	void operator=(CCartesianCSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCartesianCSType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCartesianCSType
