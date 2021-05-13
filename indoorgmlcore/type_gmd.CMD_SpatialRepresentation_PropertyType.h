#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_SpatialRepresentation_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_SpatialRepresentation_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_SpatialRepresentation_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_SpatialRepresentation_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_SpatialRepresentation_PropertyType(CMD_SpatialRepresentation_PropertyType const& init);
	void operator=(CMD_SpatialRepresentation_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_SpatialRepresentation_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_Georectified_Type, _altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_MD_Georectified> MD_Georectified;
	struct MD_Georectified { typedef Iterator<gmd::CMD_Georectified_Type> iterator; };
	MemberElement<gmd::CMD_Georeferenceable_Type, _altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_MD_Georeferenceable> MD_Georeferenceable;
	struct MD_Georeferenceable { typedef Iterator<gmd::CMD_Georeferenceable_Type> iterator; };
	MemberElement<gmd::CMD_GridSpatialRepresentation_Type, _altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_MD_GridSpatialRepresentation> MD_GridSpatialRepresentation;
	struct MD_GridSpatialRepresentation { typedef Iterator<gmd::CMD_GridSpatialRepresentation_Type> iterator; };
	MemberElement<gmd::CMD_VectorSpatialRepresentation_Type, _altova_mi_gmd_altova_CMD_SpatialRepresentation_PropertyType_altova_MD_VectorSpatialRepresentation> MD_VectorSpatialRepresentation;
	struct MD_VectorSpatialRepresentation { typedef Iterator<gmd::CMD_VectorSpatialRepresentation_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_SpatialRepresentation_PropertyType
