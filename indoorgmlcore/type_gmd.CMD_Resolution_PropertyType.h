#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Resolution_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Resolution_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Resolution_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_Resolution_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Resolution_PropertyType(CMD_Resolution_PropertyType const& init);
	void operator=(CMD_Resolution_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Resolution_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_Resolution_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_Resolution_Type, _altova_mi_gmd_altova_CMD_Resolution_PropertyType_altova_MD_Resolution> MD_Resolution;
	struct MD_Resolution { typedef Iterator<gmd::CMD_Resolution_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Resolution_PropertyType
