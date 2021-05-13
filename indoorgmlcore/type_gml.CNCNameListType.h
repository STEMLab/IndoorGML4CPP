#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNCNameListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNCNameListType



namespace indoorgmlcore
{

namespace gml
{	

class CNCNameListType : public ElementType
{
public:
	indoorgmlcore_EXPORT CNCNameListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CNCNameListType(CNCNameListType const& init);
	void operator=(CNCNameListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CNCNameListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNCNameListType
