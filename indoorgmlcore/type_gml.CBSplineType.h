#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBSplineType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBSplineType

#include "type_gml.CAbstractCurveSegmentType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CBSplineType : public ::indoorgmlcore::gml::CAbstractCurveSegmentType
{
public:
	indoorgmlcore_EXPORT CBSplineType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CBSplineType(CBSplineType const& init);
	void operator=(CBSplineType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CBSplineType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CBSplineType_altova_interpolation, 1, 11> interpolation;	// interpolation CCurveInterpolationType

	MemberAttribute<bool,_altova_mi_gml_altova_CBSplineType_altova_isPolynomial, 0, 0> isPolynomial;	// isPolynomial Cboolean
	MemberAttribute<string_type,_altova_mi_gml_altova_CBSplineType_altova_knotType, 1, 3> knotType;	// knotType CKnotTypesType
	MemberElement<gml::CDirectPositionType, _altova_mi_gml_altova_CBSplineType_altova_pos> pos;
	struct pos { typedef Iterator<gml::CDirectPositionType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CBSplineType_altova_pointProperty> pointProperty;
	struct pointProperty { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CBSplineType_altova_pointRep> pointRep;
	struct pointRep { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CDirectPositionListType, _altova_mi_gml_altova_CBSplineType_altova_posList> posList;
	struct posList { typedef Iterator<gml::CDirectPositionListType> iterator; };
	MemberElement<gml::CCoordinatesType, _altova_mi_gml_altova_CBSplineType_altova_coordinates> coordinates;
	struct coordinates { typedef Iterator<gml::CCoordinatesType> iterator; };
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_gml_altova_CBSplineType_altova_degree> degree;
	struct degree { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<gml::CKnotPropertyType, _altova_mi_gml_altova_CBSplineType_altova_knot> knot;
	struct knot { typedef Iterator<gml::CKnotPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBSplineType
