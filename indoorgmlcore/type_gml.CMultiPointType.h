#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiPointType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiPointType

#include "type_gml.CAbstractGeometricAggregateType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CMultiPointType : public ::indoorgmlcore::gml::CAbstractGeometricAggregateType
{
public:
	indoorgmlcore_EXPORT CMultiPointType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMultiPointType(CMultiPointType const& init);
	void operator=(CMultiPointType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CMultiPointType); }
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CMultiPointType_altova_pointMember> pointMember;
	struct pointMember { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CPointArrayPropertyType, _altova_mi_gml_altova_CMultiPointType_altova_pointMembers> pointMembers;
	struct pointMembers { typedef Iterator<gml::CPointArrayPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiPointType
