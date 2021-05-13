#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCategoryExtentType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCategoryExtentType



namespace indoorgmlcore
{

namespace gml
{	

class CCategoryExtentType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCategoryExtentType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCategoryExtentType(CCategoryExtentType const& init);
	void operator=(CCategoryExtentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCategoryExtentType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CCategoryExtentType_altova_codeSpace, 0, 0> codeSpace;	// codeSpace CanyURI
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCategoryExtentType
