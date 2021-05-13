#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CdoubleOrNilReasonListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CdoubleOrNilReasonListType



namespace indoorgmlcore
{

namespace gml
{	

class CdoubleOrNilReasonListType : public ElementType
{
public:
	indoorgmlcore_EXPORT CdoubleOrNilReasonListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CdoubleOrNilReasonListType(CdoubleOrNilReasonListType const& init);
	void operator=(CdoubleOrNilReasonListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CdoubleOrNilReasonListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CdoubleOrNilReasonListType
