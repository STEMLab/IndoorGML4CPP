#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_TemporalExtent_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_TemporalExtent_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CEX_TemporalExtent_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CEX_TemporalExtent_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEX_TemporalExtent_PropertyType(CEX_TemporalExtent_PropertyType const& init);
	void operator=(CEX_TemporalExtent_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CEX_TemporalExtent_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CEX_TemporalExtent_Type, _altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_EX_TemporalExtent> EX_TemporalExtent;
	struct EX_TemporalExtent { typedef Iterator<gmd::CEX_TemporalExtent_Type> iterator; };
	MemberElement<gmd::CEX_SpatialTemporalExtent_Type, _altova_mi_gmd_altova_CEX_TemporalExtent_PropertyType_altova_EX_SpatialTemporalExtent> EX_SpatialTemporalExtent;
	struct EX_SpatialTemporalExtent { typedef Iterator<gmd::CEX_SpatialTemporalExtent_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_TemporalExtent_PropertyType
