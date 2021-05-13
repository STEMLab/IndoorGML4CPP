#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CURL_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CURL_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CURL_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CURL_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CURL_PropertyType(CURL_PropertyType const& init);
	void operator=(CURL_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CURL_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CURL_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<xs::CanyURIType, _altova_mi_gmd_altova_CURL_PropertyType_altova_URL> URL;
	struct URL { typedef Iterator<xs::CanyURIType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CURL_PropertyType
