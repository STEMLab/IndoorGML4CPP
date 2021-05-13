#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGenericMetaDataType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGenericMetaDataType

#include "type_gml.CAbstractMetaDataType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CGenericMetaDataType : public ::indoorgmlcore::gml::CAbstractMetaDataType
{
public:
	indoorgmlcore_EXPORT CGenericMetaDataType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGenericMetaDataType(CGenericMetaDataType const& init);
	void operator=(CGenericMetaDataType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGenericMetaDataType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGenericMetaDataType
