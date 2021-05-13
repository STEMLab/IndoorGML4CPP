#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGriddedSurfaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGriddedSurfaceType

#include "type_gml.CAbstractParametricCurveSurfaceType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractGriddedSurfaceType : public ::indoorgmlcore::gml::CAbstractParametricCurveSurfaceType
{
public:
	indoorgmlcore_EXPORT CAbstractGriddedSurfaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractGriddedSurfaceType(CAbstractGriddedSurfaceType const& init);
	void operator=(CAbstractGriddedSurfaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractGriddedSurfaceType); }

	MemberAttribute<__int64,_altova_mi_gml_altova_CAbstractGriddedSurfaceType_altova_rows, 0, 0> rows;	// rows Cinteger

	MemberAttribute<__int64,_altova_mi_gml_altova_CAbstractGriddedSurfaceType_altova_columns, 0, 0> columns;	// columns Cinteger
	MemberElement<gml::CrowsType, _altova_mi_gml_altova_CAbstractGriddedSurfaceType_altova_rows2> rows2;
	struct rows2 { typedef Iterator<gml::CrowsType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGriddedSurfaceType
