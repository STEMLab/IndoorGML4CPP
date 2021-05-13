#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcByCenterPointType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcByCenterPointType

#include "type_gml.CAbstractCurveSegmentType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CArcByCenterPointType : public ::indoorgmlcore::gml::CAbstractCurveSegmentType
{
public:
	indoorgmlcore_EXPORT CArcByCenterPointType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CArcByCenterPointType(CArcByCenterPointType const& init);
	void operator=(CArcByCenterPointType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CArcByCenterPointType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CArcByCenterPointType_altova_interpolation, 1, 11> interpolation;	// interpolation CCurveInterpolationType

	MemberAttribute<__int64,_altova_mi_gml_altova_CArcByCenterPointType_altova_numArc, 0, 0> numArc;	// numArc Cinteger
	MemberElement<gml::CDirectPositionType, _altova_mi_gml_altova_CArcByCenterPointType_altova_pos> pos;
	struct pos { typedef Iterator<gml::CDirectPositionType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CArcByCenterPointType_altova_pointProperty> pointProperty;
	struct pointProperty { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CArcByCenterPointType_altova_pointRep> pointRep;
	struct pointRep { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CDirectPositionListType, _altova_mi_gml_altova_CArcByCenterPointType_altova_posList> posList;
	struct posList { typedef Iterator<gml::CDirectPositionListType> iterator; };
	MemberElement<gml::CCoordinatesType, _altova_mi_gml_altova_CArcByCenterPointType_altova_coordinates> coordinates;
	struct coordinates { typedef Iterator<gml::CCoordinatesType> iterator; };
	MemberElement<gml::CLengthType, _altova_mi_gml_altova_CArcByCenterPointType_altova_radius> radius;
	struct radius { typedef Iterator<gml::CLengthType> iterator; };
	MemberElement<gml::CAngleType, _altova_mi_gml_altova_CArcByCenterPointType_altova_startAngle> startAngle;
	struct startAngle { typedef Iterator<gml::CAngleType> iterator; };
	MemberElement<gml::CAngleType, _altova_mi_gml_altova_CArcByCenterPointType_altova_endAngle> endAngle;
	struct endAngle { typedef Iterator<gml::CAngleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcByCenterPointType
