#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDate_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDate_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CDate_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDate_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDate_PropertyType(CDate_PropertyType const& init);
	void operator=(CDate_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CDate_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CDate_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CDate_TypeType, _altova_mi_gco_altova_CDate_PropertyType_altova_Date> Date;
	struct Date { typedef Iterator<gco::CDate_TypeType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_gco_altova_CDate_PropertyType_altova_DateTime> DateTime;
	struct DateTime { typedef Iterator<xs::CdateTimeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDate_PropertyType
