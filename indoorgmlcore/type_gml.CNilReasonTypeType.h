#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonTypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonTypeType



namespace indoorgmlcore
{

namespace gml
{	

class CNilReasonTypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CNilReasonTypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CNilReasonTypeType(CNilReasonTypeType const& init);
	void operator=(CNilReasonTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CNilReasonTypeType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonTypeType
