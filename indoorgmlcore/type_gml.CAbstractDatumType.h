#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractDatumType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractDatumType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractDatumType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT CAbstractDatumType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractDatumType(CAbstractDatumType const& init);
	void operator=(CAbstractDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractDatumType); }
	MemberElement<CdomainOfValidityType, _altova_mi_gml_altova_CAbstractDatumType_altova_domainOfValidity> domainOfValidity;
	struct domainOfValidity { typedef Iterator<CdomainOfValidityType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractDatumType_altova_scope> scope;
	struct scope { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CAbstractDatumType_altova_anchorDefinition> anchorDefinition;
	struct anchorDefinition { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CAbstractDatumType_altova_anchorPoint> anchorPoint;
	struct anchorPoint { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<xs::CdateType, _altova_mi_gml_altova_CAbstractDatumType_altova_realizationEpoch> realizationEpoch;
	struct realizationEpoch { typedef Iterator<xs::CdateType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractDatumType
