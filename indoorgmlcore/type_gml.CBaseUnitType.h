#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBaseUnitType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBaseUnitType

#include "type_gml.CUnitDefinitionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CBaseUnitType : public ::indoorgmlcore::gml::CUnitDefinitionType
{
public:
	indoorgmlcore_EXPORT CBaseUnitType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CBaseUnitType(CBaseUnitType const& init);
	void operator=(CBaseUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CBaseUnitType); }
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CBaseUnitType_altova_unitsSystem> unitsSystem;
	struct unitsSystem { typedef Iterator<gml::CReferenceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBaseUnitType
