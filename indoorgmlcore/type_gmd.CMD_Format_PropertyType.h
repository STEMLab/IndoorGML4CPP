#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Format_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Format_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Format_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_Format_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Format_PropertyType(CMD_Format_PropertyType const& init);
	void operator=(CMD_Format_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Format_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Format_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_Format_Type, _altova_mi_gmd_altova_CMD_Format_PropertyType_altova_MD_Format> MD_Format;
	struct MD_Format { typedef Iterator<gmd::CMD_Format_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Format_PropertyType
