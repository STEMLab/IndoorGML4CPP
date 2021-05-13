#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiCurveType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiCurveType

#include "type_gml.CAbstractGeometricAggregateType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CMultiCurveType : public ::indoorgmlcore::gml::CAbstractGeometricAggregateType
{
public:
	indoorgmlcore_EXPORT CMultiCurveType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMultiCurveType(CMultiCurveType const& init);
	void operator=(CMultiCurveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CMultiCurveType); }
	MemberElement<gml::CCurvePropertyType, _altova_mi_gml_altova_CMultiCurveType_altova_curveMember> curveMember;
	struct curveMember { typedef Iterator<gml::CCurvePropertyType> iterator; };
	MemberElement<gml::CCurveArrayPropertyType, _altova_mi_gml_altova_CMultiCurveType_altova_curveMembers> curveMembers;
	struct curveMembers { typedef Iterator<gml::CCurveArrayPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiCurveType
