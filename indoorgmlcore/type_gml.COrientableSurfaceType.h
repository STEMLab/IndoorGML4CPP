#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COrientableSurfaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COrientableSurfaceType

#include "type_gml.CAbstractSurfaceType.h"


namespace indoorgmlcore
{

namespace gml
{	

class COrientableSurfaceType : public ::indoorgmlcore::gml::CAbstractSurfaceType
{
public:
	indoorgmlcore_EXPORT COrientableSurfaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT COrientableSurfaceType(COrientableSurfaceType const& init);
	void operator=(COrientableSurfaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_COrientableSurfaceType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_COrientableSurfaceType_altova_orientation, 1, 2> orientation;	// orientation CSignType
	MemberElement<gml::CSurfacePropertyType, _altova_mi_gml_altova_COrientableSurfaceType_altova_baseSurface> baseSurface;
	struct baseSurface { typedef Iterator<gml::CSurfacePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COrientableSurfaceType
