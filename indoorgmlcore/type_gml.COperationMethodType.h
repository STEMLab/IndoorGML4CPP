#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationMethodType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationMethodType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class COperationMethodType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT COperationMethodType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT COperationMethodType(COperationMethodType const& init);
	void operator=(COperationMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_COperationMethodType); }
	MemberElement<CformulaCitationType, _altova_mi_gml_altova_COperationMethodType_altova_formulaCitation> formulaCitation;
	struct formulaCitation { typedef Iterator<CformulaCitationType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_COperationMethodType_altova_formula> formula;
	struct formula { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_COperationMethodType_altova_methodFormula> methodFormula;
	struct methodFormula { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_gml_altova_COperationMethodType_altova_sourceDimensions> sourceDimensions;
	struct sourceDimensions { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_gml_altova_COperationMethodType_altova_targetDimensions> targetDimensions;
	struct targetDimensions { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<gml::CAbstractGeneralOperationParameterPropertyType, _altova_mi_gml_altova_COperationMethodType_altova_parameter> parameter;
	struct parameter { typedef Iterator<gml::CAbstractGeneralOperationParameterPropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralOperationParameterPropertyType, _altova_mi_gml_altova_COperationMethodType_altova_generalOperationParameter> generalOperationParameter;
	struct generalOperationParameter { typedef Iterator<gml::CAbstractGeneralOperationParameterPropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralOperationParameterPropertyType, _altova_mi_gml_altova_COperationMethodType_altova_includesParameter> includesParameter;
	struct includesParameter { typedef Iterator<gml::CAbstractGeneralOperationParameterPropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralOperationParameterPropertyType, _altova_mi_gml_altova_COperationMethodType_altova_usesParameter> usesParameter;
	struct usesParameter { typedef Iterator<gml::CAbstractGeneralOperationParameterPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationMethodType
