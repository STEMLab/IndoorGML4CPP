#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcStringByBulgeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcStringByBulgeType

#include "type_gml.CAbstractCurveSegmentType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CArcStringByBulgeType : public ::indoorgmlcore::gml::CAbstractCurveSegmentType
{
public:
	indoorgmlcore_EXPORT CArcStringByBulgeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CArcStringByBulgeType(CArcStringByBulgeType const& init);
	void operator=(CArcStringByBulgeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CArcStringByBulgeType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CArcStringByBulgeType_altova_interpolation, 1, 11> interpolation;	// interpolation CCurveInterpolationType

	MemberAttribute<__int64,_altova_mi_gml_altova_CArcStringByBulgeType_altova_numArc, 0, 0> numArc;	// numArc Cinteger
	MemberElement<gml::CDirectPositionType, _altova_mi_gml_altova_CArcStringByBulgeType_altova_pos> pos;
	struct pos { typedef Iterator<gml::CDirectPositionType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CArcStringByBulgeType_altova_pointProperty> pointProperty;
	struct pointProperty { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CArcStringByBulgeType_altova_pointRep> pointRep;
	struct pointRep { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CDirectPositionListType, _altova_mi_gml_altova_CArcStringByBulgeType_altova_posList> posList;
	struct posList { typedef Iterator<gml::CDirectPositionListType> iterator; };
	MemberElement<gml::CCoordinatesType, _altova_mi_gml_altova_CArcStringByBulgeType_altova_coordinates> coordinates;
	struct coordinates { typedef Iterator<gml::CCoordinatesType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CArcStringByBulgeType_altova_bulge> bulge;
	struct bulge { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<gml::CVectorType, _altova_mi_gml_altova_CArcStringByBulgeType_altova_normal> normal;
	struct normal { typedef Iterator<gml::CVectorType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcStringByBulgeType
