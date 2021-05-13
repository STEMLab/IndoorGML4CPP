#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_DateTypeCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_DateTypeCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CCI_DateTypeCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCI_DateTypeCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCI_DateTypeCode_PropertyType(CCI_DateTypeCode_PropertyType const& init);
	void operator=(CCI_DateTypeCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CCI_DateTypeCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CCI_DateTypeCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gmd_altova_CCI_DateTypeCode_PropertyType_altova_CI_DateTypeCode> CI_DateTypeCode;
	struct CI_DateTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_DateTypeCode_PropertyType
