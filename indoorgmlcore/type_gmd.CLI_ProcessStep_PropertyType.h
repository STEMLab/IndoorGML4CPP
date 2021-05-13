#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLI_ProcessStep_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLI_ProcessStep_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CLI_ProcessStep_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CLI_ProcessStep_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CLI_ProcessStep_PropertyType(CLI_ProcessStep_PropertyType const& init);
	void operator=(CLI_ProcessStep_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CLI_ProcessStep_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CLI_ProcessStep_Type, _altova_mi_gmd_altova_CLI_ProcessStep_PropertyType_altova_LI_ProcessStep> LI_ProcessStep;
	struct LI_ProcessStep { typedef Iterator<gmd::CLI_ProcessStep_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLI_ProcessStep_PropertyType
