#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CsecondDefiningParameterType2
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CsecondDefiningParameterType2



namespace indoorgmlcore
{

class CsecondDefiningParameterType2 : public ElementType
{
public:
	indoorgmlcore_EXPORT CsecondDefiningParameterType2(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CsecondDefiningParameterType2(CsecondDefiningParameterType2 const& init);
	void operator=(CsecondDefiningParameterType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CsecondDefiningParameterType2); }
	MemberElement<CSecondDefiningParameterType, _altova_mi_altova_CsecondDefiningParameterType2_altova_SecondDefiningParameter> SecondDefiningParameter;
	struct SecondDefiningParameter { typedef Iterator<CSecondDefiningParameterType> iterator; };
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CsecondDefiningParameterType2
