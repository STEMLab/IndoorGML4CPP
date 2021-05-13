#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRectangleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRectangleType

#include "type_gml.CAbstractSurfacePatchType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CRectangleType : public ::indoorgmlcore::gml::CAbstractSurfacePatchType
{
public:
	indoorgmlcore_EXPORT CRectangleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CRectangleType(CRectangleType const& init);
	void operator=(CRectangleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CRectangleType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CRectangleType_altova_interpolation, 1, 10> interpolation;	// interpolation CSurfaceInterpolationType
	MemberElement<gml::CAbstractRingPropertyType, _altova_mi_gml_altova_CRectangleType_altova_exterior> exterior;
	struct exterior { typedef Iterator<gml::CAbstractRingPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRectangleType
