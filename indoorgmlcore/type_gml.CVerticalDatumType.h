#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVerticalDatumType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVerticalDatumType

#include "type_gml.CAbstractDatumType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CVerticalDatumType : public ::indoorgmlcore::gml::CAbstractDatumType
{
public:
	indoorgmlcore_EXPORT CVerticalDatumType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CVerticalDatumType(CVerticalDatumType const& init);
	void operator=(CVerticalDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CVerticalDatumType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVerticalDatumType
