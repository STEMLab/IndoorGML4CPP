#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCylinderType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCylinderType

#include "type_gml.CAbstractGriddedSurfaceType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCylinderType : public ::indoorgmlcore::gml::CAbstractGriddedSurfaceType
{
public:
	indoorgmlcore_EXPORT CCylinderType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCylinderType(CCylinderType const& init);
	void operator=(CCylinderType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCylinderType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCylinderType_altova_horizontalCurveType, 1, 11> horizontalCurveType;	// horizontalCurveType CCurveInterpolationType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCylinderType_altova_verticalCurveType, 1, 11> verticalCurveType;	// verticalCurveType CCurveInterpolationType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCylinderType
