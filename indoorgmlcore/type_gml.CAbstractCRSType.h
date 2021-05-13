#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCRSType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractCRSType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT CAbstractCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractCRSType(CAbstractCRSType const& init);
	void operator=(CAbstractCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractCRSType); }
	MemberElement<CdomainOfValidityType, _altova_mi_gml_altova_CAbstractCRSType_altova_domainOfValidity> domainOfValidity;
	struct domainOfValidity { typedef Iterator<CdomainOfValidityType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractCRSType_altova_scope> scope;
	struct scope { typedef Iterator<xs::CstringType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCRSType
