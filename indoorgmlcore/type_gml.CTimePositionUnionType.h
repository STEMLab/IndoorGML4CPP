#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimePositionUnionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimePositionUnionType



namespace indoorgmlcore
{

namespace gml
{	

class CTimePositionUnionType : public ElementType
{
public:
	indoorgmlcore_EXPORT CTimePositionUnionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimePositionUnionType(CTimePositionUnionType const& init);
	void operator=(CTimePositionUnionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimePositionUnionType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimePositionUnionType
