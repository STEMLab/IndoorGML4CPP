#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedObservationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedObservationType

#include "type_gml.CObservationType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDirectedObservationType : public ::indoorgmlcore::gml::CObservationType
{
public:
	indoorgmlcore_EXPORT CDirectedObservationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDirectedObservationType(CDirectedObservationType const& init);
	void operator=(CDirectedObservationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDirectedObservationType); }
	MemberElement<gml::CDirectionPropertyType, _altova_mi_gml_altova_CDirectedObservationType_altova_direction> direction;
	struct direction { typedef Iterator<gml::CDirectionPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedObservationType
