#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBinary_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBinary_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CBinary_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CBinary_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CBinary_PropertyType(CBinary_PropertyType const& init);
	void operator=(CBinary_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CBinary_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CBinary_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CBinary_Type, _altova_mi_gco_altova_CBinary_PropertyType_altova_Binary> Binary;
	struct Binary { typedef Iterator<gco::CBinary_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBinary_PropertyType
