#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConversionToPreferredUnitType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConversionToPreferredUnitType

#include "type_gml.CUnitOfMeasureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CConversionToPreferredUnitType : public ::indoorgmlcore::gml::CUnitOfMeasureType
{
public:
	indoorgmlcore_EXPORT CConversionToPreferredUnitType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CConversionToPreferredUnitType(CConversionToPreferredUnitType const& init);
	void operator=(CConversionToPreferredUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CConversionToPreferredUnitType); }
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CConversionToPreferredUnitType_altova_factor> factor;
	struct factor { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<gml::CFormulaType, _altova_mi_gml_altova_CConversionToPreferredUnitType_altova_formula> formula;
	struct formula { typedef Iterator<gml::CFormulaType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConversionToPreferredUnitType
