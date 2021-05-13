#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCalDateType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCalDateType



namespace indoorgmlcore
{

namespace gml
{	

class CCalDateType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCalDateType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCalDateType(CCalDateType const& init);
	void operator=(CCalDateType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCalDateType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCalDateType
