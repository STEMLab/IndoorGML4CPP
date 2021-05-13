#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDerivationUnitTermType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDerivationUnitTermType

#include "type_gml.CUnitOfMeasureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDerivationUnitTermType : public ::indoorgmlcore::gml::CUnitOfMeasureType
{
public:
	indoorgmlcore_EXPORT CDerivationUnitTermType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDerivationUnitTermType(CDerivationUnitTermType const& init);
	void operator=(CDerivationUnitTermType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDerivationUnitTermType); }

	MemberAttribute<__int64,_altova_mi_gml_altova_CDerivationUnitTermType_altova_exponent, 0, 0> exponent;	// exponent Cinteger
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDerivationUnitTermType
