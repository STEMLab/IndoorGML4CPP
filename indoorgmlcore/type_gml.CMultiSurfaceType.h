#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiSurfaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiSurfaceType

#include "type_gml.CAbstractGeometricAggregateType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CMultiSurfaceType : public ::indoorgmlcore::gml::CAbstractGeometricAggregateType
{
public:
	indoorgmlcore_EXPORT CMultiSurfaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMultiSurfaceType(CMultiSurfaceType const& init);
	void operator=(CMultiSurfaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CMultiSurfaceType); }
	MemberElement<gml::CSurfacePropertyType, _altova_mi_gml_altova_CMultiSurfaceType_altova_surfaceMember> surfaceMember;
	struct surfaceMember { typedef Iterator<gml::CSurfacePropertyType> iterator; };
	MemberElement<gml::CSurfaceArrayPropertyType, _altova_mi_gml_altova_CMultiSurfaceType_altova_surfaceMembers> surfaceMembers;
	struct surfaceMembers { typedef Iterator<gml::CSurfaceArrayPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiSurfaceType
