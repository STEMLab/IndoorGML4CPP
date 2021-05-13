#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCountExtentTypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCountExtentTypeType



namespace indoorgmlcore
{

namespace gml
{	

class CCountExtentTypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCountExtentTypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCountExtentTypeType(CCountExtentTypeType const& init);
	void operator=(CCountExtentTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCountExtentTypeType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCountExtentTypeType
