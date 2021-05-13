#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractContinuousCoverageType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractContinuousCoverageType

#include "type_gml.CAbstractCoverageType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractContinuousCoverageType : public ::indoorgmlcore::gml::CAbstractCoverageType
{
public:
	indoorgmlcore_EXPORT CAbstractContinuousCoverageType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractContinuousCoverageType(CAbstractContinuousCoverageType const& init);
	void operator=(CAbstractContinuousCoverageType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractContinuousCoverageType); }
	MemberElement<gml::CCoverageFunctionType, _altova_mi_gml_altova_CAbstractContinuousCoverageType_altova_coverageFunction> coverageFunction;
	struct coverageFunction { typedef Iterator<gml::CCoverageFunctionType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractContinuousCoverageType
