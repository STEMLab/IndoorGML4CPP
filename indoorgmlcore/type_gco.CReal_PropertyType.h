#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CReal_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CReal_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CReal_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CReal_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CReal_PropertyType(CReal_PropertyType const& init);
	void operator=(CReal_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CReal_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CReal_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<xs::CdoubleType, _altova_mi_gco_altova_CReal_PropertyType_altova_Real> Real;
	struct Real { typedef Iterator<xs::CdoubleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CReal_PropertyType
