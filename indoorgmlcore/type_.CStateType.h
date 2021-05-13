#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CStateType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CStateType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CStateType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CStateType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CStateType(CStateType const& init);
	void operator=(CStateType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CStateType); }
	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CStateType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<CCellSpacePropertyType, _altova_mi_altova_CStateType_altova_duality> duality;
	struct duality { typedef Iterator<CCellSpacePropertyType> iterator; };
	MemberElement<CTransitionPropertyType, _altova_mi_altova_CStateType_altova_connects> connects;
	struct connects { typedef Iterator<CTransitionPropertyType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_altova_CStateType_altova_geometry> geometry;
	struct geometry { typedef Iterator<gml::CPointPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CStateType
