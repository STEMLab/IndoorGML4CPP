#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gts_ALTOVA_CTM_Primitive_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gts_ALTOVA_CTM_Primitive_PropertyType



namespace indoorgmlcore
{

namespace gts
{	

class CTM_Primitive_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CTM_Primitive_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTM_Primitive_PropertyType(CTM_Primitive_PropertyType const& init);
	void operator=(CTM_Primitive_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gts_altova_CTM_Primitive_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gml::CTimeEdgeType, _altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_TimeEdge> TimeEdge;
	struct TimeEdge { typedef Iterator<gml::CTimeEdgeType> iterator; };
	MemberElement<gml::CTimeInstantType, _altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_TimeInstant> TimeInstant;
	struct TimeInstant { typedef Iterator<gml::CTimeInstantType> iterator; };
	MemberElement<gml::CTimeNodeType, _altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_TimeNode> TimeNode;
	struct TimeNode { typedef Iterator<gml::CTimeNodeType> iterator; };
	MemberElement<gml::CTimePeriodType, _altova_mi_gts_altova_CTM_Primitive_PropertyType_altova_TimePeriod> TimePeriod;
	struct TimePeriod { typedef Iterator<gml::CTimePeriodType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gts

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gts_ALTOVA_CTM_Primitive_PropertyType
