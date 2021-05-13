#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CUnitDefinitionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CUnitDefinitionType

#include "type_gml.CDefinitionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CUnitDefinitionType : public ::indoorgmlcore::gml::CDefinitionType
{
public:
	indoorgmlcore_EXPORT CUnitDefinitionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CUnitDefinitionType(CUnitDefinitionType const& init);
	void operator=(CUnitDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CUnitDefinitionType); }
	MemberElement<gml::CStringOrRefType, _altova_mi_gml_altova_CUnitDefinitionType_altova_quantityType> quantityType;
	struct quantityType { typedef Iterator<gml::CStringOrRefType> iterator; };
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CUnitDefinitionType_altova_quantityTypeReference> quantityTypeReference;
	struct quantityTypeReference { typedef Iterator<gml::CReferenceType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CUnitDefinitionType_altova_catalogSymbol> catalogSymbol;
	struct catalogSymbol { typedef Iterator<gml::CCodeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CUnitDefinitionType
