#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CClothoidType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CClothoidType

#include "type_gml.CAbstractCurveSegmentType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CClothoidType : public ::indoorgmlcore::gml::CAbstractCurveSegmentType
{
public:
	indoorgmlcore_EXPORT CClothoidType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CClothoidType(CClothoidType const& init);
	void operator=(CClothoidType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CClothoidType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CClothoidType_altova_interpolation, 1, 11> interpolation;	// interpolation CCurveInterpolationType
	MemberElement<gml::CrefLocationType, _altova_mi_gml_altova_CClothoidType_altova_refLocation> refLocation;
	struct refLocation { typedef Iterator<gml::CrefLocationType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_gml_altova_CClothoidType_altova_scaleFactor> scaleFactor;
	struct scaleFactor { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CClothoidType_altova_startParameter> startParameter;
	struct startParameter { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CClothoidType_altova_endParameter> endParameter;
	struct endParameter { typedef Iterator<xs::CdoubleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CClothoidType
