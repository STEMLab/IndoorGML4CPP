#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurvePropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurvePropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CCurvePropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCurvePropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCurvePropertyType(CCurvePropertyType const& init);
	void operator=(CCurvePropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCurvePropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCurvePropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI

	MemberAttribute<bool,_altova_mi_gml_altova_CCurvePropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CCompositeCurveType, _altova_mi_gml_altova_CCurvePropertyType_altova_CompositeCurve> CompositeCurve;
	struct CompositeCurve { typedef Iterator<gml::CCompositeCurveType> iterator; };
	MemberElement<gml::CCurveType, _altova_mi_gml_altova_CCurvePropertyType_altova_Curve> Curve;
	struct Curve { typedef Iterator<gml::CCurveType> iterator; };
	MemberElement<gml::CLineStringType, _altova_mi_gml_altova_CCurvePropertyType_altova_LineString> LineString;
	struct LineString { typedef Iterator<gml::CLineStringType> iterator; };
	MemberElement<gml::CLinearRingType, _altova_mi_gml_altova_CCurvePropertyType_altova_LinearRing> LinearRing;
	struct LinearRing { typedef Iterator<gml::CLinearRingType> iterator; };
	MemberElement<gml::COrientableCurveType, _altova_mi_gml_altova_CCurvePropertyType_altova_OrientableCurve> OrientableCurve;
	struct OrientableCurve { typedef Iterator<gml::COrientableCurveType> iterator; };
	MemberElement<gml::CRingType, _altova_mi_gml_altova_CCurvePropertyType_altova_Ring> Ring;
	struct Ring { typedef Iterator<gml::CRingType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurvePropertyType
