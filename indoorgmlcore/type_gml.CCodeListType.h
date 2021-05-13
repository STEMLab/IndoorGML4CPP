#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeListType

#include "type_gml.CNameListType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCodeListType : public ::indoorgmlcore::gml::CNameListType
{
public:
	indoorgmlcore_EXPORT CCodeListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCodeListType(CCodeListType const& init);
	void operator=(CCodeListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCodeListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_gml_altova_CCodeListType_altova_codeSpace, 0, 0> codeSpace;	// codeSpace CanyURI
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeListType
