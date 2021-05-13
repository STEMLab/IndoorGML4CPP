#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCSType

#include "type_gml.CAbstractCoordinateSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeCSType : public ::indoorgmlcore::gml::CAbstractCoordinateSystemType
{
public:
	indoorgmlcore_EXPORT CTimeCSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeCSType(CTimeCSType const& init);
	void operator=(CTimeCSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeCSType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCSType
