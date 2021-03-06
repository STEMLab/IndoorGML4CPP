#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Resolution_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Resolution_Type



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Resolution_Type : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_Resolution_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Resolution_Type(CMD_Resolution_Type const& init);
	void operator=(CMD_Resolution_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Resolution_Type); }
	MemberElement<gmd::CMD_RepresentativeFraction_PropertyType, _altova_mi_gmd_altova_CMD_Resolution_Type_altova_equivalentScale> equivalentScale;
	struct equivalentScale { typedef Iterator<gmd::CMD_RepresentativeFraction_PropertyType> iterator; };
	MemberElement<gco::CDistance_PropertyType, _altova_mi_gmd_altova_CMD_Resolution_Type_altova_distance> distance;
	struct distance { typedef Iterator<gco::CDistance_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Resolution_Type
