#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_PresentationFormCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_PresentationFormCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CCI_PresentationFormCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCI_PresentationFormCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCI_PresentationFormCode_PropertyType(CCI_PresentationFormCode_PropertyType const& init);
	void operator=(CCI_PresentationFormCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CCI_PresentationFormCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CCI_PresentationFormCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gmd_altova_CCI_PresentationFormCode_PropertyType_altova_CI_PresentationFormCode> CI_PresentationFormCode;
	struct CI_PresentationFormCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_PresentationFormCode_PropertyType
