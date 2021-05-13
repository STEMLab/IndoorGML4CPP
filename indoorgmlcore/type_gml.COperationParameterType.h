#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterType

#include "type_gml.CAbstractGeneralOperationParameterType.h"


namespace indoorgmlcore
{

namespace gml
{	

class COperationParameterType : public ::indoorgmlcore::gml::CAbstractGeneralOperationParameterType
{
public:
	indoorgmlcore_EXPORT COperationParameterType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT COperationParameterType(COperationParameterType const& init);
	void operator=(COperationParameterType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_COperationParameterType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterType
