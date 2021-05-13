#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CdoubleListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CdoubleListType



namespace indoorgmlcore
{

namespace gml
{	

class CdoubleListType : public ElementType
{
public:
	indoorgmlcore_EXPORT CdoubleListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CdoubleListType(CdoubleListType const& init);
	void operator=(CdoubleListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CdoubleListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CdoubleListType
