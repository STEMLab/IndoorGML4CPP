#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CObservationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CObservationType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CObservationType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CObservationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CObservationType(CObservationType const& init);
	void operator=(CObservationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CObservationType); }
	MemberElement<gml::CTimePrimitivePropertyType, _altova_mi_gml_altova_CObservationType_altova_validTime> validTime;
	struct validTime { typedef Iterator<gml::CTimePrimitivePropertyType> iterator; };
	MemberElement<gml::CProcedurePropertyType, _altova_mi_gml_altova_CObservationType_altova_using2> using2;
	struct using2 { typedef Iterator<gml::CProcedurePropertyType> iterator; };
	MemberElement<gml::CTargetPropertyType, _altova_mi_gml_altova_CObservationType_altova_target> target;
	struct target { typedef Iterator<gml::CTargetPropertyType> iterator; };
	MemberElement<gml::CTargetPropertyType, _altova_mi_gml_altova_CObservationType_altova_subject> subject;
	struct subject { typedef Iterator<gml::CTargetPropertyType> iterator; };
	MemberElement<gml::CResultType, _altova_mi_gml_altova_CObservationType_altova_resultOf> resultOf;
	struct resultOf { typedef Iterator<gml::CResultType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CObservationType
