#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConeType

#include "type_gml.CAbstractGriddedSurfaceType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CConeType : public ::indoorgmlcore::gml::CAbstractGriddedSurfaceType
{
public:
	indoorgmlcore_EXPORT CConeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CConeType(CConeType const& init);
	void operator=(CConeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CConeType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CConeType_altova_horizontalCurveType, 1, 11> horizontalCurveType;	// horizontalCurveType CCurveInterpolationType
	MemberAttribute<string_type,_altova_mi_gml_altova_CConeType_altova_verticalCurveType, 1, 11> verticalCurveType;	// verticalCurveType CCurveInterpolationType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConeType
