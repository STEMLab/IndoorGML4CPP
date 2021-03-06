#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_FeatureCatalogueDescription_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_FeatureCatalogueDescription_Type

#include "type_gmd.CAbstractMD_ContentInformation_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_FeatureCatalogueDescription_Type : public ::indoorgmlcore::gmd::CAbstractMD_ContentInformation_Type
{
public:
	indoorgmlcore_EXPORT CMD_FeatureCatalogueDescription_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_FeatureCatalogueDescription_Type(CMD_FeatureCatalogueDescription_Type const& init);
	void operator=(CMD_FeatureCatalogueDescription_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_FeatureCatalogueDescription_Type); }
	MemberElement<gco::CBoolean_PropertyType, _altova_mi_gmd_altova_CMD_FeatureCatalogueDescription_Type_altova_complianceCode> complianceCode;
	struct complianceCode { typedef Iterator<gco::CBoolean_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_FeatureCatalogueDescription_Type_altova_language> language;
	struct language { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CBoolean_PropertyType, _altova_mi_gmd_altova_CMD_FeatureCatalogueDescription_Type_altova_includedWithDataset> includedWithDataset;
	struct includedWithDataset { typedef Iterator<gco::CBoolean_PropertyType> iterator; };
	MemberElement<gco::CGenericName_PropertyType, _altova_mi_gmd_altova_CMD_FeatureCatalogueDescription_Type_altova_featureTypes> featureTypes;
	struct featureTypes { typedef Iterator<gco::CGenericName_PropertyType> iterator; };
	MemberElement<gmd::CCI_Citation_PropertyType, _altova_mi_gmd_altova_CMD_FeatureCatalogueDescription_Type_altova_featureCatalogueCitation> featureCatalogueCitation;
	struct featureCatalogueCitation { typedef Iterator<gmd::CCI_Citation_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_FeatureCatalogueDescription_Type
