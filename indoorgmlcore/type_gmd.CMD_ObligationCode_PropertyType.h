#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_ObligationCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_ObligationCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_ObligationCode_PropertyType(CMD_ObligationCode_PropertyType const& init);
	void operator=(CMD_ObligationCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_ObligationCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ObligationCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_ObligationCode_TypeType, _altova_mi_gmd_altova_CMD_ObligationCode_PropertyType_altova_MD_ObligationCode> MD_ObligationCode;
	struct MD_ObligationCode { typedef Iterator<gmd::CMD_ObligationCode_TypeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_PropertyType
