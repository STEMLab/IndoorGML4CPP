#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerPropertyType



namespace indoorgmlcore
{

class CSpaceLayerPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CSpaceLayerPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSpaceLayerPropertyType(CSpaceLayerPropertyType const& init);
	void operator=(CSpaceLayerPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSpaceLayerPropertyType); }
	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayerPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<CSpaceLayerType, _altova_mi_altova_CSpaceLayerPropertyType_altova_SpaceLayer> SpaceLayer;
	struct SpaceLayer { typedef Iterator<CSpaceLayerType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerPropertyType
