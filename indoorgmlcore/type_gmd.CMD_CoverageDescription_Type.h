#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_CoverageDescription_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_CoverageDescription_Type

#include "type_gmd.CAbstractMD_ContentInformation_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_CoverageDescription_Type : public ::indoorgmlcore::gmd::CAbstractMD_ContentInformation_Type
{
public:
	indoorgmlcore_EXPORT CMD_CoverageDescription_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_CoverageDescription_Type(CMD_CoverageDescription_Type const& init);
	void operator=(CMD_CoverageDescription_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_CoverageDescription_Type); }
	MemberElement<gco::CRecordType_PropertyType, _altova_mi_gmd_altova_CMD_CoverageDescription_Type_altova_attributeDescription> attributeDescription;
	struct attributeDescription { typedef Iterator<gco::CRecordType_PropertyType> iterator; };
	MemberElement<gmd::CMD_CoverageContentTypeCode_PropertyType, _altova_mi_gmd_altova_CMD_CoverageDescription_Type_altova_contentType> contentType;
	struct contentType { typedef Iterator<gmd::CMD_CoverageContentTypeCode_PropertyType> iterator; };
	MemberElement<gmd::CMD_RangeDimension_PropertyType, _altova_mi_gmd_altova_CMD_CoverageDescription_Type_altova_dimension> dimension;
	struct dimension { typedef Iterator<gmd::CMD_RangeDimension_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_CoverageDescription_Type
