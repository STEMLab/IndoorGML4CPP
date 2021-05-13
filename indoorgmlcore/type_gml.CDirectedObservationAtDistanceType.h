#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedObservationAtDistanceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedObservationAtDistanceType

#include "type_gml.CDirectedObservationType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDirectedObservationAtDistanceType : public ::indoorgmlcore::gml::CDirectedObservationType
{
public:
	indoorgmlcore_EXPORT CDirectedObservationAtDistanceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDirectedObservationAtDistanceType(CDirectedObservationAtDistanceType const& init);
	void operator=(CDirectedObservationAtDistanceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDirectedObservationAtDistanceType); }
	MemberElement<gml::CMeasureType, _altova_mi_gml_altova_CDirectedObservationAtDistanceType_altova_distance> distance;
	struct distance { typedef Iterator<gml::CMeasureType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedObservationAtDistanceType
