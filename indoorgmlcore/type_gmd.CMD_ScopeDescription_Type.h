#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ScopeDescription_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ScopeDescription_Type



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_ScopeDescription_Type : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_ScopeDescription_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_ScopeDescription_Type(CMD_ScopeDescription_Type const& init);
	void operator=(CMD_ScopeDescription_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_ScopeDescription_Type); }
	MemberElement<gco::CObjectReference_PropertyType, _altova_mi_gmd_altova_CMD_ScopeDescription_Type_altova_attributes> attributes;
	struct attributes { typedef Iterator<gco::CObjectReference_PropertyType> iterator; };
	MemberElement<gco::CObjectReference_PropertyType, _altova_mi_gmd_altova_CMD_ScopeDescription_Type_altova_features> features;
	struct features { typedef Iterator<gco::CObjectReference_PropertyType> iterator; };
	MemberElement<gco::CObjectReference_PropertyType, _altova_mi_gmd_altova_CMD_ScopeDescription_Type_altova_featureInstances> featureInstances;
	struct featureInstances { typedef Iterator<gco::CObjectReference_PropertyType> iterator; };
	MemberElement<gco::CObjectReference_PropertyType, _altova_mi_gmd_altova_CMD_ScopeDescription_Type_altova_attributeInstances> attributeInstances;
	struct attributeInstances { typedef Iterator<gco::CObjectReference_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_ScopeDescription_Type_altova_dataset> dataset;
	struct dataset { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_ScopeDescription_Type_altova_other> other;
	struct other { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ScopeDescription_Type
