#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_OnLineFunctionCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_OnLineFunctionCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CCI_OnLineFunctionCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCI_OnLineFunctionCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCI_OnLineFunctionCode_PropertyType(CCI_OnLineFunctionCode_PropertyType const& init);
	void operator=(CCI_OnLineFunctionCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CCI_OnLineFunctionCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CCI_OnLineFunctionCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gmd_altova_CCI_OnLineFunctionCode_PropertyType_altova_CI_OnLineFunctionCode> CI_OnLineFunctionCode;
	struct CI_OnLineFunctionCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CCI_OnLineFunctionCode_PropertyType
