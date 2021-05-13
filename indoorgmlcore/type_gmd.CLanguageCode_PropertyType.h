#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLanguageCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLanguageCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CLanguageCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CLanguageCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CLanguageCode_PropertyType(CLanguageCode_PropertyType const& init);
	void operator=(CLanguageCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CLanguageCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CLanguageCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gmd_altova_CLanguageCode_PropertyType_altova_LanguageCode> LanguageCode;
	struct LanguageCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLanguageCode_PropertyType
