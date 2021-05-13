#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeCurveType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeCurveType

#include "type_gml.CAbstractCurveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCompositeCurveType : public ::indoorgmlcore::gml::CAbstractCurveType
{
public:
	indoorgmlcore_EXPORT CCompositeCurveType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCompositeCurveType(CCompositeCurveType const& init);
	void operator=(CCompositeCurveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCompositeCurveType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCompositeCurveType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CCurvePropertyType, _altova_mi_gml_altova_CCompositeCurveType_altova_curveMember> curveMember;
	struct curveMember { typedef Iterator<gml::CCurvePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeCurveType
