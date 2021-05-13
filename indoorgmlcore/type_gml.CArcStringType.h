#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcStringType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcStringType

#include "type_gml.CAbstractCurveSegmentType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CArcStringType : public ::indoorgmlcore::gml::CAbstractCurveSegmentType
{
public:
	indoorgmlcore_EXPORT CArcStringType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CArcStringType(CArcStringType const& init);
	void operator=(CArcStringType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CArcStringType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CArcStringType_altova_interpolation, 1, 11> interpolation;	// interpolation CCurveInterpolationType

	MemberAttribute<__int64,_altova_mi_gml_altova_CArcStringType_altova_numArc, 0, 0> numArc;	// numArc Cinteger
	MemberElement<gml::CDirectPositionType, _altova_mi_gml_altova_CArcStringType_altova_pos> pos;
	struct pos { typedef Iterator<gml::CDirectPositionType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CArcStringType_altova_pointProperty> pointProperty;
	struct pointProperty { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CArcStringType_altova_pointRep> pointRep;
	struct pointRep { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CDirectPositionListType, _altova_mi_gml_altova_CArcStringType_altova_posList> posList;
	struct posList { typedef Iterator<gml::CDirectPositionListType> iterator; };
	MemberElement<gml::CCoordinatesType, _altova_mi_gml_altova_CArcStringType_altova_coordinates> coordinates;
	struct coordinates { typedef Iterator<gml::CCoordinatesType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcStringType
