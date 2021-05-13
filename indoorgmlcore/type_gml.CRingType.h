#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRingType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRingType

#include "type_gml.CAbstractRingType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CRingType : public ::indoorgmlcore::gml::CAbstractRingType
{
public:
	indoorgmlcore_EXPORT CRingType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CRingType(CRingType const& init);
	void operator=(CRingType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CRingType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CRingType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CCurvePropertyType, _altova_mi_gml_altova_CRingType_altova_curveMember> curveMember;
	struct curveMember { typedef Iterator<gml::CCurvePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRingType
