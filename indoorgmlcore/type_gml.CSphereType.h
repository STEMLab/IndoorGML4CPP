#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSphereType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSphereType

#include "type_gml.CAbstractGriddedSurfaceType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CSphereType : public ::indoorgmlcore::gml::CAbstractGriddedSurfaceType
{
public:
	indoorgmlcore_EXPORT CSphereType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSphereType(CSphereType const& init);
	void operator=(CSphereType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSphereType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CSphereType_altova_horizontalCurveType, 1, 11> horizontalCurveType;	// horizontalCurveType CCurveInterpolationType
	MemberAttribute<string_type,_altova_mi_gml_altova_CSphereType_altova_verticalCurveType, 1, 11> verticalCurveType;	// verticalCurveType CCurveInterpolationType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSphereType
