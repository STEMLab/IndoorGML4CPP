#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Dimension_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Dimension_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Dimension_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_Dimension_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Dimension_PropertyType(CMD_Dimension_PropertyType const& init);
	void operator=(CMD_Dimension_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Dimension_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_Dimension_Type, _altova_mi_gmd_altova_CMD_Dimension_PropertyType_altova_MD_Dimension> MD_Dimension;
	struct MD_Dimension { typedef Iterator<gmd::CMD_Dimension_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Dimension_PropertyType
