#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractParametricCurveSurfaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractParametricCurveSurfaceType

#include "type_gml.CAbstractSurfacePatchType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractParametricCurveSurfaceType : public ::indoorgmlcore::gml::CAbstractSurfacePatchType
{
public:
	indoorgmlcore_EXPORT CAbstractParametricCurveSurfaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractParametricCurveSurfaceType(CAbstractParametricCurveSurfaceType const& init);
	void operator=(CAbstractParametricCurveSurfaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractParametricCurveSurfaceType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CAbstractParametricCurveSurfaceType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractParametricCurveSurfaceType
