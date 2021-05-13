#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPolygonType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPolygonType

#include "type_gml.CAbstractSurfaceType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CPolygonType : public ::indoorgmlcore::gml::CAbstractSurfaceType
{
public:
	indoorgmlcore_EXPORT CPolygonType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CPolygonType(CPolygonType const& init);
	void operator=(CPolygonType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CPolygonType); }
	MemberElement<gml::CAbstractRingPropertyType, _altova_mi_gml_altova_CPolygonType_altova_exterior> exterior;
	struct exterior { typedef Iterator<gml::CAbstractRingPropertyType> iterator; };
	MemberElement<gml::CAbstractRingPropertyType, _altova_mi_gml_altova_CPolygonType_altova_interior> interior;
	struct interior { typedef Iterator<gml::CAbstractRingPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPolygonType
