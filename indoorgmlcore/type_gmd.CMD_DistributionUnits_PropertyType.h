#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_DistributionUnits_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_DistributionUnits_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_DistributionUnits_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_DistributionUnits_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_DistributionUnits_PropertyType(CMD_DistributionUnits_PropertyType const& init);
	void operator=(CMD_DistributionUnits_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_DistributionUnits_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_DistributionUnits_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gmd_altova_CMD_DistributionUnits_PropertyType_altova_MD_DistributionUnits> MD_DistributionUnits;
	struct MD_DistributionUnits { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_DistributionUnits_PropertyType
