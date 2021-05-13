#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurveArrayPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurveArrayPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CCurveArrayPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCurveArrayPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCurveArrayPropertyType(CCurveArrayPropertyType const& init);
	void operator=(CCurveArrayPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCurveArrayPropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CCurveArrayPropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CCompositeCurveType, _altova_mi_gml_altova_CCurveArrayPropertyType_altova_CompositeCurve> CompositeCurve;
	struct CompositeCurve { typedef Iterator<gml::CCompositeCurveType> iterator; };
	MemberElement<gml::CCurveType, _altova_mi_gml_altova_CCurveArrayPropertyType_altova_Curve> Curve;
	struct Curve { typedef Iterator<gml::CCurveType> iterator; };
	MemberElement<gml::CLineStringType, _altova_mi_gml_altova_CCurveArrayPropertyType_altova_LineString> LineString;
	struct LineString { typedef Iterator<gml::CLineStringType> iterator; };
	MemberElement<gml::CLinearRingType, _altova_mi_gml_altova_CCurveArrayPropertyType_altova_LinearRing> LinearRing;
	struct LinearRing { typedef Iterator<gml::CLinearRingType> iterator; };
	MemberElement<gml::COrientableCurveType, _altova_mi_gml_altova_CCurveArrayPropertyType_altova_OrientableCurve> OrientableCurve;
	struct OrientableCurve { typedef Iterator<gml::COrientableCurveType> iterator; };
	MemberElement<gml::CRingType, _altova_mi_gml_altova_CCurveArrayPropertyType_altova_Ring> Ring;
	struct Ring { typedef Iterator<gml::CRingType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurveArrayPropertyType
