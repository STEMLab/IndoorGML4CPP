#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeType

#include "type_xs.CstringType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCodeType : public ::indoorgmlcore::xs::CstringType
{
public:
	indoorgmlcore_EXPORT CCodeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCodeType(CCodeType const& init);
	void operator=(CCodeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCodeType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_gml_altova_CCodeType_altova_codeSpace, 0, 0> codeSpace;	// codeSpace CanyURI
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeType
