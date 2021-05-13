#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeGeometricPrimitiveType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeGeometricPrimitiveType

#include "type_gml.CAbstractTimePrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractTimeGeometricPrimitiveType : public ::indoorgmlcore::gml::CAbstractTimePrimitiveType
{
public:
	indoorgmlcore_EXPORT CAbstractTimeGeometricPrimitiveType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractTimeGeometricPrimitiveType(CAbstractTimeGeometricPrimitiveType const& init);
	void operator=(CAbstractTimeGeometricPrimitiveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractTimeGeometricPrimitiveType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CAbstractTimeGeometricPrimitiveType_altova_frame, 0, 0> frame;	// frame CanyURI
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeGeometricPrimitiveType
