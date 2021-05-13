#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPassThroughOperationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPassThroughOperationType

#include "type_gml.CAbstractCoordinateOperationType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CPassThroughOperationType : public ::indoorgmlcore::gml::CAbstractCoordinateOperationType
{
public:
	indoorgmlcore_EXPORT CPassThroughOperationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CPassThroughOperationType(CPassThroughOperationType const& init);
	void operator=(CPassThroughOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CPassThroughOperationType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CPassThroughOperationType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<xs::CpositiveIntegerType, _altova_mi_gml_altova_CPassThroughOperationType_altova_modifiedCoordinate> modifiedCoordinate;
	struct modifiedCoordinate { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<gml::CCoordinateOperationPropertyType, _altova_mi_gml_altova_CPassThroughOperationType_altova_coordOperation> coordOperation;
	struct coordOperation { typedef Iterator<gml::CCoordinateOperationPropertyType> iterator; };
	MemberElement<gml::CCoordinateOperationPropertyType, _altova_mi_gml_altova_CPassThroughOperationType_altova_usesOperation> usesOperation;
	struct usesOperation { typedef Iterator<gml::CCoordinateOperationPropertyType> iterator; };
	MemberElement<gml::CCoordinateOperationPropertyType, _altova_mi_gml_altova_CPassThroughOperationType_altova_usesSingleOperation> usesSingleOperation;
	struct usesSingleOperation { typedef Iterator<gml::CCoordinateOperationPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPassThroughOperationType
