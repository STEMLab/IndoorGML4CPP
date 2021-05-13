#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CNumber_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CNumber_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CNumber_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CNumber_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CNumber_PropertyType(CNumber_PropertyType const& init);
	void operator=(CNumber_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CNumber_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CNumber_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<xs::CdoubleType, _altova_mi_gco_altova_CNumber_PropertyType_altova_Real> Real;
	struct Real { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_gco_altova_CNumber_PropertyType_altova_Decimal> Decimal;
	struct Decimal { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<xs::CintegerType, _altova_mi_gco_altova_CNumber_PropertyType_altova_Integer> Integer;
	struct Integer { typedef Iterator<xs::CintegerType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CNumber_PropertyType
