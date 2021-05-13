#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMappingRuleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMappingRuleType



namespace indoorgmlcore
{

namespace gml
{	

class CMappingRuleType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMappingRuleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMappingRuleType(CMappingRuleType const& init);
	void operator=(CMappingRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CMappingRuleType); }
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CMappingRuleType_altova_ruleDefinition> ruleDefinition;
	struct ruleDefinition { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CMappingRuleType_altova_ruleReference> ruleReference;
	struct ruleReference { typedef Iterator<gml::CReferenceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMappingRuleType
