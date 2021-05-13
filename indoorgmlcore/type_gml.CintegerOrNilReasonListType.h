#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerOrNilReasonListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerOrNilReasonListType



namespace indoorgmlcore
{

namespace gml
{	

class CintegerOrNilReasonListType : public ElementType
{
public:
	indoorgmlcore_EXPORT CintegerOrNilReasonListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CintegerOrNilReasonListType(CintegerOrNilReasonListType const& init);
	void operator=(CintegerOrNilReasonListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CintegerOrNilReasonListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerOrNilReasonListType
