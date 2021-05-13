#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceMemberType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceMemberType

#include "type_gml.CAbstractFeatureMemberType.h"


namespace indoorgmlcore
{

class CCellSpaceMemberType : public ::indoorgmlcore::gml::CAbstractFeatureMemberType
{
public:
	indoorgmlcore_EXPORT CCellSpaceMemberType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCellSpaceMemberType(CCellSpaceMemberType const& init);
	void operator=(CCellSpaceMemberType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCellSpaceMemberType); }
	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CCellSpaceMemberType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<CCellSpaceType, _altova_mi_altova_CCellSpaceMemberType_altova_CellSpace> CellSpace;
	struct CellSpace { typedef Iterator<CCellSpaceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceMemberType
