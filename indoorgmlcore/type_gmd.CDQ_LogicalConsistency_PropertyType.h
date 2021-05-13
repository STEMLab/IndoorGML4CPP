#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_LogicalConsistency_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_LogicalConsistency_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_LogicalConsistency_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDQ_LogicalConsistency_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_LogicalConsistency_PropertyType(CDQ_LogicalConsistency_PropertyType const& init);
	void operator=(CDQ_LogicalConsistency_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_LogicalConsistency_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CDQ_ConceptualConsistency_Type, _altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_DQ_ConceptualConsistency> DQ_ConceptualConsistency;
	struct DQ_ConceptualConsistency { typedef Iterator<gmd::CDQ_ConceptualConsistency_Type> iterator; };
	MemberElement<gmd::CDQ_DomainConsistency_Type, _altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_DQ_DomainConsistency> DQ_DomainConsistency;
	struct DQ_DomainConsistency { typedef Iterator<gmd::CDQ_DomainConsistency_Type> iterator; };
	MemberElement<gmd::CDQ_FormatConsistency_Type, _altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_DQ_FormatConsistency> DQ_FormatConsistency;
	struct DQ_FormatConsistency { typedef Iterator<gmd::CDQ_FormatConsistency_Type> iterator; };
	MemberElement<gmd::CDQ_TopologicalConsistency_Type, _altova_mi_gmd_altova_CDQ_LogicalConsistency_PropertyType_altova_DQ_TopologicalConsistency> DQ_TopologicalConsistency;
	struct DQ_TopologicalConsistency { typedef Iterator<gmd::CDQ_TopologicalConsistency_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_LogicalConsistency_PropertyType
