#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CCharacterString_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CCharacterString_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CCharacterString_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCharacterString_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCharacterString_PropertyType(CCharacterString_PropertyType const& init);
	void operator=(CCharacterString_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CCharacterString_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CCharacterString_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<xs::CstringType, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_CharacterString> CharacterString;
	struct CharacterString { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_CI_DateTypeCode> CI_DateTypeCode;
	struct CI_DateTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_CI_OnLineFunctionCode> CI_OnLineFunctionCode;
	struct CI_OnLineFunctionCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_CI_PresentationFormCode> CI_PresentationFormCode;
	struct CI_PresentationFormCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_CI_RoleCode> CI_RoleCode;
	struct CI_RoleCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_Country> Country;
	struct Country { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_DQ_EvaluationMethodTypeCode> DQ_EvaluationMethodTypeCode;
	struct DQ_EvaluationMethodTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_DS_AssociationTypeCode> DS_AssociationTypeCode;
	struct DS_AssociationTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_DS_InitiativeTypeCode> DS_InitiativeTypeCode;
	struct DS_InitiativeTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_LanguageCode> LanguageCode;
	struct LanguageCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gmd::CLocalisedCharacterString_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_LocalisedCharacterString> LocalisedCharacterString;
	struct LocalisedCharacterString { typedef Iterator<gmd::CLocalisedCharacterString_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_CellGeometryCode> MD_CellGeometryCode;
	struct MD_CellGeometryCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_CharacterSetCode> MD_CharacterSetCode;
	struct MD_CharacterSetCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_ClassificationCode> MD_ClassificationCode;
	struct MD_ClassificationCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_CoverageContentTypeCode> MD_CoverageContentTypeCode;
	struct MD_CoverageContentTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_DatatypeCode> MD_DatatypeCode;
	struct MD_DatatypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_DimensionNameTypeCode> MD_DimensionNameTypeCode;
	struct MD_DimensionNameTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_DistributionUnits> MD_DistributionUnits;
	struct MD_DistributionUnits { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_GeometricObjectTypeCode> MD_GeometricObjectTypeCode;
	struct MD_GeometricObjectTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_ImagingConditionCode> MD_ImagingConditionCode;
	struct MD_ImagingConditionCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_KeywordTypeCode> MD_KeywordTypeCode;
	struct MD_KeywordTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_MaintenanceFrequencyCode> MD_MaintenanceFrequencyCode;
	struct MD_MaintenanceFrequencyCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_MediumFormatCode> MD_MediumFormatCode;
	struct MD_MediumFormatCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_MediumNameCode> MD_MediumNameCode;
	struct MD_MediumNameCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gmd::CMD_ObligationCode_TypeType, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_ObligationCode> MD_ObligationCode;
	struct MD_ObligationCode { typedef Iterator<gmd::CMD_ObligationCode_TypeType> iterator; };
	MemberElement<gmd::CMD_PixelOrientationCode_TypeType, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_PixelOrientationCode> MD_PixelOrientationCode;
	struct MD_PixelOrientationCode { typedef Iterator<gmd::CMD_PixelOrientationCode_TypeType> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_ProgressCode> MD_ProgressCode;
	struct MD_ProgressCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_RestrictionCode> MD_RestrictionCode;
	struct MD_RestrictionCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_ScopeCode> MD_ScopeCode;
	struct MD_ScopeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_SpatialRepresentationTypeCode> MD_SpatialRepresentationTypeCode;
	struct MD_SpatialRepresentationTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	MemberElement<gmd::CMD_TopicCategoryCode_TypeType, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_TopicCategoryCode> MD_TopicCategoryCode;
	struct MD_TopicCategoryCode { typedef Iterator<gmd::CMD_TopicCategoryCode_TypeType> iterator; };
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gco_altova_CCharacterString_PropertyType_altova_MD_TopologyLevelCode> MD_TopologyLevelCode;
	struct MD_TopologyLevelCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CCharacterString_PropertyType
