#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAssociationRoleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAssociationRoleType



namespace indoorgmlcore
{

namespace gml
{	

class CAssociationRoleType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAssociationRoleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAssociationRoleType(CAssociationRoleType const& init);
	void operator=(CAssociationRoleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAssociationRoleType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CAssociationRoleType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CAssociationRoleType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAssociationRoleType
