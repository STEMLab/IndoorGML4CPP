#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeWithAuthorityType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeWithAuthorityType



namespace indoorgmlcore
{

namespace gml
{	

class CCodeWithAuthorityType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCodeWithAuthorityType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCodeWithAuthorityType(CCodeWithAuthorityType const& init);
	void operator=(CCodeWithAuthorityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCodeWithAuthorityType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CCodeWithAuthorityType_altova_codeSpace, 0, 0> codeSpace;	// codeSpace CanyURI
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCodeWithAuthorityType
