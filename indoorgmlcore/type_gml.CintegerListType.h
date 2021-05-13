#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerListType



namespace indoorgmlcore
{

namespace gml
{	

class CintegerListType : public ElementType
{
public:
	indoorgmlcore_EXPORT CintegerListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CintegerListType(CintegerListType const& init);
	void operator=(CintegerListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CintegerListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerListType
