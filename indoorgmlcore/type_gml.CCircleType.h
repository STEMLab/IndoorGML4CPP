#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCircleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCircleType

#include "type_gml.CArcType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCircleType : public ::indoorgmlcore::gml::CArcType
{
public:
	indoorgmlcore_EXPORT CCircleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCircleType(CCircleType const& init);
	void operator=(CCircleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCircleType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCircleType
