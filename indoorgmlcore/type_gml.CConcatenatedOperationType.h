#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConcatenatedOperationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConcatenatedOperationType

#include "type_gml.CAbstractCoordinateOperationType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CConcatenatedOperationType : public ::indoorgmlcore::gml::CAbstractCoordinateOperationType
{
public:
	indoorgmlcore_EXPORT CConcatenatedOperationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CConcatenatedOperationType(CConcatenatedOperationType const& init);
	void operator=(CConcatenatedOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CConcatenatedOperationType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CConcatenatedOperationType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CCoordinateOperationPropertyType, _altova_mi_gml_altova_CConcatenatedOperationType_altova_coordOperation> coordOperation;
	struct coordOperation { typedef Iterator<gml::CCoordinateOperationPropertyType> iterator; };
	MemberElement<gml::CCoordinateOperationPropertyType, _altova_mi_gml_altova_CConcatenatedOperationType_altova_usesOperation> usesOperation;
	struct usesOperation { typedef Iterator<gml::CCoordinateOperationPropertyType> iterator; };
	MemberElement<gml::CCoordinateOperationPropertyType, _altova_mi_gml_altova_CConcatenatedOperationType_altova_usesSingleOperation> usesSingleOperation;
	struct usesSingleOperation { typedef Iterator<gml::CCoordinateOperationPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CConcatenatedOperationType
