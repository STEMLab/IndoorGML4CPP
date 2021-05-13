#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeodesicType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeodesicType

#include "type_gml.CGeodesicStringType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CGeodesicType : public ::indoorgmlcore::gml::CGeodesicStringType
{
public:
	indoorgmlcore_EXPORT CGeodesicType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGeodesicType(CGeodesicType const& init);
	void operator=(CGeodesicType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGeodesicType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeodesicType
