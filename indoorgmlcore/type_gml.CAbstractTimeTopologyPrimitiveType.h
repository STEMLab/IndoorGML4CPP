#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeTopologyPrimitiveType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeTopologyPrimitiveType

#include "type_gml.CAbstractTimePrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractTimeTopologyPrimitiveType : public ::indoorgmlcore::gml::CAbstractTimePrimitiveType
{
public:
	indoorgmlcore_EXPORT CAbstractTimeTopologyPrimitiveType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractTimeTopologyPrimitiveType(CAbstractTimeTopologyPrimitiveType const& init);
	void operator=(CAbstractTimeTopologyPrimitiveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractTimeTopologyPrimitiveType); }
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CAbstractTimeTopologyPrimitiveType_altova_complex> complex;
	struct complex { typedef Iterator<gml::CReferenceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeTopologyPrimitiveType
