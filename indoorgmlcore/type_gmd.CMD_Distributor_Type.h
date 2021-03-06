#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Distributor_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Distributor_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Distributor_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMD_Distributor_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Distributor_Type(CMD_Distributor_Type const& init);
	void operator=(CMD_Distributor_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Distributor_Type); }
	MemberElement<gmd::CCI_ResponsibleParty_PropertyType, _altova_mi_gmd_altova_CMD_Distributor_Type_altova_distributorContact> distributorContact;
	struct distributorContact { typedef Iterator<gmd::CCI_ResponsibleParty_PropertyType> iterator; };
	MemberElement<gmd::CMD_StandardOrderProcess_PropertyType, _altova_mi_gmd_altova_CMD_Distributor_Type_altova_distributionOrderProcess> distributionOrderProcess;
	struct distributionOrderProcess { typedef Iterator<gmd::CMD_StandardOrderProcess_PropertyType> iterator; };
	MemberElement<gmd::CMD_Format_PropertyType, _altova_mi_gmd_altova_CMD_Distributor_Type_altova_distributorFormat> distributorFormat;
	struct distributorFormat { typedef Iterator<gmd::CMD_Format_PropertyType> iterator; };
	MemberElement<gmd::CMD_DigitalTransferOptions_PropertyType, _altova_mi_gmd_altova_CMD_Distributor_Type_altova_distributorTransferOptions> distributorTransferOptions;
	struct distributorTransferOptions { typedef Iterator<gmd::CMD_DigitalTransferOptions_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Distributor_Type
