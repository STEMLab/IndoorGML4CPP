#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoordinateOperationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoordinateOperationType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractCoordinateOperationType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT CAbstractCoordinateOperationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractCoordinateOperationType(CAbstractCoordinateOperationType const& init);
	void operator=(CAbstractCoordinateOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractCoordinateOperationType); }
	MemberElement<CdomainOfValidityType, _altova_mi_gml_altova_CAbstractCoordinateOperationType_altova_domainOfValidity> domainOfValidity;
	struct domainOfValidity { typedef Iterator<CdomainOfValidityType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractCoordinateOperationType_altova_scope> scope;
	struct scope { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractCoordinateOperationType_altova_operationVersion> operationVersion;
	struct operationVersion { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CcoordinateOperationAccuracyType, _altova_mi_gml_altova_CAbstractCoordinateOperationType_altova_coordinateOperationAccuracy> coordinateOperationAccuracy;
	struct coordinateOperationAccuracy { typedef Iterator<CcoordinateOperationAccuracyType> iterator; };
	MemberElement<gml::CCRSPropertyType, _altova_mi_gml_altova_CAbstractCoordinateOperationType_altova_sourceCRS> sourceCRS;
	struct sourceCRS { typedef Iterator<gml::CCRSPropertyType> iterator; };
	MemberElement<gml::CCRSPropertyType, _altova_mi_gml_altova_CAbstractCoordinateOperationType_altova_targetCRS> targetCRS;
	struct targetCRS { typedef Iterator<gml::CCRSPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoordinateOperationType
