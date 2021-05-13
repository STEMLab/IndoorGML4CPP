#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_TopicCategoryCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_TopicCategoryCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_TopicCategoryCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_TopicCategoryCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_TopicCategoryCode_PropertyType(CMD_TopicCategoryCode_PropertyType const& init);
	void operator=(CMD_TopicCategoryCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_TopicCategoryCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_TopicCategoryCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_TopicCategoryCode_TypeType, _altova_mi_gmd_altova_CMD_TopicCategoryCode_PropertyType_altova_MD_TopicCategoryCode> MD_TopicCategoryCode;
	struct MD_TopicCategoryCode { typedef Iterator<gmd::CMD_TopicCategoryCode_TypeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_TopicCategoryCode_PropertyType
