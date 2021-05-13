#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CTransitionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CTransitionType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CTransitionType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CTransitionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTransitionType(CTransitionType const& init);
	void operator=(CTransitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CTransitionType); }
	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<xs::CdoubleType, _altova_mi_altova_CTransitionType_altova_weight> weight;
	struct weight { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<CStatePropertyType, _altova_mi_altova_CTransitionType_altova_connects> connects;
	struct connects { typedef Iterator<CStatePropertyType> iterator; };
	MemberElement<CCellSpaceBoundaryPropertyType, _altova_mi_altova_CTransitionType_altova_duality> duality;
	struct duality { typedef Iterator<CCellSpaceBoundaryPropertyType> iterator; };
	MemberElement<gml::CCurvePropertyType, _altova_mi_altova_CTransitionType_altova_geometry> geometry;
	struct geometry { typedef Iterator<gml::CCurvePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CTransitionType
