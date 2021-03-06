#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Distribution_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Distribution_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Distribution_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMD_Distribution_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Distribution_Type(CMD_Distribution_Type const& init);
	void operator=(CMD_Distribution_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Distribution_Type); }
	MemberElement<gmd::CMD_Format_PropertyType, _altova_mi_gmd_altova_CMD_Distribution_Type_altova_distributionFormat> distributionFormat;
	struct distributionFormat { typedef Iterator<gmd::CMD_Format_PropertyType> iterator; };
	MemberElement<gmd::CMD_Distributor_PropertyType, _altova_mi_gmd_altova_CMD_Distribution_Type_altova_distributor> distributor;
	struct distributor { typedef Iterator<gmd::CMD_Distributor_PropertyType> iterator; };
	MemberElement<gmd::CMD_DigitalTransferOptions_PropertyType, _altova_mi_gmd_altova_CMD_Distribution_Type_altova_transferOptions> transferOptions;
	struct transferOptions { typedef Iterator<gmd::CMD_DigitalTransferOptions_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Distribution_Type
