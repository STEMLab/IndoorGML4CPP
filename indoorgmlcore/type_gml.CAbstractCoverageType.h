#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoverageType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoverageType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractCoverageType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CAbstractCoverageType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractCoverageType(CAbstractCoverageType const& init);
	void operator=(CAbstractCoverageType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractCoverageType); }
	MemberElement<gml::CDomainSetType, _altova_mi_gml_altova_CAbstractCoverageType_altova_domainSet> domainSet;
	struct domainSet { typedef Iterator<gml::CDomainSetType> iterator; };
	MemberElement<gml::CDomainSetType, _altova_mi_gml_altova_CAbstractCoverageType_altova_gridDomain> gridDomain;
	struct gridDomain { typedef Iterator<gml::CDomainSetType> iterator; };
	MemberElement<gml::CDomainSetType, _altova_mi_gml_altova_CAbstractCoverageType_altova_multiCurveDomain> multiCurveDomain;
	struct multiCurveDomain { typedef Iterator<gml::CDomainSetType> iterator; };
	MemberElement<gml::CDomainSetType, _altova_mi_gml_altova_CAbstractCoverageType_altova_multiPointDomain> multiPointDomain;
	struct multiPointDomain { typedef Iterator<gml::CDomainSetType> iterator; };
	MemberElement<gml::CDomainSetType, _altova_mi_gml_altova_CAbstractCoverageType_altova_multiSolidDomain> multiSolidDomain;
	struct multiSolidDomain { typedef Iterator<gml::CDomainSetType> iterator; };
	MemberElement<gml::CDomainSetType, _altova_mi_gml_altova_CAbstractCoverageType_altova_multiSurfaceDomain> multiSurfaceDomain;
	struct multiSurfaceDomain { typedef Iterator<gml::CDomainSetType> iterator; };
	MemberElement<gml::CDomainSetType, _altova_mi_gml_altova_CAbstractCoverageType_altova_rectifiedGridDomain> rectifiedGridDomain;
	struct rectifiedGridDomain { typedef Iterator<gml::CDomainSetType> iterator; };
	MemberElement<gml::CRangeSetType, _altova_mi_gml_altova_CAbstractCoverageType_altova_rangeSet> rangeSet;
	struct rangeSet { typedef Iterator<gml::CRangeSetType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoverageType
