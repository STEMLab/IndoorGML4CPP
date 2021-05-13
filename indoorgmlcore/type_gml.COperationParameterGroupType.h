#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterGroupType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterGroupType

#include "type_gml.CAbstractGeneralOperationParameterType.h"


namespace indoorgmlcore
{

namespace gml
{	

class COperationParameterGroupType : public ::indoorgmlcore::gml::CAbstractGeneralOperationParameterType
{
public:
	indoorgmlcore_EXPORT COperationParameterGroupType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT COperationParameterGroupType(COperationParameterGroupType const& init);
	void operator=(COperationParameterGroupType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_COperationParameterGroupType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_gml_altova_COperationParameterGroupType_altova_maximumOccurs> maximumOccurs;
	struct maximumOccurs { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<gml::CAbstractGeneralOperationParameterPropertyType, _altova_mi_gml_altova_COperationParameterGroupType_altova_parameter> parameter;
	struct parameter { typedef Iterator<gml::CAbstractGeneralOperationParameterPropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralOperationParameterPropertyType, _altova_mi_gml_altova_COperationParameterGroupType_altova_generalOperationParameter> generalOperationParameter;
	struct generalOperationParameter { typedef Iterator<gml::CAbstractGeneralOperationParameterPropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralOperationParameterPropertyType, _altova_mi_gml_altova_COperationParameterGroupType_altova_includesParameter> includesParameter;
	struct includesParameter { typedef Iterator<gml::CAbstractGeneralOperationParameterPropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralOperationParameterPropertyType, _altova_mi_gml_altova_COperationParameterGroupType_altova_usesParameter> usesParameter;
	struct usesParameter { typedef Iterator<gml::CAbstractGeneralOperationParameterPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterGroupType
