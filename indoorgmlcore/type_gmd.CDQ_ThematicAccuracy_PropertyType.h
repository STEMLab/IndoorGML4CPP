#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_ThematicAccuracy_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_ThematicAccuracy_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_ThematicAccuracy_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDQ_ThematicAccuracy_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_ThematicAccuracy_PropertyType(CDQ_ThematicAccuracy_PropertyType const& init);
	void operator=(CDQ_ThematicAccuracy_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_ThematicAccuracy_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CDQ_NonQuantitativeAttributeAccuracy_Type, _altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_DQ_NonQuantitativeAttributeAccuracy> DQ_NonQuantitativeAttributeAccuracy;
	struct DQ_NonQuantitativeAttributeAccuracy { typedef Iterator<gmd::CDQ_NonQuantitativeAttributeAccuracy_Type> iterator; };
	MemberElement<gmd::CDQ_QuantitativeAttributeAccuracy_Type, _altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_DQ_QuantitativeAttributeAccuracy> DQ_QuantitativeAttributeAccuracy;
	struct DQ_QuantitativeAttributeAccuracy { typedef Iterator<gmd::CDQ_QuantitativeAttributeAccuracy_Type> iterator; };
	MemberElement<gmd::CDQ_ThematicClassificationCorrectness_Type, _altova_mi_gmd_altova_CDQ_ThematicAccuracy_PropertyType_altova_DQ_ThematicClassificationCorrectness> DQ_ThematicClassificationCorrectness;
	struct DQ_ThematicClassificationCorrectness { typedef Iterator<gmd::CDQ_ThematicClassificationCorrectness_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_ThematicAccuracy_PropertyType
