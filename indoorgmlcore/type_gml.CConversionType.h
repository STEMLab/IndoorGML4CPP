#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConversionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConversionType

#include "type_gml.CAbstractGeneralConversionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CConversionType : public ::indoorgmlcore::gml::CAbstractGeneralConversionType
{
public:
	indoorgmlcore_EXPORT CConversionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CConversionType(CConversionType const& init);
	void operator=(CConversionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CConversionType); }
	MemberElement<gml::COperationMethodPropertyType, _altova_mi_gml_altova_CConversionType_altova_method> method;
	struct method { typedef Iterator<gml::COperationMethodPropertyType> iterator; };
	MemberElement<gml::COperationMethodPropertyType, _altova_mi_gml_altova_CConversionType_altova_usesMethod> usesMethod;
	struct usesMethod { typedef Iterator<gml::COperationMethodPropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralParameterValuePropertyType, _altova_mi_gml_altova_CConversionType_altova_parameterValue> parameterValue;
	struct parameterValue { typedef Iterator<gml::CAbstractGeneralParameterValuePropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralParameterValuePropertyType, _altova_mi_gml_altova_CConversionType_altova_includesValue> includesValue;
	struct includesValue { typedef Iterator<gml::CAbstractGeneralParameterValuePropertyType> iterator; };
	MemberElement<gml::CAbstractGeneralParameterValuePropertyType, _altova_mi_gml_altova_CConversionType_altova_usesValue> usesValue;
	struct usesValue { typedef Iterator<gml::CAbstractGeneralParameterValuePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConversionType
