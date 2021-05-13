#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CbooleanOrNilReasonListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CbooleanOrNilReasonListType



namespace indoorgmlcore
{

namespace gml
{	

class CbooleanOrNilReasonListType : public ElementType
{
public:
	indoorgmlcore_EXPORT CbooleanOrNilReasonListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CbooleanOrNilReasonListType(CbooleanOrNilReasonListType const& init);
	void operator=(CbooleanOrNilReasonListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CbooleanOrNilReasonListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CbooleanOrNilReasonListType
