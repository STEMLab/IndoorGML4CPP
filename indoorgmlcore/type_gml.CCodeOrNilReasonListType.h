#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeOrNilReasonListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeOrNilReasonListType

#include "type_gml.CNameOrNilReasonListType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCodeOrNilReasonListType : public ::indoorgmlcore::gml::CNameOrNilReasonListType
{
public:
	indoorgmlcore_EXPORT CCodeOrNilReasonListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCodeOrNilReasonListType(CCodeOrNilReasonListType const& init);
	void operator=(CCodeOrNilReasonListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCodeOrNilReasonListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_gml_altova_CCodeOrNilReasonListType_altova_codeSpace, 0, 0> codeSpace;	// codeSpace CanyURI
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeOrNilReasonListType
