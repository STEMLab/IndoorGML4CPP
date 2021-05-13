#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeReferenceSystemType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeReferenceSystemType

#include "type_gml.CDefinitionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeReferenceSystemType : public ::indoorgmlcore::gml::CDefinitionType
{
public:
	indoorgmlcore_EXPORT CTimeReferenceSystemType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeReferenceSystemType(CTimeReferenceSystemType const& init);
	void operator=(CTimeReferenceSystemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeReferenceSystemType); }
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CTimeReferenceSystemType_altova_domainOfValidity> domainOfValidity;
	struct domainOfValidity { typedef Iterator<xs::CstringType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeReferenceSystemType
