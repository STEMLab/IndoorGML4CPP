#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_AggregateInformation_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_AggregateInformation_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_AggregateInformation_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMD_AggregateInformation_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_AggregateInformation_Type(CMD_AggregateInformation_Type const& init);
	void operator=(CMD_AggregateInformation_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_AggregateInformation_Type); }
	MemberElement<gmd::CCI_Citation_PropertyType, _altova_mi_gmd_altova_CMD_AggregateInformation_Type_altova_aggregateDataSetName> aggregateDataSetName;
	struct aggregateDataSetName { typedef Iterator<gmd::CCI_Citation_PropertyType> iterator; };
	MemberElement<gmd::CMD_Identifier_PropertyType, _altova_mi_gmd_altova_CMD_AggregateInformation_Type_altova_aggregateDataSetIdentifier> aggregateDataSetIdentifier;
	struct aggregateDataSetIdentifier { typedef Iterator<gmd::CMD_Identifier_PropertyType> iterator; };
	MemberElement<gmd::CDS_AssociationTypeCode_PropertyType, _altova_mi_gmd_altova_CMD_AggregateInformation_Type_altova_associationType> associationType;
	struct associationType { typedef Iterator<gmd::CDS_AssociationTypeCode_PropertyType> iterator; };
	MemberElement<gmd::CDS_InitiativeTypeCode_PropertyType, _altova_mi_gmd_altova_CMD_AggregateInformation_Type_altova_initiativeType> initiativeType;
	struct initiativeType { typedef Iterator<gmd::CDS_InitiativeTypeCode_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_AggregateInformation_Type
