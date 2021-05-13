#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeSolidType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeSolidType

#include "type_gml.CAbstractSolidType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCompositeSolidType : public ::indoorgmlcore::gml::CAbstractSolidType
{
public:
	indoorgmlcore_EXPORT CCompositeSolidType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCompositeSolidType(CCompositeSolidType const& init);
	void operator=(CCompositeSolidType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCompositeSolidType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCompositeSolidType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CSolidPropertyType, _altova_mi_gml_altova_CCompositeSolidType_altova_solidMember> solidMember;
	struct solidMember { typedef Iterator<gml::CSolidPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompositeSolidType
