#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDecimal_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDecimal_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CDecimal_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDecimal_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDecimal_PropertyType(CDecimal_PropertyType const& init);
	void operator=(CDecimal_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CDecimal_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CDecimal_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<xs::CdecimalType, _altova_mi_gco_altova_CDecimal_PropertyType_altova_Decimal> Decimal;
	struct Decimal { typedef Iterator<xs::CdecimalType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDecimal_PropertyType
