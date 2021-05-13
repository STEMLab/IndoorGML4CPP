#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ContentInformation_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ContentInformation_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_ContentInformation_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_ContentInformation_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_ContentInformation_PropertyType(CMD_ContentInformation_PropertyType const& init);
	void operator=(CMD_ContentInformation_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_ContentInformation_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_CoverageDescription_Type, _altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_MD_CoverageDescription> MD_CoverageDescription;
	struct MD_CoverageDescription { typedef Iterator<gmd::CMD_CoverageDescription_Type> iterator; };
	MemberElement<gmd::CMD_FeatureCatalogueDescription_Type, _altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_MD_FeatureCatalogueDescription> MD_FeatureCatalogueDescription;
	struct MD_FeatureCatalogueDescription { typedef Iterator<gmd::CMD_FeatureCatalogueDescription_Type> iterator; };
	MemberElement<gmd::CMD_ImageDescription_Type, _altova_mi_gmd_altova_CMD_ContentInformation_PropertyType_altova_MD_ImageDescription> MD_ImageDescription;
	struct MD_ImageDescription { typedef Iterator<gmd::CMD_ImageDescription_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ContentInformation_PropertyType
