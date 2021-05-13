#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBinary_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBinary_Type

#include "type_xs.CstringType.h"


namespace indoorgmlcore
{

namespace gco
{	

class CBinary_Type : public ::indoorgmlcore::xs::CstringType
{
public:
	indoorgmlcore_EXPORT CBinary_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CBinary_Type(CBinary_Type const& init);
	void operator=(CBinary_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CBinary_Type); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_gco_altova_CBinary_Type_altova_src, 0, 0> src;	// src CanyURI
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBinary_Type
