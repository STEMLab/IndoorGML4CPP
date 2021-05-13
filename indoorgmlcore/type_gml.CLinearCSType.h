#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLinearCSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLinearCSType

#include "type_gml.CAbstractCoordinateSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CLinearCSType : public ::indoorgmlcore::gml::CAbstractCoordinateSystemType
{
public:
	indoorgmlcore_EXPORT CLinearCSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CLinearCSType(CLinearCSType const& init);
	void operator=(CLinearCSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CLinearCSType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLinearCSType
