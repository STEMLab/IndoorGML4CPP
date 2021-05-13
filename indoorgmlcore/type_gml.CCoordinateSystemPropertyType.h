#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CCoordinateSystemPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCoordinateSystemPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCoordinateSystemPropertyType(CCoordinateSystemPropertyType const& init);
	void operator=(CCoordinateSystemPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCoordinateSystemPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::CAffineCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_AffineCS> AffineCS;
	struct AffineCS { typedef Iterator<gml::CAffineCSType> iterator; };
	MemberElement<gml::CCartesianCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_CartesianCS> CartesianCS;
	struct CartesianCS { typedef Iterator<gml::CCartesianCSType> iterator; };
	MemberElement<gml::CCylindricalCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_CylindricalCS> CylindricalCS;
	struct CylindricalCS { typedef Iterator<gml::CCylindricalCSType> iterator; };
	MemberElement<gml::CEllipsoidalCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_EllipsoidalCS> EllipsoidalCS;
	struct EllipsoidalCS { typedef Iterator<gml::CEllipsoidalCSType> iterator; };
	MemberElement<gml::CLinearCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_LinearCS> LinearCS;
	struct LinearCS { typedef Iterator<gml::CLinearCSType> iterator; };
	MemberElement<gml::CObliqueCartesianCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_ObliqueCartesianCS> ObliqueCartesianCS;
	struct ObliqueCartesianCS { typedef Iterator<gml::CObliqueCartesianCSType> iterator; };
	MemberElement<gml::CPolarCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_PolarCS> PolarCS;
	struct PolarCS { typedef Iterator<gml::CPolarCSType> iterator; };
	MemberElement<gml::CSphericalCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_SphericalCS> SphericalCS;
	struct SphericalCS { typedef Iterator<gml::CSphericalCSType> iterator; };
	MemberElement<gml::CTemporalCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_TemporalCS> TemporalCS;
	struct TemporalCS { typedef Iterator<gml::CTemporalCSType> iterator; };
	MemberElement<gml::CTimeCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_TimeCS> TimeCS;
	struct TimeCS { typedef Iterator<gml::CTimeCSType> iterator; };
	MemberElement<gml::CUserDefinedCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_UserDefinedCS> UserDefinedCS;
	struct UserDefinedCS { typedef Iterator<gml::CUserDefinedCSType> iterator; };
	MemberElement<gml::CVerticalCSType, _altova_mi_gml_altova_CCoordinateSystemPropertyType_altova_VerticalCS> VerticalCS;
	struct VerticalCS { typedef Iterator<gml::CVerticalCSType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemPropertyType
