#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ScopeDescription_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ScopeDescription_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_ScopeDescription_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_ScopeDescription_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_ScopeDescription_PropertyType(CMD_ScopeDescription_PropertyType const& init);
	void operator=(CMD_ScopeDescription_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_ScopeDescription_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_ScopeDescription_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_ScopeDescription_Type, _altova_mi_gmd_altova_CMD_ScopeDescription_PropertyType_altova_MD_ScopeDescription> MD_ScopeDescription;
	struct MD_ScopeDescription { typedef Iterator<gmd::CMD_ScopeDescription_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ScopeDescription_PropertyType
