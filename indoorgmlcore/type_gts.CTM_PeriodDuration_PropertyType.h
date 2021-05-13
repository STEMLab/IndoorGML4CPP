#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gts_ALTOVA_CTM_PeriodDuration_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gts_ALTOVA_CTM_PeriodDuration_PropertyType



namespace indoorgmlcore
{

namespace gts
{	

class CTM_PeriodDuration_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CTM_PeriodDuration_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTM_PeriodDuration_PropertyType(CTM_PeriodDuration_PropertyType const& init);
	void operator=(CTM_PeriodDuration_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gts_altova_CTM_PeriodDuration_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_PeriodDuration_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<xs::CdurationType, _altova_mi_gts_altova_CTM_PeriodDuration_PropertyType_altova_TM_PeriodDuration> TM_PeriodDuration;
	struct TM_PeriodDuration { typedef Iterator<xs::CdurationType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gts

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gts_ALTOVA_CTM_PeriodDuration_PropertyType
