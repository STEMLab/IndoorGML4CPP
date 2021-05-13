#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeometricAggregateType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeometricAggregateType

#include "type_gml.CAbstractGeometryType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractGeometricAggregateType : public ::indoorgmlcore::gml::CAbstractGeometryType
{
public:
	indoorgmlcore_EXPORT CAbstractGeometricAggregateType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractGeometricAggregateType(CAbstractGeometricAggregateType const& init);
	void operator=(CAbstractGeometricAggregateType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractGeometricAggregateType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CAbstractGeometricAggregateType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeometricAggregateType
