#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_AccuracyOfATimeMeasurement_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_AccuracyOfATimeMeasurement_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_AccuracyOfATimeMeasurement_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDQ_AccuracyOfATimeMeasurement_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_AccuracyOfATimeMeasurement_PropertyType(CDQ_AccuracyOfATimeMeasurement_PropertyType const& init);
	void operator=(CDQ_AccuracyOfATimeMeasurement_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CDQ_AccuracyOfATimeMeasurement_Type, _altova_mi_gmd_altova_CDQ_AccuracyOfATimeMeasurement_PropertyType_altova_DQ_AccuracyOfATimeMeasurement> DQ_AccuracyOfATimeMeasurement;
	struct DQ_AccuracyOfATimeMeasurement { typedef Iterator<gmd::CDQ_AccuracyOfATimeMeasurement_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_AccuracyOfATimeMeasurement_PropertyType
