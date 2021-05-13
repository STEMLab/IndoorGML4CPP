#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConventionalUnitType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConventionalUnitType

#include "type_gml.CUnitDefinitionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CConventionalUnitType : public ::indoorgmlcore::gml::CUnitDefinitionType
{
public:
	indoorgmlcore_EXPORT CConventionalUnitType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CConventionalUnitType(CConventionalUnitType const& init);
	void operator=(CConventionalUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CConventionalUnitType); }
	MemberElement<gml::CConversionToPreferredUnitType, _altova_mi_gml_altova_CConventionalUnitType_altova_conversionToPreferredUnit> conversionToPreferredUnit;
	struct conversionToPreferredUnit { typedef Iterator<gml::CConversionToPreferredUnitType> iterator; };
	MemberElement<gml::CConversionToPreferredUnitType, _altova_mi_gml_altova_CConventionalUnitType_altova_roughConversionToPreferredUnit> roughConversionToPreferredUnit;
	struct roughConversionToPreferredUnit { typedef Iterator<gml::CConversionToPreferredUnitType> iterator; };
	MemberElement<gml::CDerivationUnitTermType, _altova_mi_gml_altova_CConventionalUnitType_altova_derivationUnitTerm> derivationUnitTerm;
	struct derivationUnitTerm { typedef Iterator<gml::CDerivationUnitTermType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConventionalUnitType
