#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralOperationParameterType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralOperationParameterType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractGeneralOperationParameterType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT CAbstractGeneralOperationParameterType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractGeneralOperationParameterType(CAbstractGeneralOperationParameterType const& init);
	void operator=(CAbstractGeneralOperationParameterType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractGeneralOperationParameterType); }
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_gml_altova_CAbstractGeneralOperationParameterType_altova_minimumOccurs> minimumOccurs;
	struct minimumOccurs { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralOperationParameterType
