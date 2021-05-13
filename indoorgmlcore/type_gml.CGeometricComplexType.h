#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeometricComplexType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeometricComplexType

#include "type_gml.CAbstractGeometryType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CGeometricComplexType : public ::indoorgmlcore::gml::CAbstractGeometryType
{
public:
	indoorgmlcore_EXPORT CGeometricComplexType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGeometricComplexType(CGeometricComplexType const& init);
	void operator=(CGeometricComplexType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGeometricComplexType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CGeometricComplexType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CGeometricPrimitivePropertyType, _altova_mi_gml_altova_CGeometricComplexType_altova_element> element;
	struct element { typedef Iterator<gml::CGeometricPrimitivePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeometricComplexType
