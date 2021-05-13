#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfaceType

#include "type_gml.CAbstractSurfaceType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CSurfaceType : public ::indoorgmlcore::gml::CAbstractSurfaceType
{
public:
	indoorgmlcore_EXPORT CSurfaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSurfaceType(CSurfaceType const& init);
	void operator=(CSurfaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSurfaceType); }
	MemberElement<gml::CSurfacePatchArrayPropertyType, _altova_mi_gml_altova_CSurfaceType_altova_patches> patches;
	struct patches { typedef Iterator<gml::CSurfacePatchArrayPropertyType> iterator; };
	MemberElement<gml::CSurfacePatchArrayPropertyType, _altova_mi_gml_altova_CSurfaceType_altova_polygonPatches> polygonPatches;
	struct polygonPatches { typedef Iterator<gml::CSurfacePatchArrayPropertyType> iterator; };
	MemberElement<gml::CSurfacePatchArrayPropertyType, _altova_mi_gml_altova_CSurfaceType_altova_trianglePatches> trianglePatches;
	struct trianglePatches { typedef Iterator<gml::CSurfacePatchArrayPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfaceType
