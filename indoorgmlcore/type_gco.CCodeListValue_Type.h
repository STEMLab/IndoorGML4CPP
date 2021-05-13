#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CCodeListValue_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CCodeListValue_Type

#include "type_xs.CstringType.h"


namespace indoorgmlcore
{

namespace gco
{	

class CCodeListValue_Type : public ::indoorgmlcore::xs::CstringType
{
public:
	indoorgmlcore_EXPORT CCodeListValue_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCodeListValue_Type(CCodeListValue_Type const& init);
	void operator=(CCodeListValue_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CCodeListValue_Type); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_gco_altova_CCodeListValue_Type_altova_codeList, 0, 0> codeList;	// codeList CanyURI

	MemberAttribute<string_type,_altova_mi_gco_altova_CCodeListValue_Type_altova_codeListValue, 0, 0> codeListValue;	// codeListValue CanyURI

	MemberAttribute<string_type,_altova_mi_gco_altova_CCodeListValue_Type_altova_codeSpace, 0, 0> codeSpace;	// codeSpace CanyURI
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CCodeListValue_Type
