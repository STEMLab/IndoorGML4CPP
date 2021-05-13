#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNameListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNameListType



namespace indoorgmlcore
{

namespace gml
{	

class CNameListType : public ElementType
{
public:
	indoorgmlcore_EXPORT CNameListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CNameListType(CNameListType const& init);
	void operator=(CNameListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CNameListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNameListType
